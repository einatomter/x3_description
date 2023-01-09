#!/usr/bin/env python3

# Keyboard teleop for the x3 rover
# Code uses uuv teleop as reference

from __future__ import print_function
import os
import time
import sys, termios
import rospy
from geometry_msgs.msg import Wrench, Accel, Vector3

from pynput import keyboard

# Keyboard combinations
TERMINATE = {keyboard.Key.ctrl, "c"}
# Keyboard toggles
paused = 0

current = set()

# Check if button pressed toggles a setting - key version
def key_toggle(key):
    global paused
    if key == keyboard.Key.f1:
        print("toggled pause")
        paused = not paused

def on_press(key):
    try:
        current.add(key.char)
        # print(key.char)
    except AttributeError:
        current.add(key)
        # print("non alphanum")

def on_release(key):
    try:
        current.remove(key.char)
        # print(f"removed {key.char}")
    except AttributeError:
        current.remove(key)
        key_toggle(key)
        # print(f"removed {key}")
    except KeyError:
        pass

class x3TeleopKeyboard:
    def __init__(self):
        # Class Variables
        self.settings = termios.tcgetattr(sys.stdin)
        # Speed settings
        self.speed = 1                  # 1 = Slow, 2 = Fast
        self.l = Vector3(0, 0, 0)       # Linear Velocity
        self.a = Vector3(0, 0, 0)       # Angular Velocity
        self.linear_increment = 10      # How much to increment linear velocities by, to avoid jerkyness
        self.linear_limit = 10          # Linear velocity limit = self.linear_limit * self.speed
        self.angular_increment = 3
        self.angular_limit = 3

        # User Interface
        self.msg = """
    Control Your Vehicle!
    ---------------------------
    Moving around:
        W/S: X-Axis
        A/D: Y-Axis
        X/Z: Z-Axis

        Q/E: Yaw
        I/K: Pitch
        J/L: Roll

    Slow / Fast: 1 / 2

    P: pause input

    CTRL-C to quit
            """

        # Default message remains as Wrench
        self._msg_type = 'Wrench'
        if rospy.has_param('~type'):
            self._msg_type = rospy.get_param('~type')
            if self._msg_type not in ['Wrench', 'accel']:
                raise rospy.ROSException('Teleoperation output must be either '
                                         'Wrench or accel')
        # Name Publisher topics accordingly
        self._output_pub = rospy.Publisher('/x3/thruster_manager/input', Wrench, queue_size=1)

        print(self.msg)

        # Ros Spin
        rate = rospy.Rate(50)  # 50hz
        while not rospy.is_shutdown():
            rate.sleep()
            self._parse_keyboard()

    # Function to gradually build up the speed and avoid jerkyness #
    def _speed_windup(self, speed, increment, limit, reverse):
        if reverse == True:
            speed -= increment * self.speed
            if speed < -limit * self.speed:
                speed = -limit * self.speed
        else:
            speed += increment * self.speed
            if speed > limit * self.speed:
                speed = limit * self.speed

        return speed

    # wrapper for _speed_windup, adds input to test if speed should change
    def _update_velocity(self, input, speed, increment, limit, reverse):
        if input in current:
            speed = self._speed_windup(speed, increment, limit, reverse)
        return speed

    # if input 1 or 2 is not being pressed, zero out velocity
    def _zero_velocity(self, input1, input2, speed):
        if (input1 not in current) and (input2 not in current):
            speed = 0
        return speed

    def _rov_controls(self):
        # Set Vehicle Speed
        if "1" in current:
            self.speed = 1
        if "2" in current:
            self.speed = 2

        # Choose ros message accordingly
        if self._msg_type == 'Wrench':
            cmd = Wrench()
        else:
            cmd = Accel()

        # Linear velocities:
        # Forward
        self.l.x = self._update_velocity("w", self.l.x, self.linear_increment, self.linear_limit, False)
        # Backwards
        self.l.x = self._update_velocity("s",self.l.x, self.linear_increment, self.linear_limit, True)
        # Left
        self.l.y = self._update_velocity("a",self.l.y, self.linear_increment, self.linear_limit, False)
        # Right
        self.l.y = self._update_velocity("d",self.l.y, self.linear_increment, self.linear_limit, True)
        # Up
        self.l.z = self._update_velocity("x",self.l.z, self.linear_increment, self.linear_limit, False)
        # Down
        self.l.z = self._update_velocity("z",self.l.z, self.linear_increment, self.linear_limit, True)

        # Check if linear velocities should zero out
        self.l.x = self._zero_velocity("w", "s", self.l.x)
        self.l.y = self._zero_velocity("a", "d", self.l.y)
        self.l.z = self._zero_velocity("x", "z", self.l.z)

        # Angular Velocities
        # Roll Left
        self.a.x = self._update_velocity("j",self.a.x, self.angular_increment, self.angular_limit, True)
        # Roll Right
        self.a.x = self._update_velocity("l",self.a.x, self.angular_increment, self.angular_limit, False)
        # Pitch Down
        self.a.y = self._update_velocity("i",self.a.y, self.angular_increment, self.angular_limit, False)
        # Pitch Up
        self.a.y = self._update_velocity("k",self.a.y, self.angular_increment, self.angular_limit, True)
        # Yaw Left
        self.a.z = self._update_velocity("q",self.a.z, self.angular_increment, self.angular_limit, False)
        # Yaw Right
        self.a.z = self._update_velocity("e",self.a.z, self.angular_increment, self.angular_limit, True)

        # Check if angular velocities should zero out
        self.a.x = self._zero_velocity("j", "l", self.a.x)
        self.a.y = self._zero_velocity("i", "k", self.a.y)
        self.a.z = self._zero_velocity("q", "e", self.a.z)

        # Store velocity message into Wrench format
        cmd.torque = self.a
        cmd.force = self.l

        # If ctrl+c kill node
        if all(k in current for k in TERMINATE):
            listener.stop()
            rospy.loginfo('Keyboard Interrupt Pressed')   
            rospy.loginfo('Shutting down [%s] node' % node_name)

            # Set Wrenchs to 0
            cmd.torque = Vector3(0, 0, 0)
            cmd.force = Vector3(0, 0, 0)
            self._output_pub.publish(cmd)

            exit(-1)

        # Publish message
        self._output_pub.publish(cmd)

    # callback function
    def _parse_keyboard(self):
        # pynput configurations

        # check if input should be paused
        if paused:
            pass
        else:
            self._rov_controls()


if __name__ == '__main__':

    # Wait for n seconds, so the instructions are the last thing to print in terminal
    time.sleep(1)
    # Start the node
    node_name = os.path.splitext(os.path.basename(__file__))[0]
    rospy.init_node(node_name)
    rospy.loginfo('Starting [%s] node' % node_name)

    listener = keyboard.Listener(
        on_press = on_press,
        on_release = on_release)
    listener.start()

    teleop = x3TeleopKeyboard()

    # termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    rospy.loginfo('Shutting down [%s] node' % node_name)
