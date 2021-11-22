// Generated by gencpp from file ds_sensor_msgs/UbloxSignal.msg
// DO NOT EDIT!


#ifndef DS_SENSOR_MSGS_MESSAGE_UBLOXSIGNAL_H
#define DS_SENSOR_MSGS_MESSAGE_UBLOXSIGNAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ds_sensor_msgs
{
template <class ContainerAllocator>
struct UbloxSignal_
{
  typedef UbloxSignal_<ContainerAllocator> Type;

  UbloxSignal_()
    : gnss_id()
    , sat_id()
    , sig_id()
    , carrier_noise(0.0)
    , pseudorange_residual(0.0)
    , quality_indicator(0)
    , correction_source(0)
    , ionosphere_model(0)
    , health(0)
    , pseudorange_smoothed(false)
    , pseudorange_used(false)
    , carrier_range_used(false)
    , doppler_used(false)
    , pseudorange_corrections_applied(false)
    , carrier_range_corrections_applied(false)
    , doppler_corrections_applied(false)  {
    }
  UbloxSignal_(const ContainerAllocator& _alloc)
    : gnss_id(_alloc)
    , sat_id(_alloc)
    , sig_id(_alloc)
    , carrier_noise(0.0)
    , pseudorange_residual(0.0)
    , quality_indicator(0)
    , correction_source(0)
    , ionosphere_model(0)
    , health(0)
    , pseudorange_smoothed(false)
    , pseudorange_used(false)
    , carrier_range_used(false)
    , doppler_used(false)
    , pseudorange_corrections_applied(false)
    , carrier_range_corrections_applied(false)
    , doppler_corrections_applied(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _gnss_id_type;
  _gnss_id_type gnss_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sat_id_type;
  _sat_id_type sat_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sig_id_type;
  _sig_id_type sig_id;

   typedef float _carrier_noise_type;
  _carrier_noise_type carrier_noise;

   typedef float _pseudorange_residual_type;
  _pseudorange_residual_type pseudorange_residual;

   typedef uint16_t _quality_indicator_type;
  _quality_indicator_type quality_indicator;

   typedef uint16_t _correction_source_type;
  _correction_source_type correction_source;

   typedef uint16_t _ionosphere_model_type;
  _ionosphere_model_type ionosphere_model;

   typedef uint16_t _health_type;
  _health_type health;

   typedef uint8_t _pseudorange_smoothed_type;
  _pseudorange_smoothed_type pseudorange_smoothed;

   typedef uint8_t _pseudorange_used_type;
  _pseudorange_used_type pseudorange_used;

   typedef uint8_t _carrier_range_used_type;
  _carrier_range_used_type carrier_range_used;

   typedef uint8_t _doppler_used_type;
  _doppler_used_type doppler_used;

   typedef uint8_t _pseudorange_corrections_applied_type;
  _pseudorange_corrections_applied_type pseudorange_corrections_applied;

   typedef uint8_t _carrier_range_corrections_applied_type;
  _carrier_range_corrections_applied_type carrier_range_corrections_applied;

   typedef uint8_t _doppler_corrections_applied_type;
  _doppler_corrections_applied_type doppler_corrections_applied;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(QUALITY_NOSIGNAL)
  #undef QUALITY_NOSIGNAL
#endif
#if defined(_WIN32) && defined(QUALITY_SEARCHING)
  #undef QUALITY_SEARCHING
#endif
#if defined(_WIN32) && defined(QUALITY_ACQUIRED)
  #undef QUALITY_ACQUIRED
#endif
#if defined(_WIN32) && defined(QUALITY_UNUSABLE)
  #undef QUALITY_UNUSABLE
#endif
#if defined(_WIN32) && defined(QUALITY_CODELOCKED)
  #undef QUALITY_CODELOCKED
#endif
#if defined(_WIN32) && defined(QUALITY_CODECARRIERTIME_LOCKED_5)
  #undef QUALITY_CODECARRIERTIME_LOCKED_5
#endif
#if defined(_WIN32) && defined(QUALITY_CODECARRIERTIME_LOCKED_6)
  #undef QUALITY_CODECARRIERTIME_LOCKED_6
#endif
#if defined(_WIN32) && defined(QUALITY_CODECARRIERTIME_LOCKED_7)
  #undef QUALITY_CODECARRIERTIME_LOCKED_7
#endif
#if defined(_WIN32) && defined(CORRECTIONS_NONE)
  #undef CORRECTIONS_NONE
#endif
#if defined(_WIN32) && defined(CORRECTIONS_SBAS)
  #undef CORRECTIONS_SBAS
#endif
#if defined(_WIN32) && defined(CORRECTIONS_BEIDOU)
  #undef CORRECTIONS_BEIDOU
#endif
#if defined(_WIN32) && defined(CORRECTIONS_RTCM2)
  #undef CORRECTIONS_RTCM2
#endif
#if defined(_WIN32) && defined(CORRECTIONS_RTCM3OSR)
  #undef CORRECTIONS_RTCM3OSR
#endif
#if defined(_WIN32) && defined(CORRECTIONS_RTCM3SSR)
  #undef CORRECTIONS_RTCM3SSR
#endif
#if defined(_WIN32) && defined(CORRECTIONS_QZSSSLAS)
  #undef CORRECTIONS_QZSSSLAS
#endif
#if defined(_WIN32) && defined(IONOMODEL_NONE)
  #undef IONOMODEL_NONE
#endif
#if defined(_WIN32) && defined(IONOMODEL_KLOBUCHARGPS)
  #undef IONOMODEL_KLOBUCHARGPS
#endif
#if defined(_WIN32) && defined(IONOMODEL_SBAS)
  #undef IONOMODEL_SBAS
#endif
#if defined(_WIN32) && defined(IONOMODEL_KLOBUCHARBEIDOU)
  #undef IONOMODEL_KLOBUCHARBEIDOU
#endif
#if defined(_WIN32) && defined(HEALTH_UNKNOWN)
  #undef HEALTH_UNKNOWN
#endif
#if defined(_WIN32) && defined(HEALTH_HEALTHY)
  #undef HEALTH_HEALTHY
#endif
#if defined(_WIN32) && defined(HEALTH_UNHEALTH)
  #undef HEALTH_UNHEALTH
#endif

  enum {
    QUALITY_NOSIGNAL = 0u,
    QUALITY_SEARCHING = 1u,
    QUALITY_ACQUIRED = 2u,
    QUALITY_UNUSABLE = 3u,
    QUALITY_CODELOCKED = 4u,
    QUALITY_CODECARRIERTIME_LOCKED_5 = 5u,
    QUALITY_CODECARRIERTIME_LOCKED_6 = 6u,
    QUALITY_CODECARRIERTIME_LOCKED_7 = 7u,
    CORRECTIONS_NONE = 0u,
    CORRECTIONS_SBAS = 1u,
    CORRECTIONS_BEIDOU = 2u,
    CORRECTIONS_RTCM2 = 3u,
    CORRECTIONS_RTCM3OSR = 4u,
    CORRECTIONS_RTCM3SSR = 5u,
    CORRECTIONS_QZSSSLAS = 6u,
    IONOMODEL_NONE = 0u,
    IONOMODEL_KLOBUCHARGPS = 1u,
    IONOMODEL_SBAS = 2u,
    IONOMODEL_KLOBUCHARBEIDOU = 3u,
    HEALTH_UNKNOWN = 0u,
    HEALTH_HEALTHY = 1u,
    HEALTH_UNHEALTH = 2u,
  };


  typedef boost::shared_ptr< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> const> ConstPtr;

}; // struct UbloxSignal_

typedef ::ds_sensor_msgs::UbloxSignal_<std::allocator<void> > UbloxSignal;

typedef boost::shared_ptr< ::ds_sensor_msgs::UbloxSignal > UbloxSignalPtr;
typedef boost::shared_ptr< ::ds_sensor_msgs::UbloxSignal const> UbloxSignalConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator2> & rhs)
{
  return lhs.gnss_id == rhs.gnss_id &&
    lhs.sat_id == rhs.sat_id &&
    lhs.sig_id == rhs.sig_id &&
    lhs.carrier_noise == rhs.carrier_noise &&
    lhs.pseudorange_residual == rhs.pseudorange_residual &&
    lhs.quality_indicator == rhs.quality_indicator &&
    lhs.correction_source == rhs.correction_source &&
    lhs.ionosphere_model == rhs.ionosphere_model &&
    lhs.health == rhs.health &&
    lhs.pseudorange_smoothed == rhs.pseudorange_smoothed &&
    lhs.pseudorange_used == rhs.pseudorange_used &&
    lhs.carrier_range_used == rhs.carrier_range_used &&
    lhs.doppler_used == rhs.doppler_used &&
    lhs.pseudorange_corrections_applied == rhs.pseudorange_corrections_applied &&
    lhs.carrier_range_corrections_applied == rhs.carrier_range_corrections_applied &&
    lhs.doppler_corrections_applied == rhs.doppler_corrections_applied;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f298e93eca6c7972a50754521ac02e7";
  }

  static const char* value(const ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f298e93eca6c797ULL;
  static const uint64_t static_value2 = 0x2a50754521ac02e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_sensor_msgs/UbloxSignal";
  }

  static const char* value(const ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"# A string identifying which GNSS system is in use (e.g., GPS, BeiDou, GLONASS, etc)\n"
"string gnss_id\n"
"\n"
"# The ID of the specific satellite that broadcast the signal.  Includes\n"
"# a letter indicating the service.  Example: GPS satellite #4 would be G4.\n"
"# IDs:\n"
"# G: GPS (US system)\n"
"# S: SBAS (Satellite Based Augmentation System, so WAAS, EGNOS, SDCM, GAGAN, etc)\n"
"# E: Galileo (European system)\n"
"# B: BeiDou (Chinese system)\n"
"# Q: QZSS (Japanese SBAS that also transmits GPS-style timing signals)\n"
"# R: GLONASS (Russian system)\n"
"string sat_id\n"
"\n"
"# Signal ID (each satellite can broadcast multiple signals)\n"
"string sig_id\n"
"\n"
"# Carrier-to-noise-density ratio (dBHz)\n"
"float32 carrier_noise\n"
"\n"
"# Pseudorange residual, in meters\n"
"float32 pseudorange_residual\n"
"\n"
"# Signal quality\n"
"uint16 quality_indicator\n"
"uint16 QUALITY_NOSIGNAL = 0\n"
"uint16 QUALITY_SEARCHING = 1\n"
"uint16 QUALITY_ACQUIRED = 2\n"
"uint16 QUALITY_UNUSABLE = 3\n"
"uint16 QUALITY_CODELOCKED = 4\n"
"uint16 QUALITY_CODECARRIERTIME_LOCKED_5 = 5\n"
"uint16 QUALITY_CODECARRIERTIME_LOCKED_6 = 6\n"
"uint16 QUALITY_CODECARRIERTIME_LOCKED_7 = 7\n"
"\n"
"# Correction Source\n"
"uint16 correction_source\n"
"uint16 CORRECTIONS_NONE = 0\n"
"uint16 CORRECTIONS_SBAS = 1\n"
"uint16 CORRECTIONS_BEIDOU = 2\n"
"uint16 CORRECTIONS_RTCM2 = 3\n"
"uint16 CORRECTIONS_RTCM3OSR = 4\n"
"uint16 CORRECTIONS_RTCM3SSR = 5\n"
"uint16 CORRECTIONS_QZSSSLAS = 6\n"
"\n"
"# Ionosphere Model Used\n"
"uint16 ionosphere_model\n"
"uint16 IONOMODEL_NONE = 0\n"
"uint16 IONOMODEL_KLOBUCHARGPS = 1\n"
"uint16 IONOMODEL_SBAS = 2\n"
"uint16 IONOMODEL_KLOBUCHARBEIDOU = 3\n"
"\n"
"# flags\n"
"uint16 health\n"
"uint16 HEALTH_UNKNOWN = 0\n"
"uint16 HEALTH_HEALTHY = 1\n"
"uint16 HEALTH_UNHEALTH = 2\n"
"\n"
"bool pseudorange_smoothed\n"
"bool pseudorange_used\n"
"bool carrier_range_used\n"
"bool doppler_used\n"
"bool pseudorange_corrections_applied\n"
"bool carrier_range_corrections_applied\n"
"bool doppler_corrections_applied\n"
;
  }

  static const char* value(const ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gnss_id);
      stream.next(m.sat_id);
      stream.next(m.sig_id);
      stream.next(m.carrier_noise);
      stream.next(m.pseudorange_residual);
      stream.next(m.quality_indicator);
      stream.next(m.correction_source);
      stream.next(m.ionosphere_model);
      stream.next(m.health);
      stream.next(m.pseudorange_smoothed);
      stream.next(m.pseudorange_used);
      stream.next(m.carrier_range_used);
      stream.next(m.doppler_used);
      stream.next(m.pseudorange_corrections_applied);
      stream.next(m.carrier_range_corrections_applied);
      stream.next(m.doppler_corrections_applied);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UbloxSignal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_sensor_msgs::UbloxSignal_<ContainerAllocator>& v)
  {
    s << indent << "gnss_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.gnss_id);
    s << indent << "sat_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sat_id);
    s << indent << "sig_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sig_id);
    s << indent << "carrier_noise: ";
    Printer<float>::stream(s, indent + "  ", v.carrier_noise);
    s << indent << "pseudorange_residual: ";
    Printer<float>::stream(s, indent + "  ", v.pseudorange_residual);
    s << indent << "quality_indicator: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.quality_indicator);
    s << indent << "correction_source: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.correction_source);
    s << indent << "ionosphere_model: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ionosphere_model);
    s << indent << "health: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.health);
    s << indent << "pseudorange_smoothed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pseudorange_smoothed);
    s << indent << "pseudorange_used: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pseudorange_used);
    s << indent << "carrier_range_used: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.carrier_range_used);
    s << indent << "doppler_used: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.doppler_used);
    s << indent << "pseudorange_corrections_applied: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pseudorange_corrections_applied);
    s << indent << "carrier_range_corrections_applied: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.carrier_range_corrections_applied);
    s << indent << "doppler_corrections_applied: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.doppler_corrections_applied);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_SENSOR_MSGS_MESSAGE_UBLOXSIGNAL_H
