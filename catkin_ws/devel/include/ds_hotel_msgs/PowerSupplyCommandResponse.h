// Generated by gencpp from file ds_hotel_msgs/PowerSupplyCommandResponse.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_POWERSUPPLYCOMMANDRESPONSE_H
#define DS_HOTEL_MSGS_MESSAGE_POWERSUPPLYCOMMANDRESPONSE_H


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
struct PowerSupplyCommandResponse_
{
  typedef PowerSupplyCommandResponse_<ContainerAllocator> Type;

  PowerSupplyCommandResponse_()
    : success(false)  {
    }
  PowerSupplyCommandResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PowerSupplyCommandResponse_

typedef ::ds_hotel_msgs::PowerSupplyCommandResponse_<std::allocator<void> > PowerSupplyCommandResponse;

typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupplyCommandResponse > PowerSupplyCommandResponsePtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupplyCommandResponse const> PowerSupplyCommandResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/PowerSupplyCommandResponse";
  }

  static const char* value(const ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"bool success\n"
;
  }

  static const char* value(const ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PowerSupplyCommandResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::PowerSupplyCommandResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_POWERSUPPLYCOMMANDRESPONSE_H
