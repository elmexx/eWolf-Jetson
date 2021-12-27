// Generated by gencpp from file camera_control_msgs/SetFloatValueRequest.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_SETFLOATVALUEREQUEST_H
#define CAMERA_CONTROL_MSGS_MESSAGE_SETFLOATVALUEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace camera_control_msgs
{
template <class ContainerAllocator>
struct SetFloatValueRequest_
{
  typedef SetFloatValueRequest_<ContainerAllocator> Type;

  SetFloatValueRequest_()
    : value(0.0)  {
    }
  SetFloatValueRequest_(const ContainerAllocator& _alloc)
    : value(0.0)  {
  (void)_alloc;
    }



   typedef float _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetFloatValueRequest_

typedef ::camera_control_msgs::SetFloatValueRequest_<std::allocator<void> > SetFloatValueRequest;

typedef boost::shared_ptr< ::camera_control_msgs::SetFloatValueRequest > SetFloatValueRequestPtr;
typedef boost::shared_ptr< ::camera_control_msgs::SetFloatValueRequest const> SetFloatValueRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace camera_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0aca93dcf6d857f0e5a0dc6be1eaa9fb";
  }

  static const char* value(const ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0aca93dcf6d857f0ULL;
  static const uint64_t static_value2 = 0xe5a0dc6be1eaa9fbULL;
};

template<class ContainerAllocator>
struct DataType< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "camera_control_msgs/SetFloatValueRequest";
  }

  static const char* value(const ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Used by :\n"
"# - set_trigger_delay ROS service. (value = delay in micro sec.).\n"
"# - set_line_debouncer_time ROS service. (value = delay in micro sec.).\n"
"# - set_noise_reduction ROS service. (value = reduction value). \n"
"# - set_sharpness_enhancement ROS service (value = sharpness value). \n"
"\n"
"float32 value 		# value to be setted\n"
;
  }

  static const char* value(const ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetFloatValueRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::camera_control_msgs::SetFloatValueRequest_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_SETFLOATVALUEREQUEST_H
