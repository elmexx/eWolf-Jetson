// Generated by gencpp from file camera_control_msgs/SetExposureRequest.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_SETEXPOSUREREQUEST_H
#define CAMERA_CONTROL_MSGS_MESSAGE_SETEXPOSUREREQUEST_H


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
struct SetExposureRequest_
{
  typedef SetExposureRequest_<ContainerAllocator> Type;

  SetExposureRequest_()
    : target_exposure(0.0)  {
    }
  SetExposureRequest_(const ContainerAllocator& _alloc)
    : target_exposure(0.0)  {
  (void)_alloc;
    }



   typedef float _target_exposure_type;
  _target_exposure_type target_exposure;





  typedef boost::shared_ptr< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetExposureRequest_

typedef ::camera_control_msgs::SetExposureRequest_<std::allocator<void> > SetExposureRequest;

typedef boost::shared_ptr< ::camera_control_msgs::SetExposureRequest > SetExposureRequestPtr;
typedef boost::shared_ptr< ::camera_control_msgs::SetExposureRequest const> SetExposureRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::camera_control_msgs::SetExposureRequest_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetExposureRequest_<ContainerAllocator2> & rhs)
{
  return lhs.target_exposure == rhs.target_exposure;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::camera_control_msgs::SetExposureRequest_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetExposureRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace camera_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "881807b9f62e6919695085297c872d67";
  }

  static const char* value(const ::camera_control_msgs::SetExposureRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x881807b9f62e6919ULL;
  static const uint64_t static_value2 = 0x695085297c872d67ULL;
};

template<class ContainerAllocator>
struct DataType< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "camera_control_msgs/SetExposureRequest";
  }

  static const char* value(const ::camera_control_msgs::SetExposureRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The target exposure time measured in microseconds.\n"
"# If the limits were exceeded, the desired exposure time will be truncated.\n"
"float32 target_exposure\n"
;
  }

  static const char* value(const ::camera_control_msgs::SetExposureRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target_exposure);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetExposureRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::camera_control_msgs::SetExposureRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::camera_control_msgs::SetExposureRequest_<ContainerAllocator>& v)
  {
    s << indent << "target_exposure: ";
    Printer<float>::stream(s, indent + "  ", v.target_exposure);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_SETEXPOSUREREQUEST_H