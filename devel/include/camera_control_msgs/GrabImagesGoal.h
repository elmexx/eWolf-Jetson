// Generated by gencpp from file camera_control_msgs/GrabImagesGoal.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESGOAL_H
#define CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESGOAL_H


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
struct GrabImagesGoal_
{
  typedef GrabImagesGoal_<ContainerAllocator> Type;

  GrabImagesGoal_()
    : exposure_given(false)
    , exposure_times()
    , gain_given(false)
    , gain_values()
    , gamma_given(false)
    , gamma_values()
    , brightness_given(false)
    , brightness_values()
    , exposure_auto(false)
    , gain_auto(false)  {
    }
  GrabImagesGoal_(const ContainerAllocator& _alloc)
    : exposure_given(false)
    , exposure_times(_alloc)
    , gain_given(false)
    , gain_values(_alloc)
    , gamma_given(false)
    , gamma_values(_alloc)
    , brightness_given(false)
    , brightness_values(_alloc)
    , exposure_auto(false)
    , gain_auto(false)  {
  (void)_alloc;
    }



   typedef uint8_t _exposure_given_type;
  _exposure_given_type exposure_given;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _exposure_times_type;
  _exposure_times_type exposure_times;

   typedef uint8_t _gain_given_type;
  _gain_given_type gain_given;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _gain_values_type;
  _gain_values_type gain_values;

   typedef uint8_t _gamma_given_type;
  _gamma_given_type gamma_given;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _gamma_values_type;
  _gamma_values_type gamma_values;

   typedef uint8_t _brightness_given_type;
  _brightness_given_type brightness_given;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _brightness_values_type;
  _brightness_values_type brightness_values;

   typedef uint8_t _exposure_auto_type;
  _exposure_auto_type exposure_auto;

   typedef uint8_t _gain_auto_type;
  _gain_auto_type gain_auto;





  typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> const> ConstPtr;

}; // struct GrabImagesGoal_

typedef ::camera_control_msgs::GrabImagesGoal_<std::allocator<void> > GrabImagesGoal;

typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesGoal > GrabImagesGoalPtr;
typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesGoal const> GrabImagesGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator1> & lhs, const ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator2> & rhs)
{
  return lhs.exposure_given == rhs.exposure_given &&
    lhs.exposure_times == rhs.exposure_times &&
    lhs.gain_given == rhs.gain_given &&
    lhs.gain_values == rhs.gain_values &&
    lhs.gamma_given == rhs.gamma_given &&
    lhs.gamma_values == rhs.gamma_values &&
    lhs.brightness_given == rhs.brightness_given &&
    lhs.brightness_values == rhs.brightness_values &&
    lhs.exposure_auto == rhs.exposure_auto &&
    lhs.gain_auto == rhs.gain_auto;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator1> & lhs, const ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace camera_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c62b1b0356df57d5bde902f61c90337a";
  }

  static const char* value(const ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc62b1b0356df57d5ULL;
  static const uint64_t static_value2 = 0xbde902f61c90337aULL;
};

template<class ContainerAllocator>
struct DataType< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "camera_control_msgs/GrabImagesGoal";
  }

  static const char* value(const ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"##########################################\n"
"################## GOAL ##################\n"
"##########################################\n"
"\n"
"# Flag which indicates if the exposure times are provided and hence should be\n"
"# set before grabbing\n"
"bool exposure_given\n"
"\n"
"# Only relevant, if exposure_given is true:\n"
"# The list of target exposure times in microseconds.\n"
"# It is possible to grab only one image as well as several images with\n"
"# different exposure times. This values can be overriden from the brightness\n"
"# search, in case that the flag exposure_fixed is not true.\n"
"float32[] exposure_times\n"
"\n"
"# Flag which indicates if the gain is provided and hence should be set before\n"
"# grabbing\n"
"bool gain_given\n"
"\n"
"# Only relevant, if gain_given is true:\n"
"# The target gain in percent of the maximal value the camera supports.\n"
"# For USB-Cameras, the gain is in dB, for GigE-Cameras it is given in so\n"
"# called 'device specific units'. This value can be overriden from the\n"
"# brightness search, in case that the gain_fixed flag is set to false.\n"
"float32[] gain_values\n"
"\n"
"# Flag which indicates if the gamma value is provided and hence should be set\n"
"# before grabbing\n"
"bool gamma_given\n"
"\n"
"# Only relevant, if gain_given is true:\n"
"# Gamma correction of pixel intensity.\n"
"# Adjusts the brightness of the pixel values output by the camera's sensor\n"
"# to account for a non-linearity in the human perception of brightness or\n"
"# of the display system (such as CRT).\n"
"float32[] gamma_values\n"
"\n"
"# Flag which indicates if the brightness values are provided and hence should\n"
"# be set before grabbing\n"
"bool brightness_given\n"
"\n"
"# Only relevant, if brightness_given is true:\n"
"# The average intensity values of the images. It depends the exposure time\n"
"# as well as the gain setting.\n"
"float32[] brightness_values\n"
"\n"
"# Only relevant, if brightness_given is true:\n"
"# If the camera should try reach the desired brightness, at least one of the\n"
"# following flags MUST be set. If both are set, the interface will use the\n"
"# profile that tries to keep the gain at minimum to reduce white noise.\n"
"# 'exposure_auto' will adapt the exposure time to reach the brightness, wheras\n"
"# 'gain_auto' does so by adapting the gain. If one of these flags is set to\n"
"# false, the connected property will be kept fix.\n"
"# In most of the cases trying to reach a target brightness only by varying the\n"
"# gain and keeping the exposure time fix is not a good approach, because the\n"
"# exposure range is many times higher than the gain range.\n"
"bool exposure_auto\n"
"bool gain_auto\n"
"\n"
;
  }

  static const char* value(const ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.exposure_given);
      stream.next(m.exposure_times);
      stream.next(m.gain_given);
      stream.next(m.gain_values);
      stream.next(m.gamma_given);
      stream.next(m.gamma_values);
      stream.next(m.brightness_given);
      stream.next(m.brightness_values);
      stream.next(m.exposure_auto);
      stream.next(m.gain_auto);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GrabImagesGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::camera_control_msgs::GrabImagesGoal_<ContainerAllocator>& v)
  {
    s << indent << "exposure_given: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.exposure_given);
    s << indent << "exposure_times[]" << std::endl;
    for (size_t i = 0; i < v.exposure_times.size(); ++i)
    {
      s << indent << "  exposure_times[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.exposure_times[i]);
    }
    s << indent << "gain_given: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gain_given);
    s << indent << "gain_values[]" << std::endl;
    for (size_t i = 0; i < v.gain_values.size(); ++i)
    {
      s << indent << "  gain_values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.gain_values[i]);
    }
    s << indent << "gamma_given: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gamma_given);
    s << indent << "gamma_values[]" << std::endl;
    for (size_t i = 0; i < v.gamma_values.size(); ++i)
    {
      s << indent << "  gamma_values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.gamma_values[i]);
    }
    s << indent << "brightness_given: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brightness_given);
    s << indent << "brightness_values[]" << std::endl;
    for (size_t i = 0; i < v.brightness_values.size(); ++i)
    {
      s << indent << "  brightness_values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.brightness_values[i]);
    }
    s << indent << "exposure_auto: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.exposure_auto);
    s << indent << "gain_auto: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gain_auto);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESGOAL_H