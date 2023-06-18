// Generated by gencpp from file abb_rapid_msgs/ConfData.msg
// DO NOT EDIT!


#ifndef ABB_RAPID_MSGS_MESSAGE_CONFDATA_H
#define ABB_RAPID_MSGS_MESSAGE_CONFDATA_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace abb_rapid_msgs
{
template <class ContainerAllocator>
struct ConfData_
{
  typedef ConfData_<ContainerAllocator> Type;

  ConfData_()
    : cf1(0.0)
    , cf4(0.0)
    , cf6(0.0)
    , cfx(0.0)  {
    }
  ConfData_(const ContainerAllocator& _alloc)
    : cf1(0.0)
    , cf4(0.0)
    , cf6(0.0)
    , cfx(0.0)  {
  (void)_alloc;
    }



   typedef float _cf1_type;
  _cf1_type cf1;

   typedef float _cf4_type;
  _cf4_type cf4;

   typedef float _cf6_type;
  _cf6_type cf6;

   typedef float _cfx_type;
  _cfx_type cfx;





  typedef boost::shared_ptr< ::abb_rapid_msgs::ConfData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_rapid_msgs::ConfData_<ContainerAllocator> const> ConstPtr;

}; // struct ConfData_

typedef ::abb_rapid_msgs::ConfData_<std::allocator<void> > ConfData;

typedef boost::shared_ptr< ::abb_rapid_msgs::ConfData > ConfDataPtr;
typedef boost::shared_ptr< ::abb_rapid_msgs::ConfData const> ConfDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_rapid_msgs::ConfData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_rapid_msgs::ConfData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_rapid_msgs::ConfData_<ContainerAllocator1> & lhs, const ::abb_rapid_msgs::ConfData_<ContainerAllocator2> & rhs)
{
  return lhs.cf1 == rhs.cf1 &&
    lhs.cf4 == rhs.cf4 &&
    lhs.cf6 == rhs.cf6 &&
    lhs.cfx == rhs.cfx;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_rapid_msgs::ConfData_<ContainerAllocator1> & lhs, const ::abb_rapid_msgs::ConfData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_rapid_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::abb_rapid_msgs::ConfData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_rapid_msgs::ConfData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_rapid_msgs::ConfData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_rapid_msgs::ConfData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_rapid_msgs::ConfData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_rapid_msgs::ConfData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_rapid_msgs::ConfData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "21f1129f94cd63dd0cdf33be2bddc75e";
  }

  static const char* value(const ::abb_rapid_msgs::ConfData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x21f1129f94cd63ddULL;
  static const uint64_t static_value2 = 0x0cdf33be2bddc75eULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_rapid_msgs::ConfData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_rapid_msgs/ConfData";
  }

  static const char* value(const ::abb_rapid_msgs::ConfData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_rapid_msgs::ConfData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"confdata\" (robot configuration data).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Rotating axis:\n"
"# - The current quadrant of axis 1, 4 and 6,\n"
"#   expressed as a positive or negative integer.\n"
"# Linear axis:\n"
"# - The current meter interval of axis 1, 4 and 6,\n"
"#   expressed as a positive or negative integer.\n"
"float32 cf1\n"
"float32 cf4\n"
"float32 cf6\n"
"\n"
"# Rotating axis:\n"
"# - For serial link robots, the current robot configuration,\n"
"#   expressed as an integer in the range from 0 to 7.\n"
"# - For SCARA robots, the current robot configuration,\n"
"#   expressed as an integer in the range from 0 to 1.\n"
"# - For 7-axis robots, the current robot configuration,\n"
"#   expressed as an integer in the range from 0 to 7.\n"
"# - For paint robots, the current quadrant of axis 5,\n"
"#   expressed as a positive or negative integer.\n"
"# - For other robots, using the current quadrant of axis 2,\n"
"#   expressed as a positive or negative integer.\n"
"# Linear axis:\n"
"# - The current meter interval of axis 2,\n"
"#   expressed as a positive or negative integer.\n"
"float32 cfx\n"
;
  }

  static const char* value(const ::abb_rapid_msgs::ConfData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_rapid_msgs::ConfData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cf1);
      stream.next(m.cf4);
      stream.next(m.cf6);
      stream.next(m.cfx);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_rapid_msgs::ConfData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_rapid_msgs::ConfData_<ContainerAllocator>& v)
  {
    s << indent << "cf1: ";
    Printer<float>::stream(s, indent + "  ", v.cf1);
    s << indent << "cf4: ";
    Printer<float>::stream(s, indent + "  ", v.cf4);
    s << indent << "cf6: ";
    Printer<float>::stream(s, indent + "  ", v.cf6);
    s << indent << "cfx: ";
    Printer<float>::stream(s, indent + "  ", v.cfx);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_RAPID_MSGS_MESSAGE_CONFDATA_H
