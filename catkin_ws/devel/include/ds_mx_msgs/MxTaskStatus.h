// Generated by gencpp from file ds_mx_msgs/MxTaskStatus.msg
// DO NOT EDIT!


#ifndef DS_MX_MSGS_MESSAGE_MXTASKSTATUS_H
#define DS_MX_MSGS_MESSAGE_MXTASKSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ds_core_msgs/KeyString.h>

namespace ds_mx_msgs
{
template <class ContainerAllocator>
struct MxTaskStatus_
{
  typedef MxTaskStatus_<ContainerAllocator> Type;

  MxTaskStatus_()
    : name()
    , type()
    , uuid()
    , timeout()
    , timeout_left()
    , values()  {
      uuid.assign(0);
  }
  MxTaskStatus_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , type(_alloc)
    , uuid()
    , timeout()
    , timeout_left()
    , values(_alloc)  {
  (void)_alloc;
      uuid.assign(0);
  }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef boost::array<uint8_t, 16>  _uuid_type;
  _uuid_type uuid;

   typedef ros::Time _timeout_type;
  _timeout_type timeout;

   typedef ros::Duration _timeout_left_type;
  _timeout_left_type timeout_left;

   typedef std::vector< ::ds_core_msgs::KeyString_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ds_core_msgs::KeyString_<ContainerAllocator> >::other >  _values_type;
  _values_type values;





  typedef boost::shared_ptr< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> const> ConstPtr;

}; // struct MxTaskStatus_

typedef ::ds_mx_msgs::MxTaskStatus_<std::allocator<void> > MxTaskStatus;

typedef boost::shared_ptr< ::ds_mx_msgs::MxTaskStatus > MxTaskStatusPtr;
typedef boost::shared_ptr< ::ds_mx_msgs::MxTaskStatus const> MxTaskStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator1> & lhs, const ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.type == rhs.type &&
    lhs.uuid == rhs.uuid &&
    lhs.timeout == rhs.timeout &&
    lhs.timeout_left == rhs.timeout_left &&
    lhs.values == rhs.values;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator1> & lhs, const ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_mx_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ffe1a1e31711baded4f2808d26d5d677";
  }

  static const char* value(const ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xffe1a1e31711badeULL;
  static const uint64_t static_value2 = 0xd4f2808d26d5d677ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_mx_msgs/MxTaskStatus";
  }

  static const char* value(const ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"string type\n"
"uint8[16] uuid\n"
"\n"
"time timeout\n"
"duration timeout_left\n"
"\n"
"# freeform values\n"
"ds_core_msgs/KeyString[] values\n"
"\n"
"================================================================================\n"
"MSG: ds_core_msgs/KeyString\n"
"string key\n"
"string value\n"
;
  }

  static const char* value(const ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.type);
      stream.next(m.uuid);
      stream.next(m.timeout);
      stream.next(m.timeout_left);
      stream.next(m.values);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MxTaskStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_mx_msgs::MxTaskStatus_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "uuid[]" << std::endl;
    for (size_t i = 0; i < v.uuid.size(); ++i)
    {
      s << indent << "  uuid[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.uuid[i]);
    }
    s << indent << "timeout: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timeout);
    s << indent << "timeout_left: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.timeout_left);
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ds_core_msgs::KeyString_<ContainerAllocator> >::stream(s, indent + "    ", v.values[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_MX_MSGS_MESSAGE_MXTASKSTATUS_H