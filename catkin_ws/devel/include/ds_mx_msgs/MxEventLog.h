// Generated by gencpp from file ds_mx_msgs/MxEventLog.msg
// DO NOT EDIT!


#ifndef DS_MX_MSGS_MESSAGE_MXEVENTLOG_H
#define DS_MX_MSGS_MESSAGE_MXEVENTLOG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ds_mx_msgs
{
template <class ContainerAllocator>
struct MxEventLog_
{
  typedef MxEventLog_<ContainerAllocator> Type;

  MxEventLog_()
    : header()
    , task_id()
    , task_name()
    , task_type()
    , event_type()
    , event_text()  {
    }
  MxEventLog_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , task_id(_alloc)
    , task_name(_alloc)
    , task_type(_alloc)
    , event_type(_alloc)
    , event_text(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _task_id_type;
  _task_id_type task_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _task_name_type;
  _task_name_type task_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _task_type_type;
  _task_type_type task_type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _event_type_type;
  _event_type_type event_type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _event_text_type;
  _event_text_type event_text;





  typedef boost::shared_ptr< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> const> ConstPtr;

}; // struct MxEventLog_

typedef ::ds_mx_msgs::MxEventLog_<std::allocator<void> > MxEventLog;

typedef boost::shared_ptr< ::ds_mx_msgs::MxEventLog > MxEventLogPtr;
typedef boost::shared_ptr< ::ds_mx_msgs::MxEventLog const> MxEventLogConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_mx_msgs::MxEventLog_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_mx_msgs::MxEventLog_<ContainerAllocator1> & lhs, const ::ds_mx_msgs::MxEventLog_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.task_id == rhs.task_id &&
    lhs.task_name == rhs.task_name &&
    lhs.task_type == rhs.task_type &&
    lhs.event_type == rhs.event_type &&
    lhs.event_text == rhs.event_text;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_mx_msgs::MxEventLog_<ContainerAllocator1> & lhs, const ::ds_mx_msgs::MxEventLog_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_mx_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1fb1db72967def1525936515f7e49c7e";
  }

  static const char* value(const ::ds_mx_msgs::MxEventLog_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1fb1db72967def15ULL;
  static const uint64_t static_value2 = 0x25936515f7e49c7eULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_mx_msgs/MxEventLog";
  }

  static const char* value(const ::ds_mx_msgs::MxEventLog_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"string task_id\n"
"string task_name\n"
"string task_type\n"
"string event_type\n"
"string event_text\n"
"\n"
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

  static const char* value(const ::ds_mx_msgs::MxEventLog_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.task_id);
      stream.next(m.task_name);
      stream.next(m.task_type);
      stream.next(m.event_type);
      stream.next(m.event_text);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MxEventLog_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_mx_msgs::MxEventLog_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_mx_msgs::MxEventLog_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "task_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.task_id);
    s << indent << "task_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.task_name);
    s << indent << "task_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.task_type);
    s << indent << "event_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.event_type);
    s << indent << "event_text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.event_text);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_MX_MSGS_MESSAGE_MXEVENTLOG_H
