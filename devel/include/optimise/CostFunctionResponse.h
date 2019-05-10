// Generated by gencpp from file optimise/CostFunctionResponse.msg
// DO NOT EDIT!


#ifndef OPTIMISE_MESSAGE_COSTFUNCTIONRESPONSE_H
#define OPTIMISE_MESSAGE_COSTFUNCTIONRESPONSE_H


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
struct CostFunctionResponse_
{
  typedef CostFunctionResponse_<ContainerAllocator> Type;

  CostFunctionResponse_()
    : cost(0.0)  {
    }
  CostFunctionResponse_(const ContainerAllocator& _alloc)
    : cost(0.0)  {
  (void)_alloc;
    }



   typedef double _cost_type;
  _cost_type cost;





  typedef boost::shared_ptr< ::optimise::CostFunctionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::optimise::CostFunctionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CostFunctionResponse_

typedef ::optimise::CostFunctionResponse_<std::allocator<void> > CostFunctionResponse;

typedef boost::shared_ptr< ::optimise::CostFunctionResponse > CostFunctionResponsePtr;
typedef boost::shared_ptr< ::optimise::CostFunctionResponse const> CostFunctionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::optimise::CostFunctionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::optimise::CostFunctionResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::optimise::CostFunctionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::optimise::CostFunctionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optimise::CostFunctionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::optimise::CostFunctionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optimise::CostFunctionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::optimise::CostFunctionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::optimise::CostFunctionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bff9a2439f6a3b435a395e2c861c4c14";
  }

  static const char* value(const ::optimise::CostFunctionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbff9a2439f6a3b43ULL;
  static const uint64_t static_value2 = 0x5a395e2c861c4c14ULL;
};

template<class ContainerAllocator>
struct DataType< ::optimise::CostFunctionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "optimise/CostFunctionResponse";
  }

  static const char* value(const ::optimise::CostFunctionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::optimise::CostFunctionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 cost\n\
\n\
";
  }

  static const char* value(const ::optimise::CostFunctionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::optimise::CostFunctionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cost);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CostFunctionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::optimise::CostFunctionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::optimise::CostFunctionResponse_<ContainerAllocator>& v)
  {
    s << indent << "cost: ";
    Printer<double>::stream(s, indent + "  ", v.cost);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPTIMISE_MESSAGE_COSTFUNCTIONRESPONSE_H
