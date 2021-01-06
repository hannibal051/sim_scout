// Generated by gencpp from file sick_scan/RadarPreHeaderDeviceBlock.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_RADARPREHEADERDEVICEBLOCK_H
#define SICK_SCAN_MESSAGE_RADARPREHEADERDEVICEBLOCK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_scan
{
template <class ContainerAllocator>
struct RadarPreHeaderDeviceBlock_
{
  typedef RadarPreHeaderDeviceBlock_<ContainerAllocator> Type;

  RadarPreHeaderDeviceBlock_()
    : uiIdent(0)
    , udiSerialNo(0)
    , bDeviceError(false)
    , bContaminationWarning(false)
    , bContaminationError(false)  {
    }
  RadarPreHeaderDeviceBlock_(const ContainerAllocator& _alloc)
    : uiIdent(0)
    , udiSerialNo(0)
    , bDeviceError(false)
    , bContaminationWarning(false)
    , bContaminationError(false)  {
  (void)_alloc;
    }



   typedef uint32_t _uiIdent_type;
  _uiIdent_type uiIdent;

   typedef uint32_t _udiSerialNo_type;
  _udiSerialNo_type udiSerialNo;

   typedef uint8_t _bDeviceError_type;
  _bDeviceError_type bDeviceError;

   typedef uint8_t _bContaminationWarning_type;
  _bContaminationWarning_type bContaminationWarning;

   typedef uint8_t _bContaminationError_type;
  _bContaminationError_type bContaminationError;





  typedef boost::shared_ptr< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> const> ConstPtr;

}; // struct RadarPreHeaderDeviceBlock_

typedef ::sick_scan::RadarPreHeaderDeviceBlock_<std::allocator<void> > RadarPreHeaderDeviceBlock;

typedef boost::shared_ptr< ::sick_scan::RadarPreHeaderDeviceBlock > RadarPreHeaderDeviceBlockPtr;
typedef boost::shared_ptr< ::sick_scan::RadarPreHeaderDeviceBlock const> RadarPreHeaderDeviceBlockConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sick_scan

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sick_scan': ['/home/yyw/sim_scout_ws/src/sick_scan/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c1dc3fa07dfb079c66dfaa39765f5a0";
  }

  static const char* value(const ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c1dc3fa07dfb079ULL;
  static const uint64_t static_value2 = 0xc66dfaa39765f5a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/RadarPreHeaderDeviceBlock";
  }

  static const char* value(const ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n\
#\n\
#\n\
#\n\
\n\
# Logical number of the device\"\n\
uint32 uiIdent\n\
# Serial number of the device\n\
uint32 udiSerialNo\n\
# State of the device\n\
bool bDeviceError\n\
# Contamination Warning\n\
bool bContaminationWarning\n\
# Contamination Error\n\
bool bContaminationError\n\
";
  }

  static const char* value(const ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uiIdent);
      stream.next(m.udiSerialNo);
      stream.next(m.bDeviceError);
      stream.next(m.bContaminationWarning);
      stream.next(m.bContaminationError);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RadarPreHeaderDeviceBlock_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan::RadarPreHeaderDeviceBlock_<ContainerAllocator>& v)
  {
    s << indent << "uiIdent: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.uiIdent);
    s << indent << "udiSerialNo: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.udiSerialNo);
    s << indent << "bDeviceError: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bDeviceError);
    s << indent << "bContaminationWarning: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bContaminationWarning);
    s << indent << "bContaminationError: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bContaminationError);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SICK_SCAN_MESSAGE_RADARPREHEADERDEVICEBLOCK_H
