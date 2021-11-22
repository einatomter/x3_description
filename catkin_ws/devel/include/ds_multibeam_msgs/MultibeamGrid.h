// Generated by gencpp from file ds_multibeam_msgs/MultibeamGrid.msg
// DO NOT EDIT!


#ifndef DS_MULTIBEAM_MSGS_MESSAGE_MULTIBEAMGRID_H
#define DS_MULTIBEAM_MSGS_MESSAGE_MULTIBEAMGRID_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace ds_multibeam_msgs
{
template <class ContainerAllocator>
struct MultibeamGrid_
{
  typedef MultibeamGrid_<ContainerAllocator> Type;

  MultibeamGrid_()
    : header()
    , northing_max(0.0)
    , northing_min(0.0)
    , easting_max(0.0)
    , easting_min(0.0)
    , depth_max(0.0)
    , depth_min(0.0)
    , cells_easting(0)
    , cells_northing(0)
    , nodata_value(0.0)
    , depth_offset(0.0)
    , depth_data()  {
    }
  MultibeamGrid_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , northing_max(0.0)
    , northing_min(0.0)
    , easting_max(0.0)
    , easting_min(0.0)
    , depth_max(0.0)
    , depth_min(0.0)
    , cells_easting(0)
    , cells_northing(0)
    , nodata_value(0.0)
    , depth_offset(0.0)
    , depth_data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _northing_max_type;
  _northing_max_type northing_max;

   typedef double _northing_min_type;
  _northing_min_type northing_min;

   typedef double _easting_max_type;
  _easting_max_type easting_max;

   typedef double _easting_min_type;
  _easting_min_type easting_min;

   typedef double _depth_max_type;
  _depth_max_type depth_max;

   typedef double _depth_min_type;
  _depth_min_type depth_min;

   typedef int32_t _cells_easting_type;
  _cells_easting_type cells_easting;

   typedef int32_t _cells_northing_type;
  _cells_northing_type cells_northing;

   typedef float _nodata_value_type;
  _nodata_value_type nodata_value;

   typedef double _depth_offset_type;
  _depth_offset_type depth_offset;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _depth_data_type;
  _depth_data_type depth_data;





  typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> const> ConstPtr;

}; // struct MultibeamGrid_

typedef ::ds_multibeam_msgs::MultibeamGrid_<std::allocator<void> > MultibeamGrid;

typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamGrid > MultibeamGridPtr;
typedef boost::shared_ptr< ::ds_multibeam_msgs::MultibeamGrid const> MultibeamGridConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator1> & lhs, const ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.northing_max == rhs.northing_max &&
    lhs.northing_min == rhs.northing_min &&
    lhs.easting_max == rhs.easting_max &&
    lhs.easting_min == rhs.easting_min &&
    lhs.depth_max == rhs.depth_max &&
    lhs.depth_min == rhs.depth_min &&
    lhs.cells_easting == rhs.cells_easting &&
    lhs.cells_northing == rhs.cells_northing &&
    lhs.nodata_value == rhs.nodata_value &&
    lhs.depth_offset == rhs.depth_offset &&
    lhs.depth_data == rhs.depth_data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator1> & lhs, const ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ds_multibeam_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4465e52f2084cd282cf9e8b7367dfa65";
  }

  static const char* value(const ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4465e52f2084cd28ULL;
  static const uint64_t static_value2 = 0x2cf9e8b7367dfa65ULL;
};

template<class ContainerAllocator>
struct DataType< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ds_multibeam_msgs/MultibeamGrid";
  }

  static const char* value(const ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Just use a simple standard header\n"
"std_msgs/Header header\n"
"\n"
"# To ease processing, we need to specify our bounds\n"
"float64 northing_max\n"
"float64 northing_min\n"
"\n"
"float64 easting_max\n"
"float64 easting_min\n"
"\n"
"# + depth is down, so bigger numbers are lower\n"
"float64 depth_max\n"
"float64 depth_min\n"
"\n"
"# We also need the dimensions of the final map\n"
"int32 cells_easting\n"
"int32 cells_northing\n"
"\n"
"# and a Holiday (No data) value\n"
"float32 nodata_value\n"
"\n"
"# Float32 only has 6-7 digits.  This is only a problem\n"
"# when doing millimeter-precision mapping at 1000+m depth,\n"
"# but that's a thing that sometimes happens.  We define\n"
"# offset fields that let users specify an overall offset.\n"
"float64 depth_offset\n"
"\n"
"# Finally, the actual map data as a row-major array\n"
"# Note that size(depth_data) == cells_easting * cells_northing\n"
"float32[] depth_data\n"
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

  static const char* value(const ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.northing_max);
      stream.next(m.northing_min);
      stream.next(m.easting_max);
      stream.next(m.easting_min);
      stream.next(m.depth_max);
      stream.next(m.depth_min);
      stream.next(m.cells_easting);
      stream.next(m.cells_northing);
      stream.next(m.nodata_value);
      stream.next(m.depth_offset);
      stream.next(m.depth_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MultibeamGrid_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ds_multibeam_msgs::MultibeamGrid_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "northing_max: ";
    Printer<double>::stream(s, indent + "  ", v.northing_max);
    s << indent << "northing_min: ";
    Printer<double>::stream(s, indent + "  ", v.northing_min);
    s << indent << "easting_max: ";
    Printer<double>::stream(s, indent + "  ", v.easting_max);
    s << indent << "easting_min: ";
    Printer<double>::stream(s, indent + "  ", v.easting_min);
    s << indent << "depth_max: ";
    Printer<double>::stream(s, indent + "  ", v.depth_max);
    s << indent << "depth_min: ";
    Printer<double>::stream(s, indent + "  ", v.depth_min);
    s << indent << "cells_easting: ";
    Printer<int32_t>::stream(s, indent + "  ", v.cells_easting);
    s << indent << "cells_northing: ";
    Printer<int32_t>::stream(s, indent + "  ", v.cells_northing);
    s << indent << "nodata_value: ";
    Printer<float>::stream(s, indent + "  ", v.nodata_value);
    s << indent << "depth_offset: ";
    Printer<double>::stream(s, indent + "  ", v.depth_offset);
    s << indent << "depth_data[]" << std::endl;
    for (size_t i = 0; i < v.depth_data.size(); ++i)
    {
      s << indent << "  depth_data[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.depth_data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DS_MULTIBEAM_MSGS_MESSAGE_MULTIBEAMGRID_H
