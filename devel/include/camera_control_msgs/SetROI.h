// Generated by gencpp from file camera_control_msgs/SetROI.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_SETROI_H
#define CAMERA_CONTROL_MSGS_MESSAGE_SETROI_H

#include <ros/service_traits.h>


#include <camera_control_msgs/SetROIRequest.h>
#include <camera_control_msgs/SetROIResponse.h>


namespace camera_control_msgs
{

struct SetROI
{

typedef SetROIRequest Request;
typedef SetROIResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetROI
} // namespace camera_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::camera_control_msgs::SetROI > {
  static const char* value()
  {
    return "58d19177e6121352c4bf9021da422622";
  }

  static const char* value(const ::camera_control_msgs::SetROI&) { return value(); }
};

template<>
struct DataType< ::camera_control_msgs::SetROI > {
  static const char* value()
  {
    return "camera_control_msgs/SetROI";
  }

  static const char* value(const ::camera_control_msgs::SetROI&) { return value(); }
};


// service_traits::MD5Sum< ::camera_control_msgs::SetROIRequest> should match
// service_traits::MD5Sum< ::camera_control_msgs::SetROI >
template<>
struct MD5Sum< ::camera_control_msgs::SetROIRequest>
{
  static const char* value()
  {
    return MD5Sum< ::camera_control_msgs::SetROI >::value();
  }
  static const char* value(const ::camera_control_msgs::SetROIRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::camera_control_msgs::SetROIRequest> should match
// service_traits::DataType< ::camera_control_msgs::SetROI >
template<>
struct DataType< ::camera_control_msgs::SetROIRequest>
{
  static const char* value()
  {
    return DataType< ::camera_control_msgs::SetROI >::value();
  }
  static const char* value(const ::camera_control_msgs::SetROIRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::camera_control_msgs::SetROIResponse> should match
// service_traits::MD5Sum< ::camera_control_msgs::SetROI >
template<>
struct MD5Sum< ::camera_control_msgs::SetROIResponse>
{
  static const char* value()
  {
    return MD5Sum< ::camera_control_msgs::SetROI >::value();
  }
  static const char* value(const ::camera_control_msgs::SetROIResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::camera_control_msgs::SetROIResponse> should match
// service_traits::DataType< ::camera_control_msgs::SetROI >
template<>
struct DataType< ::camera_control_msgs::SetROIResponse>
{
  static const char* value()
  {
    return DataType< ::camera_control_msgs::SetROI >::value();
  }
  static const char* value(const ::camera_control_msgs::SetROIResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_SETROI_H
