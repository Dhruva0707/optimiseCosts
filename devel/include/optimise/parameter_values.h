// Generated by gencpp from file optimise/parameter_values.msg
// DO NOT EDIT!


#ifndef OPTIMISE_MESSAGE_PARAMETER_VALUES_H
#define OPTIMISE_MESSAGE_PARAMETER_VALUES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace optimise
{
template <class ContainerAllocator>
struct parameter_values_
{
  typedef parameter_values_<ContainerAllocator> Type;

  parameter_values_()
    : x(0.0)
    , y(0.0)  {
    }
  parameter_values_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::optimise::parameter_values_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::optimise::parameter_values_<ContainerAllocator> const> ConstPtr;

}; // struct parameter_values_

typedef ::optimise::parameter_values_<std::allocator<void> > parameter_values;

typedef boost::shared_ptr< ::optimise::parameter_values > parameter_valuesPtr;
typedef boost::shared_ptr< ::optimise::parameter_values const> parameter_valuesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::optimise::parameter_values_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::optimise::parameter_values_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace optimise

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'optimise': ['/home/dhruva/optimiseCosts/src/optimise/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::optimise::parameter_values_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::optimise::parameter_values_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optimise::parameter_values_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optimise::parameter_values_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optimise::parameter_values_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optimise::parameter_values_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::optimise::parameter_values_<ContainerAllocator> >
{
  static const char* value()
  {
    return "209f516d3eb691f0663e25cb750d67c1";
  }

  static const char* value(const ::optimise::parameter_values_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x209f516d3eb691f0ULL;
  static const uint64_t static_value2 = 0x663e25cb750d67c1ULL;
};

template<class ContainerAllocator>
struct DataType< ::optimise::parameter_values_<ContainerAllocator> >
{
  static const char* value()
  {
    return "optimise/parameter_values";
  }

  static const char* value(const ::optimise::parameter_values_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::optimise::parameter_values_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n\
float64 y\n\
\n\
";
  }

  static const char* value(const ::optimise::parameter_values_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::optimise::parameter_values_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct parameter_values_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::optimise::parameter_values_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::optimise::parameter_values_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPTIMISE_MESSAGE_PARAMETER_VALUES_H
