// Generated by gencpp from file ds_hotel_msgs/HTP.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_HTP_H
#define DS_HOTEL_MSGS_MESSAGE_HTP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_hotel_msgs
{
template <class ContainerAllocator>
struct HTP_
{
  typedef HTP_<ContainerAllocator> Type;

  HTP_()
    : header()
    , ds_header()
    , humidity(0.0)
    , temperature(0.0)
    , pressure(0.0)  {
    }
  HTP_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , humidity(0.0)
    , temperature(0.0)
    , pressure(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef double _humidity_type;
  _humidity_type humidity;

   typedef double _temperature_type;
  _temperature_type temperature;

   typedef double _pressure_type;
  _pressure_type pressure;





  typedef boost::shared_ptr< ::ds_hotel_msgs::HTP_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::HTP_<ContainerAllocator> const> ConstPtr;

}; // struct HTP_

typedef ::ds_hotel_msgs::HTP_<std::allocator<void> > HTP;

typedef boost::shared_ptr< ::ds_hotel_msgs::HTP > HTPPtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::HTP const> HTPConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::HTP_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::HTP_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::HTP_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::HTP_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.humidity == rhs.humidity &&
    lhs.temperature == rhs.temperature &&
    lhs.pressure == rhs.pressure;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::HTP_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::HTP_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::HTP_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::HTP_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::HTP_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::HTP_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::HTP_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::HTP_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::HTP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bf1478c795d95e9fe9cd54322ae82e2c";
  }

  static const char* value(const ::ds_hotel_msgs::HTP_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbf1478c795d95e9fULL;
  static const uint64_t static_value2 = 0xe9cd54322ae82e2cULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::HTP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/HTP";
  }

  static const char* value(const ::ds_hotel_msgs::HTP_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::HTP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"float64 humidity\n"
"float64 temperature\n"
"float64 pressure\n"
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

  static const char* value(const ::ds_hotel_msgs::HTP_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::HTP_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.humidity);
      stream.next(m.temperature);
      stream.next(m.pressure);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HTP_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::HTP_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::HTP_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "humidity: ";
    Printer<double>::stream(s, indent + "  ", v.humidity);
    s << indent << "temperature: ";
    Printer<double>::stream(s, indent + "  ", v.temperature);
    s << indent << "pressure: ";
    Printer<double>::stream(s, indent + "  ", v.pressure);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_HTP_H