// Generated by gencpp from file ds_acomms_msgs/MicromodemData.msg
// DO NOT EDIT!


#ifndef DS_ACOMMS_MSGS_MESSAGE_MICROMODEMDATA_H
#define DS_ACOMMS_MSGS_MESSAGE_MICROMODEMDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ds_acomms_msgs/ModemData.h>

namespace ds_acomms_msgs
{
template <class ContainerAllocator>
struct MicromodemData_
{
  typedef MicromodemData_<ContainerAllocator> Type;

  MicromodemData_()
    : stamp()
    , local_addr(0)
    , remote_addr(0)
    , rate(0)
    , frames()  {
    }
  MicromodemData_(const ContainerAllocator& _alloc)
    : stamp()
    , local_addr(0)
    , remote_addr(0)
    , rate(0)
    , frames(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef uint16_t _local_addr_type;
  _local_addr_type local_addr;

   typedef uint16_t _remote_addr_type;
  _remote_addr_type remote_addr;

   typedef uint8_t _rate_type;
  _rate_type rate;

   typedef std::vector< ::ds_acomms_msgs::ModemData_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ds_acomms_msgs::ModemData_<ContainerAllocator> >::other >  _frames_type;
  _frames_type frames;





  typedef boost::shared_ptr< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> const> ConstPtr;

}; // struct MicromodemData_

typedef ::ds_acomms_msgs::MicromodemData_<std::allocator<void> > MicromodemData;

typedef boost::shared_ptr< ::ds_acomms_msgs::MicromodemData > MicromodemDataPtr;
typedef boost::shared_ptr< ::ds_acomms_msgs::MicromodemData const> MicromodemDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_acomms_msgs::MicromodemData_<ContainerAllocator1> & lhs, const ::ds_acomms_msgs::MicromodemData_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.local_addr == rhs.local_addr &&
    lhs.remote_addr == rhs.remote_addr &&
    lhs.rate == rhs.rate &&
    lhs.frames == rhs.frames;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_acomms_msgs::MicromodemData_<ContainerAllocator1> & lhs, const ::ds_acomms_msgs::MicromodemData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_acomms_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e46edd9bdaace83dd033464cd29845e4";
  }

  static const char* value(const ::ds_acomms_msgs::MicromodemData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe46edd9bdaace83dULL;
  static const uint64_t static_value2 = 0xd033464cd29845e4ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_acomms_msgs/MicromodemData";
  }

  static const char* value(const ::ds_acomms_msgs::MicromodemData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Specialized message type for sending/receiving micromodem data\n"
"# All other modems should use AcousticModemData\n"
"\n"
"time stamp\n"
"uint16 local_addr\n"
"uint16 remote_addr\n"
"\n"
"# Rate for the micromodem; we typically use 1, 4 or 5\n"
"uint8 rate\n"
"\n"
"ModemData[] frames\n"
"\n"
"================================================================================\n"
"MSG: ds_acomms_msgs/ModemData\n"
"# This is meant to be a building block for other messages;\n"
"# not used on its own. See AcousticModemData and MicromodemData.\n"
"uint8[] payload\n"
;
  }

  static const char* value(const ::ds_acomms_msgs::MicromodemData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.local_addr);
      stream.next(m.remote_addr);
      stream.next(m.rate);
      stream.next(m.frames);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MicromodemData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_acomms_msgs::MicromodemData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_acomms_msgs::MicromodemData_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "local_addr: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.local_addr);
    s << indent << "remote_addr: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.remote_addr);
    s << indent << "rate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rate);
    s << indent << "frames[]" << std::endl;
    for (size_t i = 0; i < v.frames.size(); ++i)
    {
      s << indent << "  frames[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ds_acomms_msgs::ModemData_<ContainerAllocator> >::stream(s, indent + "    ", v.frames[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_ACOMMS_MSGS_MESSAGE_MICROMODEMDATA_H
