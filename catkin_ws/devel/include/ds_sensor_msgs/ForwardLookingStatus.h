// Generated by gencpp from file ds_sensor_msgs/ForwardLookingStatus.msg
// DO NOT EDIT!


#ifndef DS_SENSOR_MSGS_MESSAGE_FORWARDLOOKINGSTATUS_H
#define DS_SENSOR_MSGS_MESSAGE_FORWARDLOOKINGSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ds_sensor_msgs
{
template <class ContainerAllocator>
struct ForwardLookingStatus_
{
  typedef ForwardLookingStatus_<ContainerAllocator> Type;

  ForwardLookingStatus_()
    : header()
    , sonar_ok(false)
    , return_code(false)
    , oa_enabled(false)
    , actively_avoiding(false)  {
    }
  ForwardLookingStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sonar_ok(false)
    , return_code(false)
    , oa_enabled(false)
    , actively_avoiding(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _sonar_ok_type;
  _sonar_ok_type sonar_ok;

   typedef uint8_t _return_code_type;
  _return_code_type return_code;

   typedef uint8_t _oa_enabled_type;
  _oa_enabled_type oa_enabled;

   typedef uint8_t _actively_avoiding_type;
  _actively_avoiding_type actively_avoiding;





  typedef boost::shared_ptr< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ForwardLookingStatus_

typedef ::ds_sensor_msgs::ForwardLookingStatus_<std::allocator<void> > ForwardLookingStatus;

typedef boost::shared_ptr< ::ds_sensor_msgs::ForwardLookingStatus > ForwardLookingStatusPtr;
typedef boost::shared_ptr< ::ds_sensor_msgs::ForwardLookingStatus const> ForwardLookingStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.sonar_ok == rhs.sonar_ok &&
    lhs.return_code == rhs.return_code &&
    lhs.oa_enabled == rhs.oa_enabled &&
    lhs.actively_avoiding == rhs.actively_avoiding;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9279a96024a40ec2b653130cade52235";
  }

  static const char* value(const ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9279a96024a40ec2ULL;
  static const uint64_t static_value2 = 0xb653130cade52235ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_sensor_msgs/ForwardLookingStatus";
  }

  static const char* value(const ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"bool sonar_ok\n"
"bool return_code\n"
"bool oa_enabled\n"
"bool actively_avoiding\n"
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
;
  }

  static const char* value(const ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sonar_ok);
      stream.next(m.return_code);
      stream.next(m.oa_enabled);
      stream.next(m.actively_avoiding);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ForwardLookingStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_sensor_msgs::ForwardLookingStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sonar_ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sonar_ok);
    s << indent << "return_code: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.return_code);
    s << indent << "oa_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.oa_enabled);
    s << indent << "actively_avoiding: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.actively_avoiding);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_SENSOR_MSGS_MESSAGE_FORWARDLOOKINGSTATUS_H
