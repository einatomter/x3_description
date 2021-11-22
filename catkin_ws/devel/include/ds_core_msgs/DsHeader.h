// Generated by gencpp from file ds_core_msgs/DsHeader.msg
// DO NOT EDIT!


#ifndef DS_CORE_MSGS_MESSAGE_DSHEADER_H
#define DS_CORE_MSGS_MESSAGE_DSHEADER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_core_msgs
{
template <class ContainerAllocator>
struct DsHeader_
{
  typedef DsHeader_<ContainerAllocator> Type;

  DsHeader_()
    : io_time()
    , source_uuid()  {
      source_uuid.assign(0);
  }
  DsHeader_(const ContainerAllocator& _alloc)
    : io_time()
    , source_uuid()  {
  (void)_alloc;
      source_uuid.assign(0);
  }



   typedef ros::Time _io_time_type;
  _io_time_type io_time;

   typedef boost::array<uint8_t, 16>  _source_uuid_type;
  _source_uuid_type source_uuid;





  typedef boost::shared_ptr< ::ds_core_msgs::DsHeader_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_core_msgs::DsHeader_<ContainerAllocator> const> ConstPtr;

}; // struct DsHeader_

typedef ::ds_core_msgs::DsHeader_<std::allocator<void> > DsHeader;

typedef boost::shared_ptr< ::ds_core_msgs::DsHeader > DsHeaderPtr;
typedef boost::shared_ptr< ::ds_core_msgs::DsHeader const> DsHeaderConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_core_msgs::DsHeader_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_core_msgs::DsHeader_<ContainerAllocator1> & lhs, const ::ds_core_msgs::DsHeader_<ContainerAllocator2> & rhs)
{
  return lhs.io_time == rhs.io_time &&
    lhs.source_uuid == rhs.source_uuid;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_core_msgs::DsHeader_<ContainerAllocator1> & lhs, const ::ds_core_msgs::DsHeader_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::DsHeader_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_core_msgs::DsHeader_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::DsHeader_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_core_msgs::DsHeader_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::DsHeader_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_core_msgs::DsHeader_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_core_msgs::DsHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1897cb48fa6deceb6794bbc46ba5628f";
  }

  static const char* value(const ::ds_core_msgs::DsHeader_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1897cb48fa6decebULL;
  static const uint64_t static_value2 = 0x6794bbc46ba5628fULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_core_msgs::DsHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_core_msgs/DsHeader";
  }

  static const char* value(const ::ds_core_msgs::DsHeader_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_core_msgs::DsHeader_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is half our standard header for ds_msgs; see\n"
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

  static const char* value(const ::ds_core_msgs::DsHeader_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.io_time);
      stream.next(m.source_uuid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DsHeader_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_core_msgs::DsHeader_<ContainerAllocator>& v)
  {
    s << indent << "io_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.io_time);
    s << indent << "source_uuid[]" << std::endl;
    for (size_t i = 0; i < v.source_uuid.size(); ++i)
    {
      s << indent << "  source_uuid[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.source_uuid[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_CORE_MSGS_MESSAGE_DSHEADER_H
