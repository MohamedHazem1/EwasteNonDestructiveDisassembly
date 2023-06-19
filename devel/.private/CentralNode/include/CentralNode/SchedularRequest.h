// Generated by gencpp from file CentralNode/SchedularRequest.msg
// DO NOT EDIT!


#ifndef CENTRALNODE_MESSAGE_SCHEDULARREQUEST_H
#define CENTRALNODE_MESSAGE_SCHEDULARREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace CentralNode
{
template <class ContainerAllocator>
struct SchedularRequest_
{
  typedef SchedularRequest_<ContainerAllocator> Type;

  SchedularRequest_()
    {
    }
  SchedularRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::CentralNode::SchedularRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CentralNode::SchedularRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SchedularRequest_

typedef ::CentralNode::SchedularRequest_<std::allocator<void> > SchedularRequest;

typedef boost::shared_ptr< ::CentralNode::SchedularRequest > SchedularRequestPtr;
typedef boost::shared_ptr< ::CentralNode::SchedularRequest const> SchedularRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::CentralNode::SchedularRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::CentralNode::SchedularRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace CentralNode

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::CentralNode::SchedularRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::CentralNode::SchedularRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::CentralNode::SchedularRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::CentralNode::SchedularRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::CentralNode::SchedularRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::CentralNode::SchedularRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::CentralNode::SchedularRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::CentralNode::SchedularRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::CentralNode::SchedularRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "CentralNode/SchedularRequest";
  }

  static const char* value(const ::CentralNode::SchedularRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::CentralNode::SchedularRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::CentralNode::SchedularRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::CentralNode::SchedularRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SchedularRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::CentralNode::SchedularRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::CentralNode::SchedularRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // CENTRALNODE_MESSAGE_SCHEDULARREQUEST_H
