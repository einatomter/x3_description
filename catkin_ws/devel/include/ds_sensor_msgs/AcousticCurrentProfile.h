// Generated by gencpp from file ds_sensor_msgs/AcousticCurrentProfile.msg
// DO NOT EDIT!


#ifndef DS_SENSOR_MSGS_MESSAGE_ACOUSTICCURRENTPROFILE_H
#define DS_SENSOR_MSGS_MESSAGE_ACOUSTICCURRENTPROFILE_H


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
struct AcousticCurrentProfile_
{
  typedef AcousticCurrentProfile_<ContainerAllocator> Type;

  AcousticCurrentProfile_()
    : cx(0)
    , bp(0)
    , wp(0)
    , wn(0)
    , ws(0)
    , wt(0)
    , wf(0)
    , wa(0)
    , wc(0)
    , we(0)
    , wd(0)
    , wi(0)  {
    }
  AcousticCurrentProfile_(const ContainerAllocator& _alloc)
    : cx(0)
    , bp(0)
    , wp(0)
    , wn(0)
    , ws(0)
    , wt(0)
    , wf(0)
    , wa(0)
    , wc(0)
    , we(0)
    , wd(0)
    , wi(0)  {
  (void)_alloc;
    }



   typedef uint32_t _cx_type;
  _cx_type cx;

   typedef uint32_t _bp_type;
  _bp_type bp;

   typedef uint32_t _wp_type;
  _wp_type wp;

   typedef uint32_t _wn_type;
  _wn_type wn;

   typedef uint32_t _ws_type;
  _ws_type ws;

   typedef uint32_t _wt_type;
  _wt_type wt;

   typedef uint32_t _wf_type;
  _wf_type wf;

   typedef uint32_t _wa_type;
  _wa_type wa;

   typedef uint32_t _wc_type;
  _wc_type wc;

   typedef uint32_t _we_type;
  _we_type we;

   typedef uint32_t _wd_type;
  _wd_type wd;

   typedef uint32_t _wi_type;
  _wi_type wi;





  typedef boost::shared_ptr< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> const> ConstPtr;

}; // struct AcousticCurrentProfile_

typedef ::ds_sensor_msgs::AcousticCurrentProfile_<std::allocator<void> > AcousticCurrentProfile;

typedef boost::shared_ptr< ::ds_sensor_msgs::AcousticCurrentProfile > AcousticCurrentProfilePtr;
typedef boost::shared_ptr< ::ds_sensor_msgs::AcousticCurrentProfile const> AcousticCurrentProfileConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator2> & rhs)
{
  return lhs.cx == rhs.cx &&
    lhs.bp == rhs.bp &&
    lhs.wp == rhs.wp &&
    lhs.wn == rhs.wn &&
    lhs.ws == rhs.ws &&
    lhs.wt == rhs.wt &&
    lhs.wf == rhs.wf &&
    lhs.wa == rhs.wa &&
    lhs.wc == rhs.wc &&
    lhs.we == rhs.we &&
    lhs.wd == rhs.wd &&
    lhs.wi == rhs.wi;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator1> & lhs, const ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_sensor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9b3ef39fd361d69ce05d2da04c704cc3";
  }

  static const char* value(const ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9b3ef39fd361d69cULL;
  static const uint64_t static_value2 = 0xe05d2da04c704cc3ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_sensor_msgs/AcousticCurrentProfile";
  }

  static const char* value(const ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Sub-message of DVL \"DopplerVelocity.msg\"\n"
"\n"
"# low-latency trigger flag\n"
"uint32 cx\n"
"# bottom track pings per ensemble\n"
"uint32 bp\n"
"# water profile pings per ensemble\n"
"uint32 wp\n"
"# number of bins\n"
"uint32 wn\n"
"# bin spaging [cm]\n"
"uint32 ws\n"
"# transmit length [cm]\n"
"uint32 wt\n"
"# blank after transmit [cm]\n"
"uint32 wf\n"
"# false target threshold\n"
"uint32 wa\n"
"# low correlation threshold\n"
"uint32 wc\n"
"# error correlation threshold\n"
"uint32 we\n"
"# data out flags\n"
"uint32 wd\n"
"# clip past bottom flag\n"
"uint32 wi\n"
;
  }

  static const char* value(const ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cx);
      stream.next(m.bp);
      stream.next(m.wp);
      stream.next(m.wn);
      stream.next(m.ws);
      stream.next(m.wt);
      stream.next(m.wf);
      stream.next(m.wa);
      stream.next(m.wc);
      stream.next(m.we);
      stream.next(m.wd);
      stream.next(m.wi);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AcousticCurrentProfile_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_sensor_msgs::AcousticCurrentProfile_<ContainerAllocator>& v)
  {
    s << indent << "cx: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.cx);
    s << indent << "bp: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.bp);
    s << indent << "wp: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.wp);
    s << indent << "wn: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.wn);
    s << indent << "ws: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ws);
    s << indent << "wt: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.wt);
    s << indent << "wf: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.wf);
    s << indent << "wa: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.wa);
    s << indent << "wc: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.wc);
    s << indent << "we: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.we);
    s << indent << "wd: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.wd);
    s << indent << "wi: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.wi);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_SENSOR_MSGS_MESSAGE_ACOUSTICCURRENTPROFILE_H
