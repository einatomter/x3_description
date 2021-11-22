// Generated by gencpp from file ds_actuator_msgs/XrCmdResponse.msg
// DO NOT EDIT!


#ifndef DS_ACTUATOR_MSGS_MESSAGE_XRCMDRESPONSE_H
#define DS_ACTUATOR_MSGS_MESSAGE_XRCMDRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_actuator_msgs
{
template <class ContainerAllocator>
struct XrCmdResponse_
{
  typedef XrCmdResponse_<ContainerAllocator> Type;

  XrCmdResponse_()
    : success(false)
    , msg()  {
    }
  XrCmdResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , msg(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _msg_type;
  _msg_type msg;





  typedef boost::shared_ptr< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> const> ConstPtr;

}; // struct XrCmdResponse_

typedef ::ds_actuator_msgs::XrCmdResponse_<std::allocator<void> > XrCmdResponse;

typedef boost::shared_ptr< ::ds_actuator_msgs::XrCmdResponse > XrCmdResponsePtr;
typedef boost::shared_ptr< ::ds_actuator_msgs::XrCmdResponse const> XrCmdResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator1> & lhs, const ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.msg == rhs.msg;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator1> & lhs, const ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_actuator_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e835b04f93d0b30fd8cb71e0967a16db";
  }

  static const char* value(const ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe835b04f93d0b30fULL;
  static const uint64_t static_value2 = 0xd8cb71e0967a16dbULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_actuator_msgs/XrCmdResponse";
  }

  static const char* value(const ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"bool success\n"
"string msg\n"
"\n"
;
  }

  static const char* value(const ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct XrCmdResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_actuator_msgs::XrCmdResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_ACTUATOR_MSGS_MESSAGE_XRCMDRESPONSE_H
