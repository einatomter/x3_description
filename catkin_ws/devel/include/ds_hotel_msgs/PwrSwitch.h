// Generated by gencpp from file ds_hotel_msgs/PwrSwitch.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_PWRSWITCH_H
#define DS_HOTEL_MSGS_MESSAGE_PWRSWITCH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>
#include <ds_hotel_msgs/PwrSwitchDevices.h>

namespace ds_hotel_msgs
{
template <class ContainerAllocator>
struct PwrSwitch_
{
  typedef PwrSwitch_<ContainerAllocator> Type;

  PwrSwitch_()
    : header()
    , ds_header()
    , pwr_devices()  {
    }
  PwrSwitch_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , pwr_devices(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef std::vector< ::ds_hotel_msgs::PwrSwitchDevices_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ds_hotel_msgs::PwrSwitchDevices_<ContainerAllocator> >::other >  _pwr_devices_type;
  _pwr_devices_type pwr_devices;





  typedef boost::shared_ptr< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> const> ConstPtr;

}; // struct PwrSwitch_

typedef ::ds_hotel_msgs::PwrSwitch_<std::allocator<void> > PwrSwitch;

typedef boost::shared_ptr< ::ds_hotel_msgs::PwrSwitch > PwrSwitchPtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::PwrSwitch const> PwrSwitchConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.pwr_devices == rhs.pwr_devices;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2bc2086c8ab7fabcaf293aab8af57fe5";
  }

  static const char* value(const ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2bc2086c8ab7fabcULL;
  static const uint64_t static_value2 = 0xaf293aab8af57fe5ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/PwrSwitch";
  }

  static const char* value(const ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"PwrSwitchDevices[] pwr_devices\n"
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
"\n"
"================================================================================\n"
"MSG: ds_hotel_msgs/PwrSwitchDevices\n"
"# does not have headers because it is only used with PwrSwitch.msg\n"
"\n"
"string card_name\n"
"string device_name\n"
"bool device_state\n"
;
  }

  static const char* value(const ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.pwr_devices);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PwrSwitch_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::PwrSwitch_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "pwr_devices[]" << std::endl;
    for (size_t i = 0; i < v.pwr_devices.size(); ++i)
    {
      s << indent << "  pwr_devices[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ds_hotel_msgs::PwrSwitchDevices_<ContainerAllocator> >::stream(s, indent + "    ", v.pwr_devices[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_PWRSWITCH_H
