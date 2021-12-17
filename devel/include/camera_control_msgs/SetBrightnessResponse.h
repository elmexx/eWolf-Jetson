// Generated by gencpp from file camera_control_msgs/SetBrightnessResponse.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_SETBRIGHTNESSRESPONSE_H
#define CAMERA_CONTROL_MSGS_MESSAGE_SETBRIGHTNESSRESPONSE_H


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
struct SetBrightnessResponse_
{
  typedef SetBrightnessResponse_<ContainerAllocator> Type;

  SetBrightnessResponse_()
    : reached_brightness(0)
    , reached_exposure_time(0.0)
    , reached_gain_value(0.0)
    , success(false)  {
    }
  SetBrightnessResponse_(const ContainerAllocator& _alloc)
    : reached_brightness(0)
    , reached_exposure_time(0.0)
    , reached_gain_value(0.0)
    , success(false)  {
  (void)_alloc;
    }



   typedef int32_t _reached_brightness_type;
  _reached_brightness_type reached_brightness;

   typedef float _reached_exposure_time_type;
  _reached_exposure_time_type reached_exposure_time;

   typedef float _reached_gain_value_type;
  _reached_gain_value_type reached_gain_value;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetBrightnessResponse_

typedef ::camera_control_msgs::SetBrightnessResponse_<std::allocator<void> > SetBrightnessResponse;

typedef boost::shared_ptr< ::camera_control_msgs::SetBrightnessResponse > SetBrightnessResponsePtr;
typedef boost::shared_ptr< ::camera_control_msgs::SetBrightnessResponse const> SetBrightnessResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator2> & rhs)
{
  return lhs.reached_brightness == rhs.reached_brightness &&
    lhs.reached_exposure_time == rhs.reached_exposure_time &&
    lhs.reached_gain_value == rhs.reached_gain_value &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace camera_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "62110aff39d46cf6a4ab77f09896582b";
  }

  static const char* value(const ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x62110aff39d46cf6ULL;
  static const uint64_t static_value2 = 0xa4ab77f09896582bULL;
};

template<class ContainerAllocator>
struct DataType< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "camera_control_msgs/SetBrightnessResponse";
  }

  static const char* value(const ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# Exact match can not always be reached\n"
"int32 reached_brightness\n"
"float32 reached_exposure_time\n"
"float32 reached_gain_value\n"
"\n"
"bool success\n"
"\n"
;
  }

  static const char* value(const ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.reached_brightness);
      stream.next(m.reached_exposure_time);
      stream.next(m.reached_gain_value);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetBrightnessResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::camera_control_msgs::SetBrightnessResponse_<ContainerAllocator>& v)
  {
    s << indent << "reached_brightness: ";
    Printer<int32_t>::stream(s, indent + "  ", v.reached_brightness);
    s << indent << "reached_exposure_time: ";
    Printer<float>::stream(s, indent + "  ", v.reached_exposure_time);
    s << indent << "reached_gain_value: ";
    Printer<float>::stream(s, indent + "  ", v.reached_gain_value);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_SETBRIGHTNESSRESPONSE_H