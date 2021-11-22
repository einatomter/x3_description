// Generated by gencpp from file ds_actuator_msgs/Tecnadyne561.msg
// DO NOT EDIT!


#ifndef DS_ACTUATOR_MSGS_MESSAGE_TECNADYNE561_H
#define DS_ACTUATOR_MSGS_MESSAGE_TECNADYNE561_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_actuator_msgs
{
template <class ContainerAllocator>
struct Tecnadyne561_
{
  typedef Tecnadyne561_<ContainerAllocator> Type;

  Tecnadyne561_()
    : header()
    , ds_header()
    , cmd(0)
    , speed_loop_enable_status(0)
    , minute_tag(0)
    , second_tag(0)
    , microsecond_tick_tag(0)
    , prop_pwm(0)
    , tach_rpm(0.0)
    , fault_status(0)
    , reset_status(0)
    , speed_loop_interval(0)
    , tach_err_count(0)
    , voltage_volts(0.0)
    , current_amps(0.0)  {
    }
  Tecnadyne561_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , cmd(0)
    , speed_loop_enable_status(0)
    , minute_tag(0)
    , second_tag(0)
    , microsecond_tick_tag(0)
    , prop_pwm(0)
    , tach_rpm(0.0)
    , fault_status(0)
    , reset_status(0)
    , speed_loop_interval(0)
    , tach_err_count(0)
    , voltage_volts(0.0)
    , current_amps(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef uint8_t _cmd_type;
  _cmd_type cmd;

   typedef uint8_t _speed_loop_enable_status_type;
  _speed_loop_enable_status_type speed_loop_enable_status;

   typedef uint8_t _minute_tag_type;
  _minute_tag_type minute_tag;

   typedef uint8_t _second_tag_type;
  _second_tag_type second_tag;

   typedef uint8_t _microsecond_tick_tag_type;
  _microsecond_tick_tag_type microsecond_tick_tag;

   typedef int16_t _prop_pwm_type;
  _prop_pwm_type prop_pwm;

   typedef float _tach_rpm_type;
  _tach_rpm_type tach_rpm;

   typedef uint8_t _fault_status_type;
  _fault_status_type fault_status;

   typedef uint8_t _reset_status_type;
  _reset_status_type reset_status;

   typedef uint8_t _speed_loop_interval_type;
  _speed_loop_interval_type speed_loop_interval;

   typedef uint8_t _tach_err_count_type;
  _tach_err_count_type tach_err_count;

   typedef float _voltage_volts_type;
  _voltage_volts_type voltage_volts;

   typedef float _current_amps_type;
  _current_amps_type current_amps;





  typedef boost::shared_ptr< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> const> ConstPtr;

}; // struct Tecnadyne561_

typedef ::ds_actuator_msgs::Tecnadyne561_<std::allocator<void> > Tecnadyne561;

typedef boost::shared_ptr< ::ds_actuator_msgs::Tecnadyne561 > Tecnadyne561Ptr;
typedef boost::shared_ptr< ::ds_actuator_msgs::Tecnadyne561 const> Tecnadyne561ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator1> & lhs, const ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.cmd == rhs.cmd &&
    lhs.speed_loop_enable_status == rhs.speed_loop_enable_status &&
    lhs.minute_tag == rhs.minute_tag &&
    lhs.second_tag == rhs.second_tag &&
    lhs.microsecond_tick_tag == rhs.microsecond_tick_tag &&
    lhs.prop_pwm == rhs.prop_pwm &&
    lhs.tach_rpm == rhs.tach_rpm &&
    lhs.fault_status == rhs.fault_status &&
    lhs.reset_status == rhs.reset_status &&
    lhs.speed_loop_interval == rhs.speed_loop_interval &&
    lhs.tach_err_count == rhs.tach_err_count &&
    lhs.voltage_volts == rhs.voltage_volts &&
    lhs.current_amps == rhs.current_amps;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator1> & lhs, const ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_actuator_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc19e6a4487640c3cac3e37d8f82dc05";
  }

  static const char* value(const ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc19e6a4487640c3ULL;
  static const uint64_t static_value2 = 0xcac3e37d8f82dc05ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_actuator_msgs/Tecnadyne561";
  }

  static const char* value(const ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"###################\n"
"# Thruster Header #\n"
"###################\n"
"\n"
"uint8 cmd\n"
"\n"
"#######################\n"
"# Extended Status MSG #\n"
"#######################\n"
"uint8 speed_loop_enable_status\n"
"uint8 minute_tag\n"
"uint8 second_tag\n"
"uint8 microsecond_tick_tag\n"
"int16 prop_pwm\n"
"float32 tach_rpm\n"
"uint8 fault_status\n"
"uint8 reset_status\n"
"uint8 speed_loop_interval\n"
"uint8 tach_err_count\n"
"float32 voltage_volts\n"
"float32 current_amps\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: ds_core_msgs/DsHeader\n"
"# This is half our standard header for ds_msgs; see\n"
"# HEADERS.md for details\n"
"\n"
"# This header should ALWAYS be paired with a std_msgs/Header\n"
"# and should ALWAYS reference HEADERS.md.  If you're looking at this\n"
"# file to add headers to a type, you probably want to copy/paste\n"
"# the following block:\n"
"#\n"
"#     # The standard 2-part DsHeader block\n"
"#     # This allows both a standard ROS header and DS-specific header blocks\n"
"#     # See HEADERS.md in ds_core_msgs for details\n"
"#     std_msgs/Header header\n"
"#     ds_core_msgs/DsHeader ds_header\n"
"#\n"
"\n"
"# Time data was received or sent out (i/o time)\n"
"time io_time\n"
"\n"
"# Sensor source UUID\n"
"uint8[16] source_uuid\n"
"\n"
;
  }

  static const char* value(const ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.cmd);
      stream.next(m.speed_loop_enable_status);
      stream.next(m.minute_tag);
      stream.next(m.second_tag);
      stream.next(m.microsecond_tick_tag);
      stream.next(m.prop_pwm);
      stream.next(m.tach_rpm);
      stream.next(m.fault_status);
      stream.next(m.reset_status);
      stream.next(m.speed_loop_interval);
      stream.next(m.tach_err_count);
      stream.next(m.voltage_volts);
      stream.next(m.current_amps);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Tecnadyne561_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_actuator_msgs::Tecnadyne561_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "cmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd);
    s << indent << "speed_loop_enable_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.speed_loop_enable_status);
    s << indent << "minute_tag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.minute_tag);
    s << indent << "second_tag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.second_tag);
    s << indent << "microsecond_tick_tag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.microsecond_tick_tag);
    s << indent << "prop_pwm: ";
    Printer<int16_t>::stream(s, indent + "  ", v.prop_pwm);
    s << indent << "tach_rpm: ";
    Printer<float>::stream(s, indent + "  ", v.tach_rpm);
    s << indent << "fault_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fault_status);
    s << indent << "reset_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset_status);
    s << indent << "speed_loop_interval: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.speed_loop_interval);
    s << indent << "tach_err_count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tach_err_count);
    s << indent << "voltage_volts: ";
    Printer<float>::stream(s, indent + "  ", v.voltage_volts);
    s << indent << "current_amps: ";
    Printer<float>::stream(s, indent + "  ", v.current_amps);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_ACTUATOR_MSGS_MESSAGE_TECNADYNE561_H
