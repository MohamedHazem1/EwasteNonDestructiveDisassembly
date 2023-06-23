// Generated by gencpp from file abb_robot_msgs/GetFileContents.msg
// DO NOT EDIT!


#ifndef ABB_ROBOT_MSGS_MESSAGE_GETFILECONTENTS_H
#define ABB_ROBOT_MSGS_MESSAGE_GETFILECONTENTS_H

#include <ros/service_traits.h>


#include <abb_robot_msgs/GetFileContentsRequest.h>
#include <abb_robot_msgs/GetFileContentsResponse.h>


namespace abb_robot_msgs
{

struct GetFileContents
{

typedef GetFileContentsRequest Request;
typedef GetFileContentsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetFileContents
} // namespace abb_robot_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::abb_robot_msgs::GetFileContents > {
  static const char* value()
  {
    return "4715c1a4564cfe2f12eb2de6ae62ccaa";
  }

  static const char* value(const ::abb_robot_msgs::GetFileContents&) { return value(); }
};

template<>
struct DataType< ::abb_robot_msgs::GetFileContents > {
  static const char* value()
  {
    return "abb_robot_msgs/GetFileContents";
  }

  static const char* value(const ::abb_robot_msgs::GetFileContents&) { return value(); }
};


// service_traits::MD5Sum< ::abb_robot_msgs::GetFileContentsRequest> should match
// service_traits::MD5Sum< ::abb_robot_msgs::GetFileContents >
template<>
struct MD5Sum< ::abb_robot_msgs::GetFileContentsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::abb_robot_msgs::GetFileContents >::value();
  }
  static const char* value(const ::abb_robot_msgs::GetFileContentsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_robot_msgs::GetFileContentsRequest> should match
// service_traits::DataType< ::abb_robot_msgs::GetFileContents >
template<>
struct DataType< ::abb_robot_msgs::GetFileContentsRequest>
{
  static const char* value()
  {
    return DataType< ::abb_robot_msgs::GetFileContents >::value();
  }
  static const char* value(const ::abb_robot_msgs::GetFileContentsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::abb_robot_msgs::GetFileContentsResponse> should match
// service_traits::MD5Sum< ::abb_robot_msgs::GetFileContents >
template<>
struct MD5Sum< ::abb_robot_msgs::GetFileContentsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::abb_robot_msgs::GetFileContents >::value();
  }
  static const char* value(const ::abb_robot_msgs::GetFileContentsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_robot_msgs::GetFileContentsResponse> should match
// service_traits::DataType< ::abb_robot_msgs::GetFileContents >
template<>
struct DataType< ::abb_robot_msgs::GetFileContentsResponse>
{
  static const char* value()
  {
    return DataType< ::abb_robot_msgs::GetFileContents >::value();
  }
  static const char* value(const ::abb_robot_msgs::GetFileContentsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ABB_ROBOT_MSGS_MESSAGE_GETFILECONTENTS_H
