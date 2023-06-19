// Generated by gencpp from file abb_robot_msgs/SetRAPIDStringRequest.msg
// DO NOT EDIT!


#ifndef ABB_ROBOT_MSGS_MESSAGE_SETRAPIDSTRINGREQUEST_H
#define ABB_ROBOT_MSGS_MESSAGE_SETRAPIDSTRINGREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <abb_robot_msgs/RAPIDSymbolPath.h>

namespace abb_robot_msgs
{
template <class ContainerAllocator>
struct SetRAPIDStringRequest_
{
  typedef SetRAPIDStringRequest_<ContainerAllocator> Type;

  SetRAPIDStringRequest_()
    : path()
    , value()  {
    }
  SetRAPIDStringRequest_(const ContainerAllocator& _alloc)
    : path(_alloc)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef  ::abb_robot_msgs::RAPIDSymbolPath_<ContainerAllocator>  _path_type;
  _path_type path;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetRAPIDStringRequest_

typedef ::abb_robot_msgs::SetRAPIDStringRequest_<std::allocator<void> > SetRAPIDStringRequest;

typedef boost::shared_ptr< ::abb_robot_msgs::SetRAPIDStringRequest > SetRAPIDStringRequestPtr;
typedef boost::shared_ptr< ::abb_robot_msgs::SetRAPIDStringRequest const> SetRAPIDStringRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator1> & lhs, const ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator2> & rhs)
{
  return lhs.path == rhs.path &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator1> & lhs, const ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c81ac0a08ec42b48b22060c8bbfc22d7";
  }

  static const char* value(const ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc81ac0a08ec42b48ULL;
  static const uint64_t static_value2 = 0xb22060c8bbfc22d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_robot_msgs/SetRAPIDStringRequest";
  }

  static const char* value(const ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this service definition, is to define a way to set the value\n"
"#   of a RAPID 'string' symbol (e.g. a variable) defined in an ABB robot\n"
"#   controller system.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Service request fields\n"
"#-------------------------------------------------------------------------------\n"
"# Path to the targeted RAPID symbol.\n"
"RAPIDSymbolPath path\n"
"\n"
"# New value of the RAPID symbol.\n"
"string value\n"
"\n"
"\n"
"================================================================================\n"
"MSG: abb_robot_msgs/RAPIDSymbolPath\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the path to a RAPID\n"
"#   symbol (e.g. a variable) defined in an ABB robot controller system.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Name of the RAPID task, where the symbol exists (i.e. the symbol's context).\n"
"string task\n"
"\n"
"# Name of the RAPID module, where the symbol has been defined.\n"
"string module\n"
"\n"
"# Name of the RAPID symbol in question.\n"
"string symbol\n"
;
  }

  static const char* value(const ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetRAPIDStringRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_robot_msgs::SetRAPIDStringRequest_<ContainerAllocator>& v)
  {
    s << indent << "path: ";
    s << std::endl;
    Printer< ::abb_robot_msgs::RAPIDSymbolPath_<ContainerAllocator> >::stream(s, indent + "  ", v.path);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_ROBOT_MSGS_MESSAGE_SETRAPIDSTRINGREQUEST_H
