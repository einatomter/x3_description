# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ds_control_msgs/BottomFollow1D.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import ds_core_msgs.msg
import genpy
import std_msgs.msg

class BottomFollow1D(genpy.Message):
  _md5sum = "358ee6b880ac348548fbc9ea838b96b5"
  _type = "ds_control_msgs/BottomFollow1D"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# The standard 2-part DsHeader block
# This allows both a standard ROS header and DS-specific header blocks
# See HEADERS.md in ds_core_msgs for details
std_msgs/Header header
ds_core_msgs/DsHeader ds_header

float64 depth_bot
float64[2] depth_env
float64 depth_goal
float64 ref_speed
float64 depth_rate_filtered
float64[5] past_altitude_values
float64 median_altitude
float64 commanded_altitude
float64 env_padding_speed
float64 env_padding_accel
float64 step
float64 last_good_altitude
float64 last_good_depth
float64 last_good_depth_bot
float64 depth_floor
float64 alarm_timeout
float64 min_speed
float64 speed_gain
duration time_inside_env
duration alt_bad_timer

time last_good_altitude_time
time time_low_depth_rate
time last_altitude_time

bool alarm
bool stuck

int8 pseudo_bot_code

# copy of the smoothing parameters to sync the reference smoother
float64 depth_rate_d
float64 depth_accel_d

uint64 bad_altitude_hits

# The raw altitude after tf. This can be negative if bad, for mc descent
float64 raw_altitude

# User push-up or push-down override
# When the override begins
time userDepthOverrideEngageTime
# Whether or not the override is engaged for the current control loop
bool userDepthOverrideEngaged
# When the override ends
time userDepthOverrideEndTime
# Override direction
int8 override_depth_direction

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: ds_core_msgs/DsHeader
# This is half our standard header for ds_msgs; see
# HEADERS.md for details

# This header should ALWAYS be paired with a std_msgs/Header
# and should ALWAYS reference HEADERS.md.  If you're looking at this
# file to add headers to a type, you probably want to copy/paste
# the following block:
#
#     # The standard 2-part DsHeader block
#     # This allows both a standard ROS header and DS-specific header blocks
#     # See HEADERS.md in ds_core_msgs for details
#     std_msgs/Header header
#     ds_core_msgs/DsHeader ds_header
#

# Time data was received or sent out (i/o time)
time io_time

# Sensor source UUID
uint8[16] source_uuid

