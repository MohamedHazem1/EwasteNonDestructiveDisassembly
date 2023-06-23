// Generated by gencpp from file abb_rapid_sm_addin_msgs/GetEGMSettings.msg
// DO NOT EDIT!


#ifndef ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_GETEGMSETTINGS_H
#define ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_GETEGMSETTINGS_H

#include <ros/service_traits.h>


#include <abb_rapid_sm_addin_msgs/GetEGMSettingsRequest.h>
#include <abb_rapid_sm_addin_msgs/GetEGMSettingsResponse.h>


namespace abb_rapid_sm_addin_msgs
{

struct GetEGMSettings
{

typedef GetEGMSettingsRequest Request;
typedef GetEGMSettingsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetEGMSettings
} // namespace abb_rapid_sm_addin_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::GetEGMSettings > {
  static const char* value()
  {
    return "8735578c5cf9e61a67a68c6c0fe0172b";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::GetEGMSettings&) { return value(); }
};

template<>
struct DataType< ::abb_rapid_sm_addin_msgs::GetEGMSettings > {
  static const char* value()
  {
    return "abb_rapid_sm_addin_msgs/GetEGMSettings";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::GetEGMSettings&) { return value(); }
};


// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::GetEGMSettingsRequest> should match
// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::GetEGMSettings >
template<>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::GetEGMSettingsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::abb_rapid_sm_addin_msgs::GetEGMSettings >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::GetEGMSettingsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_rapid_sm_addin_msgs::GetEGMSettingsRequest> should match
// service_traits::DataType< ::abb_rapid_sm_addin_msgs::GetEGMSettings >
template<>
struct DataType< ::abb_rapid_sm_addin_msgs::GetEGMSettingsRequest>
{
  static const char* value()
  {
    return DataType< ::abb_rapid_sm_addin_msgs::GetEGMSettings >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::GetEGMSettingsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::GetEGMSettingsResponse> should match
// service_traits::MD5Sum< ::abb_rapid_sm_addin_msgs::GetEGMSettings >
template<>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::GetEGMSettingsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::abb_rapid_sm_addin_msgs::GetEGMSettings >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::GetEGMSettingsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::abb_rapid_sm_addin_msgs::GetEGMSettingsResponse> should match
// service_traits::DataType< ::abb_rapid_sm_addin_msgs::GetEGMSettings >
template<>
struct DataType< ::abb_rapid_sm_addin_msgs::GetEGMSettingsResponse>
{
  static const char* value()
  {
    return DataType< ::abb_rapid_sm_addin_msgs::GetEGMSettings >::value();
  }
  static const char* value(const ::abb_rapid_sm_addin_msgs::GetEGMSettingsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_GETEGMSETTINGS_H
