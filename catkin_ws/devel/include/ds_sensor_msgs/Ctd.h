// Generated by gencpp from file ds_sensor_msgs/Ctd.msg
// DO NOT EDIT!


#ifndef DS_SENSOR_MSGS_MESSAGE_CTD_H
#define DS_SENSOR_MSGS_MESSAGE_CTD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ds_core_msgs/DsHeader.h>

namespace ds_sensor_msgs
{
template <class ContainerAllocator>
struct Ctd_
{
  typedef Ctd_<ContainerAllocator> Type;

  Ctd_()
    : header()
    , ds_header()
    , conductivity(0.0)
    , conductivity_covar(0.0)
    , temperature(0.0)
    , temperature_covar(0.0)
    , pressure(0.0)
    , pressure_covar(0.0)
    , salinity(0.0)
    , salinity_covar(0.0)
    , sound_speed(0.0)
    , sound_speed_covar(0.0)  {
    }
  Ctd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ds_header(_alloc)
    , conductivity(0.0)
    , conductivity_covar(0.0)
    , temperature(0.0)
    , temperature_covar(0.0)
    , pressure(0.0)
    , pressure_covar(0.0)
    , salinity(0.0)
    , salinity_covar(0.0)
    , sound_speed(0.0)
    , sound_speed_covar(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::ds_core_msgs::DsHeader_<ContainerAllocator>  _ds_header_type;
  _ds_header_type ds_header;

   typedef double _conductivity_type;
  _conductivity_type conductivity;

   typedef double _conductivity_covar_type;
  _conductivity_covar_type conductivity_covar;

   typedef double _temperature_type;
  _temperature_type temperature;

   typedef double _temperature_covar_type;
  _temperature_covar_type temperature_covar;

   typedef double _pressure_type;
  _pressure_type pressure;

   typedef double _pressure_covar_type;
  _pressure_covar_type pressure_covar;

   typedef double _salinity_type;
  _salinity_type salinity;

   typedef double _salinity_covar_type;
  _salinity_covar_type salinity_covar;

   typedef double _sound_speed_type;
  _sound_speed_type sound_speed;

   typedef double _sound_speed_covar_type;
  _sound_speed_covar_type sound_speed_covar;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CTD_NO_DATA)
  #undef CTD_NO_DATA
#endif


  static const double CTD_NO_DATA;

  typedef boost::shared_ptr< ::ds_sensor_msgs::Ctd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_sensor_msgs::Ctd_<ContainerAllocator> const> ConstPtr;

}; // struct Ctd_

typedef ::ds_sensor_msgs::Ctd_<std::allocator<void> > Ctd;

typedef boost::shared_ptr< ::ds_sensor_msgs::Ctd > CtdPtr;
typedef boost::shared_ptr< ::ds_sensor_msgs::Ctd const> CtdConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const double
      Ctd_<ContainerAllocator>::CTD_NO_DATA =
        
          -9999.0
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_sensor_msgs::Ctd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_sensor_msgs::Ctd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_sensor_msgs::Ctd_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::Ctd_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ds_header == rhs.ds_header &&
    lhs.conductivity == rhs.conductivity &&
    lhs.conductivity_covar == rhs.conductivity_covar &&
    lhs.temperature == rhs.temperature &&
    lhs.temperature_covar == rhs.temperature_covar &&
    lhs.pressure == rhs.pressure &&
    lhs.pressure_covar == rhs.pressure_covar &&
    lhs.salinity == rhs.salinity &&
    lhs.salinity_covar == rhs.salinity_covar &&
    lhs.sound_speed == rhs.sound_speed &&
    lhs.sound_speed_covar == rhs.sound_speed_covar;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_sensor_msgs::Ctd_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::Ctd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::Ctd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::Ctd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::Ctd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::Ctd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::Ctd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::Ctd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_sensor_msgs::Ctd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "591691334c96a078caf807c2ffc0c3df";
  }

  static const char* value(const ::ds_sensor_msgs::Ctd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x591691334c96a078ULL;
  static const uint64_t static_value2 = 0xcaf807c2ffc0c3dfULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_sensor_msgs::Ctd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_sensor_msgs/Ctd";
  }

  static const char* value(const ::ds_sensor_msgs::Ctd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_sensor_msgs::Ctd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 CTD_NO_DATA=-9999.0\n"
"\n"
"# The standard 2-part DsHeader block\n"
"# This allows both a standard ROS header and DS-specific header blocks\n"
"# See HEADERS.md in ds_core_msgs for details\n"
"std_msgs/Header header\n"
"ds_core_msgs/DsHeader ds_header\n"
"\n"
"# Conductivity in S/m\n"
"float64 conductivity\n"
"float64 conductivity_covar\n"
"\n"
"# Temperature in ITS-90 deg C\n"
"float64 temperature\n"
"float64 temperature_covar\n"
"\n"
"# Pressure, in Decibars\n"
"# Pressure-Depth conversions using Fofonoff are emitted using\n"
"# DepthPressure.msg messages\n"
"float64 pressure\n"
"float64 pressure_covar\n"
"\n"
"# Salinity, in psu\n"
"float64 salinity\n"
"float64 salinity_covar\n"
"\n"
"# Speed of Sound\n"
"float64 sound_speed\n"
"float64 sound_speed_covar\n"
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

  static const char* value(const ::ds_sensor_msgs::Ctd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_sensor_msgs::Ctd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ds_header);
      stream.next(m.conductivity);
      stream.next(m.conductivity_covar);
      stream.next(m.temperature);
      stream.next(m.temperature_covar);
      stream.next(m.pressure);
      stream.next(m.pressure_covar);
      stream.next(m.salinity);
      stream.next(m.salinity_covar);
      stream.next(m.sound_speed);
      stream.next(m.sound_speed_covar);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Ctd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_sensor_msgs::Ctd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_sensor_msgs::Ctd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ds_header: ";
    s << std::endl;
    Printer< ::ds_core_msgs::DsHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.ds_header);
    s << indent << "conductivity: ";
    Printer<double>::stream(s, indent + "  ", v.conductivity);
    s << indent << "conductivity_covar: ";
    Printer<double>::stream(s, indent + "  ", v.conductivity_covar);
    s << indent << "temperature: ";
    Printer<double>::stream(s, indent + "  ", v.temperature);
    s << indent << "temperature_covar: ";
    Printer<double>::stream(s, indent + "  ", v.temperature_covar);
    s << indent << "pressure: ";
    Printer<double>::stream(s, indent + "  ", v.pressure);
    s << indent << "pressure_covar: ";
    Printer<double>::stream(s, indent + "  ", v.pressure_covar);
    s << indent << "salinity: ";
    Printer<double>::stream(s, indent + "  ", v.salinity);
    s << indent << "salinity_covar: ";
    Printer<double>::stream(s, indent + "  ", v.salinity_covar);
    s << indent << "sound_speed: ";
    Printer<double>::stream(s, indent + "  ", v.sound_speed);
    s << indent << "sound_speed_covar: ";
    Printer<double>::stream(s, indent + "  ", v.sound_speed_covar);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_SENSOR_MSGS_MESSAGE_CTD_H