"""
  __slots__ = ['header','ds_header','depth_bot','depth_env','depth_goal','ref_speed','depth_rate_filtered','past_altitude_values','median_altitude','commanded_altitude','env_padding_speed','env_padding_accel','step','last_good_altitude','last_good_depth','last_good_depth_bot','depth_floor','alarm_timeout','min_speed','speed_gain','time_inside_env','alt_bad_timer','last_good_altitude_time','time_low_depth_rate','last_altitude_time','alarm','stuck','pseudo_bot_code','depth_rate_d','depth_accel_d','bad_altitude_hits','raw_altitude','userDepthOverrideEngageTime','userDepthOverrideEngaged','userDepthOverrideEndTime','override_depth_direction']
  _slot_types = ['std_msgs/Header','ds_core_msgs/DsHeader','float64','float64[2]','float64','float64','float64','float64[5]','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','duration','duration','time','time','time','bool','bool','int8','float64','float64','uint64','float64','time','bool','time','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,ds_header,depth_bot,depth_env,depth_goal,ref_speed,depth_rate_filtered,past_altitude_values,median_altitude,commanded_altitude,env_padding_speed,env_padding_accel,step,last_good_altitude,last_good_depth,last_good_depth_bot,depth_floor,alarm_timeout,min_speed,speed_gain,time_inside_env,alt_bad_timer,last_good_altitude_time,time_low_depth_rate,last_altitude_time,alarm,stuck,pseudo_bot_code,depth_rate_d,depth_accel_d,bad_altitude_hits,raw_altitude,userDepthOverrideEngageTime,userDepthOverrideEngaged,userDepthOverrideEndTime,override_depth_direction

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BottomFollow1D, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ds_header is None:
        self.ds_header = ds_core_msgs.msg.DsHeader()
      if self.depth_bot is None:
        self.depth_bot = 0.
      if self.depth_env is None:
        self.depth_env = [0.] * 2
      if self.depth_goal is None:
        self.depth_goal = 0.
      if self.ref_speed is None:
        self.ref_speed = 0.
      if self.depth_rate_filtered is None:
        self.depth_rate_filtered = 0.
      if self.past_altitude_values is None:
        self.past_altitude_values = [0.] * 5
      if self.median_altitude is None:
        self.median_altitude = 0.
      if self.commanded_altitude is None:
        self.commanded_altitude = 0.
      if self.env_padding_speed is None:
        self.env_padding_speed = 0.
      if self.env_padding_accel is None:
        self.env_padding_accel = 0.
      if self.step is None:
        self.step = 0.
      if self.last_good_altitude is None:
        self.last_good_altitude = 0.
      if self.last_good_depth is None:
        self.last_good_depth = 0.
      if self.last_good_depth_bot is None:
        self.last_good_depth_bot = 0.
      if self.depth_floor is None:
        self.depth_floor = 0.
      if self.alarm_timeout is None:
        self.alarm_timeout = 0.
      if self.min_speed is None:
        self.min_speed = 0.
      if self.speed_gain is None:
        self.speed_gain = 0.
      if self.time_inside_env is None:
        self.time_inside_env = genpy.Duration()
      if self.alt_bad_timer is None:
        self.alt_bad_timer = genpy.Duration()
      if self.last_good_altitude_time is None:
        self.last_good_altitude_time = genpy.Time()
      if self.time_low_depth_rate is None:
        self.time_low_depth_rate = genpy.Time()
      if self.last_altitude_time is None:
        self.last_altitude_time = genpy.Time()
      if self.alarm is None:
        self.alarm = False
      if self.stuck is None:
        self.stuck = False
      if self.pseudo_bot_code is None:
        self.pseudo_bot_code = 0
      if self.depth_rate_d is None:
        self.depth_rate_d = 0.
      if self.depth_accel_d is None:
        self.depth_accel_d = 0.
      if self.bad_altitude_hits is None:
        self.bad_altitude_hits = 0
      if self.raw_altitude is None:
        self.raw_altitude = 0.
      if self.userDepthOverrideEngageTime is None:
        self.userDepthOverrideEngageTime = genpy.Time()
      if self.userDepthOverrideEngaged is None:
        self.userDepthOverrideEngaged = False
      if self.userDepthOverrideEndTime is None:
        self.userDepthOverrideEndTime = genpy.Time()
      if self.override_depth_direction is None:
        self.override_depth_direction = 0
    else:
      self.header = std_msgs.msg.Header()
      self.ds_header = ds_core_msgs.msg.DsHeader()
      self.depth_bot = 0.
      self.depth_env = [0.] * 2
      self.depth_goal = 0.
      self.ref_speed = 0.
      self.depth_rate_filtered = 0.
      self.past_altitude_values = [0.] * 5
      self.median_altitude = 0.
      self.commanded_altitude = 0.
      self.env_padding_speed = 0.
      self.env_padding_accel = 0.
      self.step = 0.
      self.last_good_altitude = 0.
      self.last_good_depth = 0.
      self.last_good_depth_bot = 0.
      self.depth_floor = 0.
      self.alarm_timeout = 0.
      self.min_speed = 0.
      self.speed_gain = 0.
      self.time_inside_env = genpy.Duration()
      self.alt_bad_timer = genpy.Duration()
      self.last_good_altitude_time = genpy.Time()
      self.time_low_depth_rate = genpy.Time()
      self.last_altitude_time = genpy.Time()
      self.alarm = False
      self.stuck = False
      self.pseudo_bot_code = 0
      self.depth_rate_d = 0.
      self.depth_accel_d = 0.
      self.bad_altitude_hits = 0
      self.raw_altitude = 0.
      self.userDepthOverrideEngageTime = genpy.Time()
      self.userDepthOverrideEngaged = False
      self.userDepthOverrideEndTime = genpy.Time()
      self.override_depth_direction = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs))
      _x = self.ds_header.source_uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_16B().pack(*_x))
      else:
        buff.write(_get_struct_16s().pack(_x))
      _x = self.depth_bot
      buff.write(_get_struct_d().pack(_x))
      buff.write(_get_struct_2d().pack(*self.depth_env))
      _x = self
      buff.write(_get_struct_3d().pack(_x.depth_goal, _x.ref_speed, _x.depth_rate_filtered))
      buff.write(_get_struct_5d().pack(*self.past_altitude_values))
      _x = self
      buff.write(_get_struct_12d4i6I2Bb2dQd2IB2Ib().pack(_x.median_altitude, _x.commanded_altitude, _x.env_padding_speed, _x.env_padding_accel, _x.step, _x.last_good_altitude, _x.last_good_depth, _x.last_good_depth_bot, _x.depth_floor, _x.alarm_timeout, _x.min_speed, _x.speed_gain, _x.time_inside_env.secs, _x.time_inside_env.nsecs, _x.alt_bad_timer.secs, _x.alt_bad_timer.nsecs, _x.last_good_altitude_time.secs, _x.last_good_altitude_time.nsecs, _x.time_low_depth_rate.secs, _x.time_low_depth_rate.nsecs, _x.last_altitude_time.secs, _x.last_altitude_time.nsecs, _x.alarm, _x.stuck, _x.pseudo_bot_code, _x.depth_rate_d, _x.depth_accel_d, _x.bad_altitude_hits, _x.raw_altitude, _x.userDepthOverrideEngageTime.secs, _x.userDepthOverrideEngageTime.nsecs, _x.userDepthOverrideEngaged, _x.userDepthOverrideEndTime.secs, _x.userDepthOverrideEndTime.nsecs, _x.override_depth_direction))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ds_header is None:
        self.ds_header = ds_core_msgs.msg.DsHeader()
      if self.time_inside_env is None:
        self.time_inside_env = genpy.Duration()
      if self.alt_bad_timer is None:
        self.alt_bad_timer = genpy.Duration()
      if self.last_good_altitude_time is None:
        self.last_good_altitude_time = genpy.Time()
      if self.time_low_depth_rate is None:
        self.time_low_depth_rate = genpy.Time()
      if self.last_altitude_time is None:
        self.last_altitude_time = genpy.Time()
      if self.userDepthOverrideEngageTime is None:
        self.userDepthOverrideEngageTime = genpy.Time()
      if self.userDepthOverrideEndTime is None:
        self.userDepthOverrideEndTime = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 16
      self.ds_header.source_uuid = str[start:end]
      start = end
      end += 8
      (self.depth_bot,) = _get_struct_d().unpack(str[start:end])
      start = end
      end += 16
      self.depth_env = _get_struct_2d().unpack(str[start:end])
      _x = self
      start = end
      end += 24
      (_x.depth_goal, _x.ref_speed, _x.depth_rate_filtered,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 40
      self.past_altitude_values = _get_struct_5d().unpack(str[start:end])
      _x = self
      start = end
      end += 189
      (_x.median_altitude, _x.commanded_altitude, _x.env_padding_speed, _x.env_padding_accel, _x.step, _x.last_good_altitude, _x.last_good_depth, _x.last_good_depth_bot, _x.depth_floor, _x.alarm_timeout, _x.min_speed, _x.speed_gain, _x.time_inside_env.secs, _x.time_inside_env.nsecs, _x.alt_bad_timer.secs, _x.alt_bad_timer.nsecs, _x.last_good_altitude_time.secs, _x.last_good_altitude_time.nsecs, _x.time_low_depth_rate.secs, _x.time_low_depth_rate.nsecs, _x.last_altitude_time.secs, _x.last_altitude_time.nsecs, _x.alarm, _x.stuck, _x.pseudo_bot_code, _x.depth_rate_d, _x.depth_accel_d, _x.bad_altitude_hits, _x.raw_altitude, _x.userDepthOverrideEngageTime.secs, _x.userDepthOverrideEngageTime.nsecs, _x.userDepthOverrideEngaged, _x.userDepthOverrideEndTime.secs, _x.userDepthOverrideEndTime.nsecs, _x.override_depth_direction,) = _get_struct_12d4i6I2Bb2dQd2IB2Ib().unpack(str[start:end])
      self.alarm = bool(self.alarm)
      self.stuck = bool(self.stuck)
      self.userDepthOverrideEngaged = bool(self.userDepthOverrideEngaged)
      self.time_inside_env.canon()
      self.alt_bad_timer.canon()
      self.last_good_altitude_time.canon()
      self.time_low_depth_rate.canon()
      self.last_altitude_time.canon()
      self.userDepthOverrideEngageTime.canon()
      self.userDepthOverrideEndTime.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2I().pack(_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs))
      _x = self.ds_header.source_uuid
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_16B().pack(*_x))
      else:
        buff.write(_get_struct_16s().pack(_x))
      _x = self.depth_bot
      buff.write(_get_struct_d().pack(_x))
      buff.write(self.depth_env.tostring())
      _x = self
      buff.write(_get_struct_3d().pack(_x.depth_goal, _x.ref_speed, _x.depth_rate_filtered))
      buff.write(self.past_altitude_values.tostring())
      _x = self
      buff.write(_get_struct_12d4i6I2Bb2dQd2IB2Ib().pack(_x.median_altitude, _x.commanded_altitude, _x.env_padding_speed, _x.env_padding_accel, _x.step, _x.last_good_altitude, _x.last_good_depth, _x.last_good_depth_bot, _x.depth_floor, _x.alarm_timeout, _x.min_speed, _x.speed_gain, _x.time_inside_env.secs, _x.time_inside_env.nsecs, _x.alt_bad_timer.secs, _x.alt_bad_timer.nsecs, _x.last_good_altitude_time.secs, _x.last_good_altitude_time.nsecs, _x.time_low_depth_rate.secs, _x.time_low_depth_rate.nsecs, _x.last_altitude_time.secs, _x.last_altitude_time.nsecs, _x.alarm, _x.stuck, _x.pseudo_bot_code, _x.depth_rate_d, _x.depth_accel_d, _x.bad_altitude_hits, _x.raw_altitude, _x.userDepthOverrideEngageTime.secs, _x.userDepthOverrideEngageTime.nsecs, _x.userDepthOverrideEngaged, _x.userDepthOverrideEndTime.secs, _x.userDepthOverrideEndTime.nsecs, _x.override_depth_direction))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ds_header is None:
        self.ds_header = ds_core_msgs.msg.DsHeader()
      if self.time_inside_env is None:
        self.time_inside_env = genpy.Duration()
      if self.alt_bad_timer is None:
        self.alt_bad_timer = genpy.Duration()
      if self.last_good_altitude_time is None:
        self.last_good_altitude_time = genpy.Time()
      if self.time_low_depth_rate is None:
        self.time_low_depth_rate = genpy.Time()
      if self.last_altitude_time is None:
        self.last_altitude_time = genpy.Time()
      if self.userDepthOverrideEngageTime is None:
        self.userDepthOverrideEngageTime = genpy.Time()
      if self.userDepthOverrideEndTime is None:
        self.userDepthOverrideEndTime = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.ds_header.io_time.secs, _x.ds_header.io_time.nsecs,) = _get_struct_2I().unpack(str[start:end])
      start = end
      end += 16
      self.ds_header.source_uuid = str[start:end]
      start = end
      end += 8
      (self.depth_bot,) = _get_struct_d().unpack(str[start:end])
      start = end
      end += 16
      self.depth_env = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=2)
      _x = self
      start = end
      end += 24
      (_x.depth_goal, _x.ref_speed, _x.depth_rate_filtered,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 40
      self.past_altitude_values = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=5)
      _x = self
      start = end
      end += 189
      (_x.median_altitude, _x.commanded_altitude, _x.env_padding_speed, _x.env_padding_accel, _x.step, _x.last_good_altitude, _x.last_good_depth, _x.last_good_depth_bot, _x.depth_floor, _x.alarm_timeout, _x.min_speed, _x.speed_gain, _x.time_inside_env.secs, _x.time_inside_env.nsecs, _x.alt_bad_timer.secs, _x.alt_bad_timer.nsecs, _x.last_good_altitude_time.secs, _x.last_good_altitude_time.nsecs, _x.time_low_depth_rate.secs, _x.time_low_depth_rate.nsecs, _x.last_altitude_time.secs, _x.last_altitude_time.nsecs, _x.alarm, _x.stuck, _x.pseudo_bot_code, _x.depth_rate_d, _x.depth_accel_d, _x.bad_altitude_hits, _x.raw_altitude, _x.userDepthOverrideEngageTime.secs, _x.userDepthOverrideEngageTime.nsecs, _x.userDepthOverrideEngaged, _x.userDepthOverrideEndTime.secs, _x.userDepthOverrideEndTime.nsecs, _x.override_depth_direction,) = _get_struct_12d4i6I2Bb2dQd2IB2Ib().unpack(str[start:end])
      self.alarm = bool(self.alarm)
      self.stuck = bool(self.stuck)
      self.userDepthOverrideEngaged = bool(self.userDepthOverrideEngaged)
      self.time_inside_env.canon()
      self.alt_bad_timer.canon()
      self.last_good_altitude_time.canon()
      self.time_low_depth_rate.canon()
      self.last_altitude_time.canon()
      self.userDepthOverrideEngageTime.canon()
      self.userDepthOverrideEndTime.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_12d4i6I2Bb2dQd2IB2Ib = None
def _get_struct_12d4i6I2Bb2dQd2IB2Ib():
    global _struct_12d4i6I2Bb2dQd2IB2Ib
    if _struct_12d4i6I2Bb2dQd2IB2Ib is None:
        _struct_12d4i6I2Bb2dQd2IB2Ib = struct.Struct("<12d4i6I2Bb2dQd2IB2Ib")
    return _struct_12d4i6I2Bb2dQd2IB2Ib
_struct_16B = None
def _get_struct_16B():
    global _struct_16B
    if _struct_16B is None:
        _struct_16B = struct.Struct("<16B")
    return _struct_16B
_struct_16s = None
def _get_struct_16s():
    global _struct_16s
    if _struct_16s is None:
        _struct_16s = struct.Struct("<16s")
    return _struct_16s
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_2d = None
def _get_struct_2d():
    global _struct_2d
    if _struct_2d is None:
        _struct_2d = struct.Struct("<2d")
    return _struct_2d
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_5d = None
def _get_struct_5d():
    global _struct_5d
    if _struct_5d is None:
        _struct_5d = struct.Struct("<5d")
    return _struct_5d
_struct_d = None
def _get_struct_d():
    global _struct_d
    if _struct_d is None:
        _struct_d = struct.Struct("<d")
    return _struct_d
