// Generated by gencpp from file ds_hotel_msgs/ChargeCmdResponse.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_CHARGECMDRESPONSE_H
#define DS_HOTEL_MSGS_MESSAGE_CHARGECMDRESPONSE_H


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
struct ChargeCmdResponse_
{
  typedef ChargeCmdResponse_<ContainerAllocator> Type;

  ChargeCmdResponse_()
    {
    }
  ChargeCmdResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ChargeCmdResponse_

typedef ::ds_hotel_msgs::ChargeCmdResponse_<std::allocator<void> > ChargeCmdResponse;

typedef boost::shared_ptr< ::ds_hotel_msgs::ChargeCmdResponse > ChargeCmdResponsePtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::ChargeCmdResponse const> ChargeCmdResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/ChargeCmdResponse";
  }

  static const char* value(const ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChargeCmdResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::ds_hotel_msgs::ChargeCmdResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_CHARGECMDRESPONSE_H