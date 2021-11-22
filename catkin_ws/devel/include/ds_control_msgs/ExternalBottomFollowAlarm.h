// Generated by gencpp from file ds_control_msgs/ExternalBottomFollowAlarm.msg
// DO NOT EDIT!


#ifndef DS_CONTROL_MSGS_MESSAGE_EXTERNALBOTTOMFOLLOWALARM_H
#define DS_CONTROL_MSGS_MESSAGE_EXTERNALBOTTOMFOLLOWALARM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_control_msgs
{
template <class ContainerAllocator>
struct ExternalBottomFollowAlarm_
{
  typedef ExternalBottomFollowAlarm_<ContainerAllocator> Type;

  ExternalBottomFollowAlarm_()
    : header()
    , ds_header()
    , alarm(false)
    , delta_down(0.0)
    , speed_override(0.0)  {
    }
  ExternalBottomFollowAlarm_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , alarm(false)
    , delta_down(0.0)
    , speed_override(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef uint8_t _alarm_type;
  _alarm_type alarm;

   typedef double _delta_down_type;
  _delta_down_type delta_down;

   typedef double _speed_override_type;
  _speed_override_type speed_override;





  typedef boost::shared_ptr< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> const> ConstPtr;

}; // struct ExternalBottomFollowAlarm_

typedef ::ds_control_msgs::ExternalBottomFollowAlarm_<std::allocator<void> > ExternalBottomFollowAlarm;

typedef boost::shared_ptr< ::ds_control_msgs::ExternalBottomFollowAlarm > ExternalBottomFollowAlarmPtr;
typedef boost::shared_ptr< ::ds_control_msgs::ExternalBottomFollowAlarm const> ExternalBottomFollowAlarmConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator1> & lhs, const ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.alarm == rhs.alarm &&
    lhs.delta_down == rhs.delta_down &&
    lhs.speed_override == rhs.speed_override;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator1> & lhs, const ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2e29d027a56b3836cd2e81d6b8ef0320";
  }

  static const char* value(const ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2e29d027a56b3836ULL;
  static const uint64_t static_value2 = 0xcd2e81d6b8ef0320ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_control_msgs/ExternalBottomFollowAlarm";
  }

  static const char* value(const ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"bool alarm\n"
"# You probably want delta_down to be negative to go up\n"
"float64 delta_down\n"
"float64 speed_override\n"
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

  static const char* value(const ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.alarm);
      stream.next(m.delta_down);
      stream.next(m.speed_override);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExternalBottomFollowAlarm_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_control_msgs::ExternalBottomFollowAlarm_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "alarm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.alarm);
    s << indent << "delta_down: ";
    Printer<double>::stream(s, indent + "  ", v.delta_down);
    s << indent << "speed_override: ";
    Printer<double>::stream(s, indent + "  ", v.speed_override);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_CONTROL_MSGS_MESSAGE_EXTERNALBOTTOMFOLLOWALARM_H
