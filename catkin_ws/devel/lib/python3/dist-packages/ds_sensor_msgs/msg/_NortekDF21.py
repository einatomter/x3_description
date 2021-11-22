# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ds_sensor_msgs/NortekDF21.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import ds_core_msgs.msg
import genpy
import std_msgs.msg

class NortekDF21(genpy.Message):
  _md5sum = "c0eb1b2fba2301446195ec5c1c67adb4"
  _type = "ds_sensor_msgs/NortekDF21"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# The standard 2-part DsHeader block
# This allows both a standard ROS header and DS-specific header blocks
# See HEADERS.md in ds_core_msgs for details
std_msgs/Header header
ds_core_msgs/DsHeader ds_header

################################
# Standard DVL type disclaimer #
################################

# Standard array with one piston transducer for each beam
# If you have 4-5 individual disks on your DVL, use this one.
# Examples include Sonardyne Syrinx, Nortek DVLs, and RDI Workhorse
uint8 DVL_TYPE_PISTON=0

# Newfangled phased-array DVL.  If you have one giant disk with complicated stuff on it,
# probably this one.
# Examples include newer RDI DVLs such as pathfinder, pioneer, and tasman.
uint8 DVL_TYPE_PHASED_ARRAY=1

# Type of DVL array employed (see above).  Necessary when
# deciding how to apply sound velocity corrections
uint8 dvl_type

#################
# DVL processed #
#################

float64 altitude_sum
float64 speed_gnd
float64 course_gnd
uint8 good_beams
float64 dvl_time

################
# DF21/22 Mode #
################

#  All distances are in m, velocities in m/s, intensities in dB

uint8 version
uint8 offsetOfData
uint32 serialNumber
uint8 year
uint8 month
uint8 day
uint8 hour
uint8 minute
uint8 seconds
uint16 microSeconds
uint16 nBeams
uint32 error
uint32 status
float32 speed_sound
float32 temperature
float32 pressure

#############
# Beam Data #
#############

float32[4] velBeam    #Velocities for each beam
float32[4] distBeam   #Distances for each beam
float32[4] fomBeam    #Figure of merit for each beam
float32[4] timeDiff1Beam  #DT1 for each beam
float32[4] timeDiff2Beam  #DT2 for each beam
float32[4] timeVelEstBeam #Duration of velocity estimate for each beam

