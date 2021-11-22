// Generated by gencpp from file ds_ocomms_msgs/PwrCmdResponse.msg
// DO NOT EDIT!


#ifndef DS_OCOMMS_MSGS_MESSAGE_PWRCMDRESPONSE_H
#define DS_OCOMMS_MSGS_MESSAGE_PWRCMDRESPONSE_H


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
struct PwrCmdResponse_
{
  typedef PwrCmdResponse_<ContainerAllocator> Type;

  PwrCmdResponse_()
    : action()  {
    }
  PwrCmdResponse_(const ContainerAllocator& _alloc)
    : action(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _action_type;
  _action_type action;





  typedef boost::shared_ptr< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PwrCmdResponse_

typedef ::ds_ocomms_msgs::PwrCmdResponse_<std::allocator<void> > PwrCmdResponse;

typedef boost::shared_ptr< ::ds_ocomms_msgs::PwrCmdResponse > PwrCmdResponsePtr;
typedef boost::shared_ptr< ::ds_ocomms_msgs::PwrCmdResponse const> PwrCmdResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator2> & rhs)
{
  return lhs.action == rhs.action;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator1> & lhs, const ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_ocomms_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7757aad79fa343e61bc69ed7f1b7666d";
  }

  static const char* value(const ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7757aad79fa343e6ULL;
  static const uint64_t static_value2 = 0x1bc69ed7f1b7666dULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_ocomms_msgs/PwrCmdResponse";
  }

  static const char* value(const ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string action\n"
;
  }

  static const char* value(const ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PwrCmdResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_ocomms_msgs::PwrCmdResponse_<ContainerAllocator>& v)
  {
    s << indent << "action: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.action);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_OCOMMS_MSGS_MESSAGE_PWRCMDRESPONSE_H
