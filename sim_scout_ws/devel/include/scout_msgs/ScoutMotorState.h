// Generated by gencpp from file scout_msgs/ScoutMotorState.msg
// DO NOT EDIT!


#ifndef SCOUT_MSGS_MESSAGE_SCOUTMOTORSTATE_H
#define SCOUT_MSGS_MESSAGE_SCOUTMOTORSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace scout_msgs
{
template <class ContainerAllocator>
struct ScoutMotorState_
{
  typedef ScoutMotorState_<ContainerAllocator> Type;

  ScoutMotorState_()
    : current(0.0)
    , rpm(0.0)
    , temperature(0.0)  {
    }
  ScoutMotorState_(const ContainerAllocator& _alloc)
    : current(0.0)
    , rpm(0.0)
    , temperature(0.0)  {
  (void)_alloc;
    }



   typedef double _current_type;
  _current_type current;

   typedef double _rpm_type;
  _rpm_type rpm;

   typedef double _temperature_type;
  _temperature_type temperature;





  typedef boost::shared_ptr< ::scout_msgs::ScoutMotorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scout_msgs::ScoutMotorState_<ContainerAllocator> const> ConstPtr;

}; // struct ScoutMotorState_

typedef ::scout_msgs::ScoutMotorState_<std::allocator<void> > ScoutMotorState;

typedef boost::shared_ptr< ::scout_msgs::ScoutMotorState > ScoutMotorStatePtr;
typedef boost::shared_ptr< ::scout_msgs::ScoutMotorState const> ScoutMotorStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scout_msgs::ScoutMotorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scout_msgs::ScoutMotorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scout_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'scout_msgs': ['/home/yyw/sim_scout_ws/src/scout_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scout_msgs::ScoutMotorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scout_msgs::ScoutMotorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scout_msgs::ScoutMotorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scout_msgs::ScoutMotorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scout_msgs::ScoutMotorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scout_msgs::ScoutMotorState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scout_msgs::ScoutMotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9380628b50ebdc90ce46d4147360680d";
  }

  static const char* value(const ::scout_msgs::ScoutMotorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9380628b50ebdc90ULL;
  static const uint64_t static_value2 = 0xce46d4147360680dULL;
};

template<class ContainerAllocator>
struct DataType< ::scout_msgs::ScoutMotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scout_msgs/ScoutMotorState";
  }

  static const char* value(const ::scout_msgs::ScoutMotorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scout_msgs::ScoutMotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 current\n\
float64 rpm\n\
float64 temperature\n\
";
  }

  static const char* value(const ::scout_msgs::ScoutMotorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scout_msgs::ScoutMotorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.current);
      stream.next(m.rpm);
      stream.next(m.temperature);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ScoutMotorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scout_msgs::ScoutMotorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scout_msgs::ScoutMotorState_<ContainerAllocator>& v)
  {
    s << indent << "current: ";
    Printer<double>::stream(s, indent + "  ", v.current);
    s << indent << "rpm: ";
    Printer<double>::stream(s, indent + "  ", v.rpm);
    s << indent << "temperature: ";
    Printer<double>::stream(s, indent + "  ", v.temperature);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCOUT_MSGS_MESSAGE_SCOUTMOTORSTATE_H