#############
# XYZ Data #
#############
float32 velX  #Velocity X
float32 velY  #Velocity Y
float32 velZ1 #Velocity Z1
float32 velZ2 #Velocity Z2
float32 fomX  #Figure of Merit X
float32 fomY  #Figure of Merit Y
float32 fomZ1 #Figure of Merit Z1
float32 fomZ2 #Figure of Merit Z2
float32 timeDiff1X    #Time from trigger to center of bottom echo
float32 timeDiff1Y    #Same as above
float32 timeDiff1Z1   #Same as above
float32 timeDiff1Z2   #Same as above
float32 timeDiff2X    #Time from start of NMEA output msg to center of bottom echo
float32 timeDiff2Y    #Same as above
float32 timeDiff2Z1   #Same as above
float32 timeDiff2Z2   #Same as above
float32 timeVelEstX   #Duration of velocity estimate for each component
float32 timeVelEstY   #Same as above
float32 timeVelEstZ1  #Same as above
float32 timeVelEstZ2  #Same as above

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
  # Pseudo-constants
  DVL_TYPE_PISTON = 0
  DVL_TYPE_PHASED_ARRAY = 1

  __slots__ = ['header','ds_header','dvl_type','altitude_sum','speed_gnd','course_gnd','good_beams','dvl_time','version','offsetOfData','serialNumber','year','month','day','hour','minute','seconds','microSeconds','nBeams','error','status','speed_sound','temperature','pressure','velBeam','distBeam','fomBeam','timeDiff1Beam','timeDiff2Beam','timeVelEstBeam','velX','velY','velZ1','velZ2','fomX','fomY','fomZ1','fomZ2','timeDiff1X','timeDiff1Y','timeDiff1Z1','timeDiff1Z2','timeDiff2X','timeDiff2Y','timeDiff2Z1','timeDiff2Z2','timeVelEstX','timeVelEstY','timeVelEstZ1','timeVelEstZ2']
  _slot_types = ['std_msgs/Header','ds_core_msgs/DsHeader','uint8','float64','float64','float64','uint8','float64','uint8','uint8','uint32','uint8','uint8','uint8','uint8','uint8','uint8','uint16','uint16','uint32','uint32','float32','float32','float32','float32[4]','float32[4]','float32[4]','float32[4]','float32[4]','float32[4]','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,ds_header,dvl_type,altitude_sum,speed_gnd,course_gnd,good_beams,dvl_time,version,offsetOfData,serialNumber,year,month,day,hour,minute,seconds,microSeconds,nBeams,error,status,speed_sound,temperature,pressure,velBeam,distBeam,fomBeam,timeDiff1Beam,timeDiff2Beam,timeVelEstBeam,velX,velY,velZ1,velZ2,fomX,fomY,fomZ1,fomZ2,timeDiff1X,timeDiff1Y,timeDiff1Z1,timeDiff1Z2,timeDiff2X,timeDiff2Y,timeDiff2Z1,timeDiff2Z2,timeVelEstX,timeVelEstY,timeVelEstZ1,timeVelEstZ2

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(NortekDF21, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ds_header is None:
        self.ds_header = ds_core_msgs.msg.DsHeader()
      if self.dvl_type is None:
        self.dvl_type = 0
      if self.altitude_sum is None:
        self.altitude_sum = 0.
      if self.speed_gnd is None:
        self.speed_gnd = 0.
      if self.course_gnd is None:
        self.course_gnd = 0.
      if self.good_beams is None:
        self.good_beams = 0
      if self.dvl_time is None:
        self.dvl_time = 0.
      if self.version is None:
        self.version = 0
      if self.offsetOfData is None:
        self.offsetOfData = 0
      if self.serialNumber is None:
        self.serialNumber = 0
      if self.year is None:
        self.year = 0
      if self.month is None:
        self.month = 0
      if self.day is None:
        self.day = 0
      if self.hour is None:
        self.hour = 0
      if self.minute is None:
        self.minute = 0
      if self.seconds is None:
        self.seconds = 0
      if self.microSeconds is None:
        self.microSeconds = 0
      if self.nBeams is None:
        self.nBeams = 0
      if self.error is None:
        self.error = 0
      if self.status is None:
        self.status = 0
      if self.speed_sound is None:
        self.speed_sound = 0.
      if self.temperature is None:
        self.temperature = 0.
      if self.pressure is None:
        self.pressure = 0.
      if self.velBeam is None:
        self.velBeam = [0.] * 4
      if self.distBeam is None:
        self.distBeam = [0.] * 4
      if self.fomBeam is None:
        self.fomBeam = [0.] * 4
      if self.timeDiff1Beam is None:
        self.timeDiff1Beam = [0.] * 4
      if self.timeDiff2Beam is None:
        self.timeDiff2Beam = [0.] * 4
      if self.timeVelEstBeam is None:
        self.timeVelEstBeam = [0.] * 4
      if self.velX is None:
        self.velX = 0.
      if self.velY is None:
        self.velY = 0.
      if self.velZ1 is None:
        self.velZ1 = 0.
      if self.velZ2 is None:
        self.velZ2 = 0.
      if self.fomX is None:
        self.fomX = 0.
      if self.fomY is None:
        self.fomY = 0.
      if self.fomZ1 is None:
        self.fomZ1 = 0.
      if self.fomZ2 is None:
        self.fomZ2 = 0.
      if self.timeDiff1X is None:
        self.timeDiff1X = 0.
      if self.timeDiff1Y is None:
        self.timeDiff1Y = 0.
      if self.timeDiff1Z1 is None:
        self.timeDiff1Z1 = 0.
      if self.timeDiff1Z2 is None:
        self.timeDiff1Z2 = 0.
      if self.timeDiff2X is None:
        self.timeDiff2X = 0.
      if self.timeDiff2Y is None:
        self.timeDiff2Y = 0.
      if self.timeDiff2Z1 is None:
        self.timeDiff2Z1 = 0.
      if self.timeDiff2Z2 is None:
        self.timeDiff2Z2 = 0.
      if self.timeVelEstX is None:
        self.timeVelEstX = 0.
      if self.timeVelEstY is None:
        self.timeVelEstY = 0.
      if self.timeVelEstZ1 is None:
        self.timeVelEstZ1 = 0.
      if self.timeVelEstZ2 is None:
        self.timeVelEstZ2 = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.ds_header = ds_core_msgs.msg.DsHeader()
      self.dvl_type = 0
      self.altitude_sum = 0.
      self.speed_gnd = 0.
      self.course_gnd = 0.
      self.good_beams = 0
      self.dvl_time = 0.
      self.version = 0
      self.offsetOfData = 0
      self.serialNumber = 0
      self.year = 0
      self.month = 0
      self.day = 0
      self.hour = 0
      self.minute = 0
      self.seconds = 0
      self.microSeconds = 0
      self.nBeams = 0
      self.error = 0
      self.status = 0
      self.speed_sound = 0.
      self.temperature = 0.
      self.pressure = 0.
      self.velBeam = [0.] * 4
      self.distBeam = [0.] * 4
      self.fomBeam = [0.] * 4
      self.timeDiff1Beam = [0.] * 4
      self.timeDiff2Beam = [0.] * 4
      self.timeVelEstBeam = [0.] * 4
      self.velX = 0.
      self.velY = 0.
      self.velZ1 = 0.
      self.velZ2 = 0.
      self.fomX = 0.
      self.fomY = 0.
      self.fomZ1 = 0.
      self.fomZ2 = 0.
      self.timeDiff1X = 0.
      self.timeDiff1Y = 0.
      self.timeDiff1Z1 = 0.
      self.timeDiff1Z2 = 0.
      self.timeDiff2X = 0.
      self.timeDiff2Y = 0.
      self.timeDiff2Z1 = 0.
      self.timeDiff2Z2 = 0.
      self.timeVelEstX = 0.
      self.timeVelEstY = 0.
      self.timeVelEstZ1 = 0.
      self.timeVelEstZ2 = 0.

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
      _x = self
      buff.write(_get_struct_B3dBd2BI6B2H2I3f().pack(_x.dvl_type, _x.altitude_sum, _x.speed_gnd, _x.course_gnd, _x.good_beams, _x.dvl_time, _x.version, _x.offsetOfData, _x.serialNumber, _x.year, _x.month, _x.day, _x.hour, _x.minute, _x.seconds, _x.microSeconds, _x.nBeams, _x.error, _x.status, _x.speed_sound, _x.temperature, _x.pressure))
      buff.write(_get_struct_4f().pack(*self.velBeam))
      buff.write(_get_struct_4f().pack(*self.distBeam))
      buff.write(_get_struct_4f().pack(*self.fomBeam))
      buff.write(_get_struct_4f().pack(*self.timeDiff1Beam))
      buff.write(_get_struct_4f().pack(*self.timeDiff2Beam))
      buff.write(_get_struct_4f().pack(*self.timeVelEstBeam))
      _x = self
      buff.write(_get_struct_20f().pack(_x.velX, _x.velY, _x.velZ1, _x.velZ2, _x.fomX, _x.fomY, _x.fomZ1, _x.fomZ2, _x.timeDiff1X, _x.timeDiff1Y, _x.timeDiff1Z1, _x.timeDiff1Z2, _x.timeDiff2X, _x.timeDiff2Y, _x.timeDiff2Z1, _x.timeDiff2Z2, _x.timeVelEstX, _x.timeVelEstY, _x.timeVelEstZ1, _x.timeVelEstZ2))
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
      _x = self
      start = end
      end += 70
      (_x.dvl_type, _x.altitude_sum, _x.speed_gnd, _x.course_gnd, _x.good_beams, _x.dvl_time, _x.version, _x.offsetOfData, _x.serialNumber, _x.year, _x.month, _x.day, _x.hour, _x.minute, _x.seconds, _x.microSeconds, _x.nBeams, _x.error, _x.status, _x.speed_sound, _x.temperature, _x.pressure,) = _get_struct_B3dBd2BI6B2H2I3f().unpack(str[start:end])
      start = end
      end += 16
      self.velBeam = _get_struct_4f().unpack(str[start:end])
      start = end
      end += 16
      self.distBeam = _get_struct_4f().unpack(str[start:end])
      start = end
      end += 16
      self.fomBeam = _get_struct_4f().unpack(str[start:end])
      start = end
      end += 16
      self.timeDiff1Beam = _get_struct_4f().unpack(str[start:end])
      start = end
      end += 16
      self.timeDiff2Beam = _get_struct_4f().unpack(str[start:end])
      start = end
      end += 16
      self.timeVelEstBeam = _get_struct_4f().unpack(str[start:end])
      _x = self
      start = end
      end += 80
      (_x.velX, _x.velY, _x.velZ1, _x.velZ2, _x.fomX, _x.fomY, _x.fomZ1, _x.fomZ2, _x.timeDiff1X, _x.timeDiff1Y, _x.timeDiff1Z1, _x.timeDiff1Z2, _x.timeDiff2X, _x.timeDiff2Y, _x.timeDiff2Z1, _x.timeDiff2Z2, _x.timeVelEstX, _x.timeVelEstY, _x.timeVelEstZ1, _x.timeVelEstZ2,) = _get_struct_20f().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_B3dBd2BI6B2H2I3f().pack(_x.dvl_type, _x.altitude_sum, _x.speed_gnd, _x.course_gnd, _x.good_beams, _x.dvl_time, _x.version, _x.offsetOfData, _x.serialNumber, _x.year, _x.month, _x.day, _x.hour, _x.minute, _x.seconds, _x.microSeconds, _x.nBeams, _x.error, _x.status, _x.speed_sound, _x.temperature, _x.pressure))
      buff.write(self.velBeam.tostring())
      buff.write(self.distBeam.tostring())
      buff.write(self.fomBeam.tostring())
      buff.write(self.timeDiff1Beam.tostring())
      buff.write(self.timeDiff2Beam.tostring())
      buff.write(self.timeVelEstBeam.tostring())
      _x = self
      buff.write(_get_struct_20f().pack(_x.velX, _x.velY, _x.velZ1, _x.velZ2, _x.fomX, _x.fomY, _x.fomZ1, _x.fomZ2, _x.timeDiff1X, _x.timeDiff1Y, _x.timeDiff1Z1, _x.timeDiff1Z2, _x.timeDiff2X, _x.timeDiff2Y, _x.timeDiff2Z1, _x.timeDiff2Z2, _x.timeVelEstX, _x.timeVelEstY, _x.timeVelEstZ1, _x.timeVelEstZ2))
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
      _x = self
      start = end
      end += 70
      (_x.dvl_type, _x.altitude_sum, _x.speed_gnd, _x.course_gnd, _x.good_beams, _x.dvl_time, _x.version, _x.offsetOfData, _x.serialNumber, _x.year, _x.month, _x.day, _x.hour, _x.minute, _x.seconds, _x.microSeconds, _x.nBeams, _x.error, _x.status, _x.speed_sound, _x.temperature, _x.pressure,) = _get_struct_B3dBd2BI6B2H2I3f().unpack(str[start:end])
      start = end
      end += 16
      self.velBeam = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=4)
      start = end
      end += 16
      self.distBeam = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=4)
      start = end
      end += 16
      self.fomBeam = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=4)
      start = end
      end += 16
      self.timeDiff1Beam = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=4)
      start = end
      end += 16
      self.timeDiff2Beam = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=4)
      start = end
      end += 16
      self.timeVelEstBeam = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=4)
      _x = self
      start = end
      end += 80
      (_x.velX, _x.velY, _x.velZ1, _x.velZ2, _x.fomX, _x.fomY, _x.fomZ1, _x.fomZ2, _x.timeDiff1X, _x.timeDiff1Y, _x.timeDiff1Z1, _x.timeDiff1Z2, _x.timeDiff2X, _x.timeDiff2Y, _x.timeDiff2Z1, _x.timeDiff2Z2, _x.timeVelEstX, _x.timeVelEstY, _x.timeVelEstZ1, _x.timeVelEstZ2,) = _get_struct_20f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
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
_struct_20f = None
def _get_struct_20f():
    global _struct_20f
    if _struct_20f is None:
        _struct_20f = struct.Struct("<20f")
    return _struct_20f
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_4f = None
def _get_struct_4f():
    global _struct_4f
    if _struct_4f is None:
        _struct_4f = struct.Struct("<4f")
    return _struct_4f
_struct_B3dBd2BI6B2H2I3f = None
def _get_struct_B3dBd2BI6B2H2I3f():
    global _struct_B3dBd2BI6B2H2I3f
    if _struct_B3dBd2BI6B2H2I3f is None:
        _struct_B3dBd2BI6B2H2I3f = struct.Struct("<B3dBd2BI6B2H2I3f")
    return _struct_B3dBd2BI6B2H2I3f
