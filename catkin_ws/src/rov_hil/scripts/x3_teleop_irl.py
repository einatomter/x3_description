#!/usr/bin/env python3

# Keyboard teleop for the x3 rover
# Code uses uuv teleop as reference

import time
from blueye.sdk import Drone
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
        print(key.char)
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
    def __init__(self, drone):
        self.drone = drone
        # Speed settings
        self.speed = 0.4                # 0.1 = Slow, 0.2 = Fast
        self.lx = 0                     # Linear Velocity
        self.ly = 0
        self.lz = 0
        self.ax = 0                     # Angular Velocity
        self.ay = 0
        self.az = 0
        self.linear_increment = 0.05    # How much to increment linear velocities by, to avoid jerkyness
        self.linear_limit = 1           # Linear velocity limit = self.linear_limit * self.speed
        self.angular_increment = 0.05
        self.angular_limit = 0.5

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

        print(self.msg)

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
            self.speed = 0.1
        if "2" in current:
            self.speed = 0.2

        # Linear velocities:
        # Forward
        self.lx = self._update_velocity("w", self.lx, self.linear_increment, self.linear_limit, False)
        # Backwards
        self.lx = self._update_velocity("s",self.lx, self.linear_increment, self.linear_limit, True)
        # Left
        self.ly = self._update_velocity("a",self.ly, self.linear_increment, self.linear_limit, False)
        # Right
        self.ly = self._update_velocity("d",self.ly, self.linear_increment, self.linear_limit, True)
        # Up
        self.lz = self._update_velocity("x",self.lz, self.linear_increment, self.linear_limit, False)
        # Down
        self.lz = self._update_velocity("z",self.lz, self.linear_increment, self.linear_limit, True)

        # Check if linear velocities should zero out
        self.lx = self._zero_velocity("w", "s", self.lx)
        self.ly = self._zero_velocity("a", "d", self.ly)
        self.lz = self._zero_velocity("x", "z", self.lz)

        # Angular Velocities
        # Roll Left
        self.ax = self._update_velocity("j",self.ax, self.linear_increment, self.linear_limit, True)
        # Roll Right
        self.ax = self._update_velocity("l",self.ax, self.linear_increment, self.linear_limit, False)
        # Pitch Down
        self.ay = self._update_velocity("i",self.ay, self.linear_increment, self.linear_limit, False)
        # Pitch Up
        self.ay = self._update_velocity("k",self.ay, self.linear_increment, self.linear_limit, True)
        # Yaw Left
        self.az = self._update_velocity("q",self.az, self.linear_increment, self.linear_limit, False)
        # Yaw Right
        self.az = self._update_velocity("e",self.az, self.linear_increment, self.linear_limit, True)

        # Check if angular velocities should zero out
        self.ax = self._zero_velocity("j", "l", self.ax)
        # self.ay = self._zero_velocity("i", "k", self.ay)
        if self.ay < 0:
            self.ay = 0
        self.az = self._zero_velocity("q", "e", self.az)

        if 'r' in current:
            self.lx = 0

        # If ctrl+c kill node
        if all(k in current for k in TERMINATE):
            listener.stop()

        # Send commands
        self.drone.motion.surge = self.lx
        self.drone.motion.sway  = -self.ly
        self.drone.motion.heave = -self.lz
        self.drone.motion.yaw   = -self.az

        # self.drone.lights       = int(self.ay)

    # callback function
    def parse_keyboard(self):
        # pynput configurations

        # check if input should be paused
        if paused:
            pass
        else:
            self._rov_controls()


if __name__ == '__main__':

    listener = keyboard.Listener(
        on_press = on_press,
        on_release = on_release)
    listener.start()

    try:
        myDrone = Drone()
        print("Drone connected!")

        myDrone.lights = 10
        time.sleep(2)
        myDrone.lights = 0

        teleop = x3TeleopKeyboard(myDrone)
        while True:
            teleop.parse_keyboard()


    except KeyboardInterrupt:
        pass