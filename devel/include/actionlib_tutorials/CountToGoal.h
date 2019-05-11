// Generated by gencpp from file actionlib_tutorials/CountToGoal.msg
// DO NOT EDIT!


#ifndef ACTIONLIB_TUTORIALS_MESSAGE_COUNTTOGOAL_H
#define ACTIONLIB_TUTORIALS_MESSAGE_COUNTTOGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace actionlib_tutorials
{
template <class ContainerAllocator>
struct CountToGoal_
{
  typedef CountToGoal_<ContainerAllocator> Type;

  CountToGoal_()
    : goal_number(0)  {
    }
  CountToGoal_(const ContainerAllocator& _alloc)
    : goal_number(0)  {
  (void)_alloc;
    }



   typedef int32_t _goal_number_type;
  _goal_number_type goal_number;





  typedef boost::shared_ptr< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> const> ConstPtr;

}; // struct CountToGoal_

typedef ::actionlib_tutorials::CountToGoal_<std::allocator<void> > CountToGoal;

typedef boost::shared_ptr< ::actionlib_tutorials::CountToGoal > CountToGoalPtr;
typedef boost::shared_ptr< ::actionlib_tutorials::CountToGoal const> CountToGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib_tutorials::CountToGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actionlib_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'actionlib_tutorials': ['/home/dhruva/optimiseCosts/devel/share/actionlib_tutorials/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "150721e4e07b176809c91593b29c06c1";
  }

  static const char* value(const ::actionlib_tutorials::CountToGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x150721e4e07b1768ULL;
  static const uint64_t static_value2 = 0x09c91593b29c06c1ULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib_tutorials/CountToGoal";
  }

  static const char* value(const ::actionlib_tutorials::CountToGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
int32 goal_number\n\
";
  }

  static const char* value(const ::actionlib_tutorials::CountToGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.goal_number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CountToGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib_tutorials::CountToGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib_tutorials::CountToGoal_<ContainerAllocator>& v)
  {
    s << indent << "goal_number: ";
    Printer<int32_t>::stream(s, indent + "  ", v.goal_number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_TUTORIALS_MESSAGE_COUNTTOGOAL_H
