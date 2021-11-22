// Generated by gencpp from file ds_hotel_msgs/BatteryCmdRequest.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_BATTERYCMDREQUEST_H
#define DS_HOTEL_MSGS_MESSAGE_BATTERYCMDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_hotel_msgs
{
template <class ContainerAllocator>
struct BatteryCmdRequest_
{
  typedef BatteryCmdRequest_<ContainerAllocator> Type;

  BatteryCmdRequest_()
    : command(0)  {
    }
  BatteryCmdRequest_(const ContainerAllocator& _alloc)
    : command(0)  {
  (void)_alloc;
    }



   typedef uint8_t _command_type;
  _command_type command;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(BAT_CMD_BOTH_OFF)
  #undef BAT_CMD_BOTH_OFF
#endif
#if defined(_WIN32) && defined(BAT_CMD_DISCHARGE_ON)
  #undef BAT_CMD_DISCHARGE_ON
#endif
#if defined(_WIN32) && defined(BAT_CMD_DISCHARGE_OFF)
  #undef BAT_CMD_DISCHARGE_OFF
#endif
#if defined(_WIN32) && defined(BAT_CMD_CHARGE_ON)
  #undef BAT_CMD_CHARGE_ON
#endif
#if defined(_WIN32) && defined(BAT_CMD_CHARGE_OFF)
  #undef BAT_CMD_CHARGE_OFF
#endif
#if defined(_WIN32) && defined(BAT_CMD_BOTH_ON)
  #undef BAT_CMD_BOTH_ON
#endif
#if defined(_WIN32) && defined(BAT_CMD_CHARGE_FAULT)
  #undef BAT_CMD_CHARGE_FAULT
#endif
#if defined(_WIN32) && defined(BAT_CMD_CHARGE_FAULT_W_DISCHARGE)
  #undef BAT_CMD_CHARGE_FAULT_W_DISCHARGE
#endif

  enum {
    BAT_CMD_BOTH_OFF = 1u,
    BAT_CMD_DISCHARGE_ON = 2u,
    BAT_CMD_DISCHARGE_OFF = 3u,
    BAT_CMD_CHARGE_ON = 4u,
    BAT_CMD_CHARGE_OFF = 5u,
    BAT_CMD_BOTH_ON = 6u,
    BAT_CMD_CHARGE_FAULT = 7u,
    BAT_CMD_CHARGE_FAULT_W_DISCHARGE = 8u,
  };


  typedef boost::shared_ptr< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BatteryCmdRequest_

typedef ::ds_hotel_msgs::BatteryCmdRequest_<std::allocator<void> > BatteryCmdRequest;

typedef boost::shared_ptr< ::ds_hotel_msgs::BatteryCmdRequest > BatteryCmdRequestPtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::BatteryCmdRequest const> BatteryCmdRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator2> & rhs)
{
  return lhs.command == rhs.command;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1d54548e91c62df1bc0c32c487a8f146";
  }

  static const char* value(const ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1d54548e91c62df1ULL;
  static const uint64_t static_value2 = 0xbc0c32c487a8f146ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/BatteryCmdRequest";
  }

  static const char* value(const ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 BAT_CMD_BOTH_OFF=1\n"
"uint8 BAT_CMD_DISCHARGE_ON=2\n"
"uint8 BAT_CMD_DISCHARGE_OFF=3\n"
"uint8 BAT_CMD_CHARGE_ON=4\n"
"uint8 BAT_CMD_CHARGE_OFF=5\n"
"uint8 BAT_CMD_BOTH_ON=6\n"
"uint8 BAT_CMD_CHARGE_FAULT=7\n"
"uint8 BAT_CMD_CHARGE_FAULT_W_DISCHARGE=8\n"
"uint8 command\n"
;
  }

  static const char* value(const ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BatteryCmdRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::BatteryCmdRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_BATTERYCMDREQUEST_H
