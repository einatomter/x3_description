// Generated by gencpp from file ds_ocomms_msgs/PingCmdRequest.msg
// DO NOT EDIT!


#ifndef DS_OCOMMS_MSGS_MESSAGE_PINGCMDREQUEST_H
#define DS_OCOMMS_MSGS_MESSAGE_PINGCMDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_ocomms_msgs
{
template <class ContainerAllocator>
struct PingCmdRequest_
{
  typedef PingCmdRequest_<ContainerAllocator> Type;

  PingCmdRequest_()
    : PING_DESTINATION()
    , PING_PAYLOAD()  {
    }
  PingCmdRequest_(const ContainerAllocator& _alloc)
    : PING_DESTINATION(_alloc)
    , PING_PAYLOAD(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PING_DESTINATION_type;
  _PING_DESTINATION_type PING_DESTINATION;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _PING_PAYLOAD_type;
  _PING_PAYLOAD_type PING_PAYLOAD;





  typedef boost::shared_ptr< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PingCmdRequest_

typedef ::ds_ocomms_msgs::PingCmdRequest_<std::allocator<void> > PingCmdRequest;

typedef boost::shared_ptr< ::ds_ocomms_msgs::PingCmdRequest > PingCmdRequestPtr;
typedef boost::shared_ptr< ::ds_ocomms_msgs::PingCmdRequest const> PingCmdRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator2> & rhs)
{
  return lhs.PING_DESTINATION == rhs.PING_DESTINATION &&
    lhs.PING_PAYLOAD == rhs.PING_PAYLOAD;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_ocomms_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e08a62c222b71089cd5884b3cb9b3c60";
  }

  static const char* value(const ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe08a62c222b71089ULL;
  static const uint64_t static_value2 = 0xcd5884b3cb9b3c60ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_ocomms_msgs/PingCmdRequest";
  }

  static const char* value(const ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string PING_DESTINATION\n"
"string PING_PAYLOAD\n"
;
  }

  static const char* value(const ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.PING_DESTINATION);
      stream.next(m.PING_PAYLOAD);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PingCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_ocomms_msgs::PingCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "PING_DESTINATION: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PING_DESTINATION);
    s << indent << "PING_PAYLOAD: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.PING_PAYLOAD);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_OCOMMS_MSGS_MESSAGE_PINGCMDREQUEST_H