// Generated by gencpp from file ds_nmea_msgs/Hdt.msg
// DO NOT EDIT!


#ifndef DS_NMEA_MSGS_MESSAGE_HDT_H
#define DS_NMEA_MSGS_MESSAGE_HDT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_nmea_msgs
{
template <class ContainerAllocator>
struct Hdt_
{
  typedef Hdt_<ContainerAllocator> Type;

  Hdt_()
    : heading(0.0)
    , is_true(false)
    , checksum(0)  {
    }
  Hdt_(const ContainerAllocator& _alloc)
    : heading(0.0)
    , is_true(false)
    , checksum(0)  {
  (void)_alloc;
    }



   typedef double _heading_type;
  _heading_type heading;

   typedef uint8_t _is_true_type;
  _is_true_type is_true;

   typedef uint8_t _checksum_type;
  _checksum_type checksum;





  typedef boost::shared_ptr< ::ds_nmea_msgs::Hdt_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_nmea_msgs::Hdt_<ContainerAllocator> const> ConstPtr;

}; // struct Hdt_

typedef ::ds_nmea_msgs::Hdt_<std::allocator<void> > Hdt;

typedef boost::shared_ptr< ::ds_nmea_msgs::Hdt > HdtPtr;
typedef boost::shared_ptr< ::ds_nmea_msgs::Hdt const> HdtConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_nmea_msgs::Hdt_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_nmea_msgs::Hdt_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_nmea_msgs::Hdt_<ContainerAllocator1> & lhs, const ::ds_nmea_msgs::Hdt_<ContainerAllocator2> & rhs)
{
  return lhs.heading == rhs.heading &&
    lhs.is_true == rhs.is_true &&
    lhs.checksum == rhs.checksum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_nmea_msgs::Hdt_<ContainerAllocator1> & lhs, const ::ds_nmea_msgs::Hdt_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_nmea_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_nmea_msgs::Hdt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_nmea_msgs::Hdt_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_nmea_msgs::Hdt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_nmea_msgs::Hdt_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nmea_msgs::Hdt_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_nmea_msgs::Hdt_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_nmea_msgs::Hdt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7f03731cba1cd8647179210f5e2cf600";
  }

  static const char* value(const ::ds_nmea_msgs::Hdt_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7f03731cba1cd864ULL;
  static const uint64_t static_value2 = 0x7179210f5e2cf600ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_nmea_msgs::Hdt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_nmea_msgs/Hdt";
  }

  static const char* value(const ::ds_nmea_msgs::Hdt_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_nmea_msgs::Hdt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# $HEHDT message\n"
"#\n"
"# .      1   2 3\n"
"#        |   | |\n"
"# $--HDT,x.x,T*hh\n"
"# 1) Heading Degrees, true\n"
"# 2) T = True\n"
"# 3) Checksum\n"
"#\n"
"float64 heading\n"
"bool is_true\n"
"uint8 checksum\n"
;
  }

  static const char* value(const ::ds_nmea_msgs::Hdt_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_nmea_msgs::Hdt_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.heading);
      stream.next(m.is_true);
      stream.next(m.checksum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Hdt_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_nmea_msgs::Hdt_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_nmea_msgs::Hdt_<ContainerAllocator>& v)
  {
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "is_true: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_true);
    s << indent << "checksum: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.checksum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_NMEA_MSGS_MESSAGE_HDT_H
