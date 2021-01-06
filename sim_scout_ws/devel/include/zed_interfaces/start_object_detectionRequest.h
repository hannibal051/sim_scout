// Generated by gencpp from file zed_interfaces/start_object_detectionRequest.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_START_OBJECT_DETECTIONREQUEST_H
#define ZED_INTERFACES_MESSAGE_START_OBJECT_DETECTIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace zed_interfaces
{
template <class ContainerAllocator>
struct start_object_detectionRequest_
{
  typedef start_object_detectionRequest_<ContainerAllocator> Type;

  start_object_detectionRequest_()
    : confidence(0.0)
    , tracking(false)
    , people(false)
    , vehicles(false)  {
    }
  start_object_detectionRequest_(const ContainerAllocator& _alloc)
    : confidence(0.0)
    , tracking(false)
    , people(false)
    , vehicles(false)  {
  (void)_alloc;
    }



   typedef float _confidence_type;
  _confidence_type confidence;

   typedef uint8_t _tracking_type;
  _tracking_type tracking;

   typedef uint8_t _people_type;
  _people_type people;

   typedef uint8_t _vehicles_type;
  _vehicles_type vehicles;





  typedef boost::shared_ptr< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct start_object_detectionRequest_

typedef ::zed_interfaces::start_object_detectionRequest_<std::allocator<void> > start_object_detectionRequest;

typedef boost::shared_ptr< ::zed_interfaces::start_object_detectionRequest > start_object_detectionRequestPtr;
typedef boost::shared_ptr< ::zed_interfaces::start_object_detectionRequest const> start_object_detectionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace zed_interfaces

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'zed_interfaces': ['/home/yyw/sim_scout_ws/src/zed-ros-wrapper/zed_interfaces/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d390c3c6cd39e296e71a58be92b33ec6";
  }

  static const char* value(const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd390c3c6cd39e296ULL;
  static const uint64_t static_value2 = 0xe71a58be92b33ec6ULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_interfaces/start_object_detectionRequest";
  }

  static const char* value(const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
float32 confidence\n\
\n\
\n\
bool tracking\n\
\n\
\n\
bool people\n\
\n\
\n\
bool vehicles\n\
\n\
\n\
\n\
";
  }

  static const char* value(const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.confidence);
      stream.next(m.tracking);
      stream.next(m.people);
      stream.next(m.vehicles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct start_object_detectionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator>& v)
  {
    s << indent << "confidence: ";
    Printer<float>::stream(s, indent + "  ", v.confidence);
    s << indent << "tracking: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tracking);
    s << indent << "people: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.people);
    s << indent << "vehicles: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vehicles);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_START_OBJECT_DETECTIONREQUEST_H
