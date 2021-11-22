// Generated by gencpp from file ds_hotel_msgs/PowerSupply.msg
// DO NOT EDIT!


#ifndef DS_HOTEL_MSGS_MESSAGE_POWERSUPPLY_H
#define DS_HOTEL_MSGS_MESSAGE_POWERSUPPLY_H


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
struct PowerSupply_
{
  typedef PowerSupply_<ContainerAllocator> Type;

  PowerSupply_()
    : header()
    , ds_header()
    , idnum(0)
    , meas_volts(0.0)
    , meas_amps(0.0)
    , prog_volts(0.0)
    , prog_amps(0.0)
    , output_enable(false)
    , status_good(false)
    , frontpanel_locked(false)
    , fault(false)
    , constant_voltage(false)
    , constant_current(false)
    , status_msg()  {
    }
  PowerSupply_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , idnum(0)
    , meas_volts(0.0)
    , meas_amps(0.0)
    , prog_volts(0.0)
    , prog_amps(0.0)
    , output_enable(false)
    , status_good(false)
    , frontpanel_locked(false)
    , fault(false)
    , constant_voltage(false)
    , constant_current(false)
    , status_msg(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef int32_t _idnum_type;
  _idnum_type idnum;

   typedef float _meas_volts_type;
  _meas_volts_type meas_volts;

   typedef float _meas_amps_type;
  _meas_amps_type meas_amps;

   typedef float _prog_volts_type;
  _prog_volts_type prog_volts;

   typedef float _prog_amps_type;
  _prog_amps_type prog_amps;

   typedef uint8_t _output_enable_type;
  _output_enable_type output_enable;

   typedef uint8_t _status_good_type;
  _status_good_type status_good;

   typedef uint8_t _frontpanel_locked_type;
  _frontpanel_locked_type frontpanel_locked;

   typedef uint8_t _fault_type;
  _fault_type fault;

   typedef uint8_t _constant_voltage_type;
  _constant_voltage_type constant_voltage;

   typedef uint8_t _constant_current_type;
  _constant_current_type constant_current;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_msg_type;
  _status_msg_type status_msg;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(POWERSUPPLY_NODATA)
  #undef POWERSUPPLY_NODATA
#endif


  static const float POWERSUPPLY_NODATA;

  typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> const> ConstPtr;

}; // struct PowerSupply_

typedef ::ds_hotel_msgs::PowerSupply_<std::allocator<void> > PowerSupply;

typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupply > PowerSupplyPtr;
typedef boost::shared_ptr< ::ds_hotel_msgs::PowerSupply const> PowerSupplyConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const float
      PowerSupply_<ContainerAllocator>::POWERSUPPLY_NODATA =
        
          -9999.99
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_hotel_msgs::PowerSupply_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PowerSupply_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.idnum == rhs.idnum &&
    lhs.meas_volts == rhs.meas_volts &&
    lhs.meas_amps == rhs.meas_amps &&
    lhs.prog_volts == rhs.prog_volts &&
    lhs.prog_amps == rhs.prog_amps &&
    lhs.output_enable == rhs.output_enable &&
    lhs.status_good == rhs.status_good &&
    lhs.frontpanel_locked == rhs.frontpanel_locked &&
    lhs.fault == rhs.fault &&
    lhs.constant_voltage == rhs.constant_voltage &&
    lhs.constant_current == rhs.constant_current &&
    lhs.status_msg == rhs.status_msg;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_hotel_msgs::PowerSupply_<ContainerAllocator1> & lhs, const ::ds_hotel_msgs::PowerSupply_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_hotel_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45d4319d65715d5b4815a9e91dedcf7f";
  }

  static const char* value(const ::ds_hotel_msgs::PowerSupply_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45d4319d65715d5bULL;
  static const uint64_t static_value2 = 0x4815a9e91dedcf7fULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_hotel_msgs/PowerSupply";
  }

  static const char* value(const ::ds_hotel_msgs::PowerSupply_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 POWERSUPPLY_NODATA = -9999.99\n"
"\n"
"# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"# ID number to help identify chargers\n"
"int32 idnum\n"
"\n"
"# Measured output values\n"
"float32 meas_volts\n"
"float32 meas_amps\n"
"\n"
"# Programmed output values\n"
"float32 prog_volts\n"
"float32 prog_amps\n"
"\n"
"# Flag for whether the output is enabled or not\n"
"bool output_enable\n"
"\n"
"# True if the output is good; false otherwise\n"
"bool status_good\n"
"\n"
"# If true, the front panel is locked out and local control is disabled\n"
"bool frontpanel_locked\n"
"\n"
"# Independent status flags.  These SHOULD be mutually exclusive,\n"
"# but the Lambda power supplie provide one for each\n"
"bool fault\n"
"bool constant_voltage\n"
"bool constant_current\n"
"\n"
"# It is \n"
"string status_msg\n"
"\n"
"\n"
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

  static const char* value(const ::ds_hotel_msgs::PowerSupply_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.idnum);
      stream.next(m.meas_volts);
      stream.next(m.meas_amps);
      stream.next(m.prog_volts);
      stream.next(m.prog_amps);
      stream.next(m.output_enable);
      stream.next(m.status_good);
      stream.next(m.frontpanel_locked);
      stream.next(m.fault);
      stream.next(m.constant_voltage);
      stream.next(m.constant_current);
      stream.next(m.status_msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PowerSupply_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_hotel_msgs::PowerSupply_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_hotel_msgs::PowerSupply_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "idnum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.idnum);
    s << indent << "meas_volts: ";
    Printer<float>::stream(s, indent + "  ", v.meas_volts);
    s << indent << "meas_amps: ";
    Printer<float>::stream(s, indent + "  ", v.meas_amps);
    s << indent << "prog_volts: ";
    Printer<float>::stream(s, indent + "  ", v.prog_volts);
    s << indent << "prog_amps: ";
    Printer<float>::stream(s, indent + "  ", v.prog_amps);
    s << indent << "output_enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.output_enable);
    s << indent << "status_good: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status_good);
    s << indent << "frontpanel_locked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.frontpanel_locked);
    s << indent << "fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fault);
    s << indent << "constant_voltage: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.constant_voltage);
    s << indent << "constant_current: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.constant_current);
    s << indent << "status_msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status_msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_HOTEL_MSGS_MESSAGE_POWERSUPPLY_H
