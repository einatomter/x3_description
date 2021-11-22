// Generated by gencpp from file ds_hotel_msgs/XR.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_XR_H
#define DS_HOTEL_MSGS_MESSAGE_XR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_hotel_msgs
{
template <class ContainerAllocator>
struct XR_
{
  typedef XR_<ContainerAllocator> Type;

  XR_()
    : header()
    , ds_header()
    , deadhour(0.0)
    , good(false)
    , address()
    , idnum(0)
    , C(0)
    , V(0)
    , valve_current_level(0)
    , valve_run(false)
    , valve_open(false)
    , valve_battery_set_on(false)
    , valve_battery_set_off(false)
    , M(0)
    , motor_2_drop(false)
    , motor_2_hold(false)
    , motor_1_drop(false)
    , motor_1_hold(false)
    , A(0)
    , burnwire_1_drive(false)
    , burnwire_2_drive(false)
    , motor_1_secs(0)
    , motor_2_secs(0)
    , burnwire_1_secs(0)
    , burnwire_2_secs(0)
    , short_deadsecs(0)
    , short_deadsecs_idle(0)
    , deadsecs(0)
    , Dd(0)  {
    }
  XR_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , deadhour(0.0)
    , good(false)
    , address(_alloc)
    , idnum(0)
    , C(0)
    , V(0)
    , valve_current_level(0)
    , valve_run(false)
    , valve_open(false)
    , valve_battery_set_on(false)
    , valve_battery_set_off(false)
    , M(0)
    , motor_2_drop(false)
    , motor_2_hold(false)
    , motor_1_drop(false)
    , motor_1_hold(false)
    , A(0)
    , burnwire_1_drive(false)
    , burnwire_2_drive(false)
    , motor_1_secs(0)
    , motor_2_secs(0)
    , burnwire_1_secs(0)
    , burnwire_2_secs(0)
    , short_deadsecs(0)
    , short_deadsecs_idle(0)
    , deadsecs(0)
    , Dd(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef double _deadhour_type;
  _deadhour_type deadhour;

   typedef uint8_t _good_type;
  _good_type good;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _address_type;
  _address_type address;

   typedef uint16_t _idnum_type;
  _idnum_type idnum;

   typedef uint8_t _C_type;
  _C_type C;

   typedef uint8_t _V_type;
  _V_type V;

   typedef uint8_t _valve_current_level_type;
  _valve_current_level_type valve_current_level;

   typedef uint8_t _valve_run_type;
  _valve_run_type valve_run;

   typedef uint8_t _valve_open_type;
  _valve_open_type valve_open;

   typedef uint8_t _valve_battery_set_on_type;
  _valve_battery_set_on_type valve_battery_set_on;

   typedef uint8_t _valve_battery_set_off_type;
  _valve_battery_set_off_type valve_battery_set_off;

   typedef uint8_t _M_type;
  _M_type M;

   typedef uint8_t _motor_2_drop_type;
  _motor_2_drop_type motor_2_drop;

   typedef uint8_t _motor_2_hold_type;
  _motor_2_hold_type motor_2_hold;

   typedef uint8_t _motor_1_drop_type;
  _motor_1_drop_type motor_1_drop;

   typedef uint8_t _motor_1_hold_type;
  _motor_1_hold_type motor_1_hold;

   typedef uint8_t _A_type;
  _A_type A;

   typedef uint8_t _burnwire_1_drive_type;
  _burnwire_1_drive_type burnwire_1_drive;

   typedef uint8_t _burnwire_2_drive_type;
  _burnwire_2_drive_type burnwire_2_drive;

   typedef uint8_t _motor_1_secs_type;
  _motor_1_secs_type motor_1_secs;

   typedef uint8_t _motor_2_secs_type;
  _motor_2_secs_type motor_2_secs;

   typedef uint16_t _burnwire_1_secs_type;
  _burnwire_1_secs_type burnwire_1_secs;

   typedef uint16_t _burnwire_2_secs_type;
  _burnwire_2_secs_type burnwire_2_secs;

   typedef uint8_t _short_deadsecs_type;
  _short_deadsecs_type short_deadsecs;

   typedef uint8_t _short_deadsecs_idle_type;
  _short_deadsecs_idle_type short_deadsecs_idle;

   typedef int32_t _deadsecs_type;
  _deadsecs_type deadsecs;

   typedef int32_t _Dd_type;
  _Dd_type Dd;





  typedef boost::shared_ptr< ::ds_hotel_msgs::XR_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::XR_<ContainerAllocator> const> ConstPtr;

}; // struct XR_

typedef ::ds_hotel_msgs::XR_<std::allocator<void> > XR;

typedef boost::shared_ptr< ::ds_hotel_msgs::XR > XRPtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::XR const> XRConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::XR_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::XR_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::XR_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::XR_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.deadhour == rhs.deadhour &&
    lhs.good == rhs.good &&
    lhs.address == rhs.address &&
    lhs.idnum == rhs.idnum &&
    lhs.C == rhs.C &&
    lhs.V == rhs.V &&
    lhs.valve_current_level == rhs.valve_current_level &&
    lhs.valve_run == rhs.valve_run &&
    lhs.valve_open == rhs.valve_open &&
    lhs.valve_battery_set_on == rhs.valve_battery_set_on &&
    lhs.valve_battery_set_off == rhs.valve_battery_set_off &&
    lhs.M == rhs.M &&
    lhs.motor_2_drop == rhs.motor_2_drop &&
    lhs.motor_2_hold == rhs.motor_2_hold &&
    lhs.motor_1_drop == rhs.motor_1_drop &&
    lhs.motor_1_hold == rhs.motor_1_hold &&
    lhs.A == rhs.A &&
    lhs.burnwire_1_drive == rhs.burnwire_1_drive &&
    lhs.burnwire_2_drive == rhs.burnwire_2_drive &&
    lhs.motor_1_secs == rhs.motor_1_secs &&
    lhs.motor_2_secs == rhs.motor_2_secs &&
    lhs.burnwire_1_secs == rhs.burnwire_1_secs &&
    lhs.burnwire_2_secs == rhs.burnwire_2_secs &&
    lhs.short_deadsecs == rhs.short_deadsecs &&
    lhs.short_deadsecs_idle == rhs.short_deadsecs_idle &&
    lhs.deadsecs == rhs.deadsecs &&
    lhs.Dd == rhs.Dd;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::XR_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::XR_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::XR_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::XR_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::XR_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::XR_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::XR_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::XR_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::XR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "41e931f913d53ac030a55593d2a20e47";
  }

  static const char* value(const ::ds_hotel_msgs::XR_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x41e931f913d53ac0ULL;
  static const uint64_t static_value2 = 0x30a55593d2a20e47ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::XR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/XR";
  }

  static const char* value(const ::ds_hotel_msgs::XR_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::XR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"float64 deadhour\n"
"bool good\n"
"string address\n"
"uint16 idnum\n"
"\n"
"#############\n"
"# code_status\n"
"\n"
"uint8 C\n"
"\n"
"################\n"
"# release_status\n"
"\n"
"# valve system control word\n"
"uint8 V\n"
"uint8 valve_current_level\n"
"bool valve_run\n"
"bool valve_open\n"
"bool valve_battery_set_on\n"
"bool valve_battery_set_off\n"
"\n"
"# motor release control word\n"
"uint8 M\n"
"bool motor_2_drop\n"
"bool motor_2_hold\n"
"bool motor_1_drop\n"
"bool motor_1_hold\n"
"\n"
"# analog mux and nichrome word\n"
"uint8 A\n"
"bool burnwire_1_drive\n"
"bool burnwire_2_drive\n"
"\n"
"#M1 M2 motors count down until stop driving\n"
"uint8 motor_1_secs\n"
"uint8 motor_2_secs\n"
"\n"
"#N1 N2 nichrone burn wire statuses\n"
"uint16 burnwire_1_secs\n"
"uint16 burnwire_2_secs\n"
"\n"
"#TR short deadman (reset by don't abort message)\n"
"uint8 short_deadsecs\n"
"\n"
"#TV short idle deadman (usually disabled)\n"
"uint8 short_deadsecs_idle\n"
"\n"
"#long deadman\n"
"int32 deadsecs\n"
"\n"
"#################\n"
"# deadhour_status\n"
"int32 Dd\n"
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
"\n"
"================================================================================\n"
"MSG: ds_core_msgs/DsHeader\n"
"# This is half our standard header for ds_msgs; see\n"
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

  static const char* value(const ::ds_hotel_msgs::XR_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::XR_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.deadhour);
      stream.next(m.good);
      stream.next(m.address);
      stream.next(m.idnum);
      stream.next(m.C);
      stream.next(m.V);
      stream.next(m.valve_current_level);
      stream.next(m.valve_run);
      stream.next(m.valve_open);
      stream.next(m.valve_battery_set_on);
      stream.next(m.valve_battery_set_off);
      stream.next(m.M);
      stream.next(m.motor_2_drop);
      stream.next(m.motor_2_hold);
      stream.next(m.motor_1_drop);
      stream.next(m.motor_1_hold);
      stream.next(m.A);
      stream.next(m.burnwire_1_drive);
      stream.next(m.burnwire_2_drive);
      stream.next(m.motor_1_secs);
      stream.next(m.motor_2_secs);
      stream.next(m.burnwire_1_secs);
      stream.next(m.burnwire_2_secs);
      stream.next(m.short_deadsecs);
      stream.next(m.short_deadsecs_idle);
      stream.next(m.deadsecs);
      stream.next(m.Dd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct XR_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::XR_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::XR_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "deadhour: ";
    Printer<double>::stream(s, indent + "  ", v.deadhour);
    s << indent << "good: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.good);
    s << indent << "address: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.address);
    s << indent << "idnum: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.idnum);
    s << indent << "C: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.C);
    s << indent << "V: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.V);
    s << indent << "valve_current_level: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valve_current_level);
    s << indent << "valve_run: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valve_run);
    s << indent << "valve_open: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valve_open);
    s << indent << "valve_battery_set_on: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valve_battery_set_on);
    s << indent << "valve_battery_set_off: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valve_battery_set_off);
    s << indent << "M: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.M);
    s << indent << "motor_2_drop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motor_2_drop);
    s << indent << "motor_2_hold: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motor_2_hold);
    s << indent << "motor_1_drop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motor_1_drop);
    s << indent << "motor_1_hold: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motor_1_hold);
    s << indent << "A: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.A);
    s << indent << "burnwire_1_drive: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.burnwire_1_drive);
    s << indent << "burnwire_2_drive: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.burnwire_2_drive);
    s << indent << "motor_1_secs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motor_1_secs);
    s << indent << "motor_2_secs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motor_2_secs);
    s << indent << "burnwire_1_secs: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.burnwire_1_secs);
    s << indent << "burnwire_2_secs: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.burnwire_2_secs);
    s << indent << "short_deadsecs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.short_deadsecs);
    s << indent << "short_deadsecs_idle: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.short_deadsecs_idle);
    s << indent << "deadsecs: ";
    Printer<int32_t>::stream(s, indent + "  ", v.deadsecs);
    s << indent << "Dd: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Dd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_XR_H
