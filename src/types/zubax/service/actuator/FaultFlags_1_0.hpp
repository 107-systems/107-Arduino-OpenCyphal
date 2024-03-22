//
// This is an AUTO-GENERATED Cyphal DSDL data type implementation. Curious? See https://opencyphal.org.
// You shouldn't attempt to edit this file.
//
// Checking this file under version control is not recommended since metadata in this header will change for each
// build invocation. TODO: add --reproducible option to prevent any volatile metadata from being generated.
//
// Generator:     nunavut-2.0.9 (serialization was enabled)
// Source file:   /tmp/zubax_dsdl/zubax/service/actuator/FaultFlags.1.0.dsdl
// Generated at:  2024-03-22 12:34:33.134414 UTC
// Is deprecated: no
// Fixed port-ID: None
// Full name:     zubax.service.actuator.FaultFlags
// Type Version:  1.0
// Support
//    Support Namespace: nunavut.lang.cpp.support
//    Support Version:   (1, 0, 0)
// Template Set (package)
//    priority: 0
//    package:  nunavut.lang.cpp.templates
//    version:  (1, 0, 0)
// Platform
//     python_implementation:  CPython
//     python_version:  3.8.10
//     python_release_level:  final
//     python_build:  ('default', 'Nov 22 2023 10:22:35')
//     python_compiler:  GCC 9.4.0
//     python_revision:
//     python_xoptions:  {}
//     runtime_platform:  Linux-5.15.0-100-generic-x86_64-with-glibc2.29
// Language Options
//     target_endianness:  any
//     omit_float_serialization_support:  False
//     enable_serialization_asserts:  False
//     enable_override_variable_array_capacity:  False
//     std:  c++17
//     variable_array_type_template:
//     variable_array_type_include:
//     cast_format:  static_cast<{type}>({value})
//     enable_allocator_support:  False
// Uses Language Features
//     Uses std_variant:yes
#ifndef ZUBAX_SERVICE_ACTUATOR_FAULT_FLAGS_1_0_HPP_INCLUDED
#define ZUBAX_SERVICE_ACTUATOR_FAULT_FLAGS_1_0_HPP_INCLUDED

#include <nunavut/support/serialization.hpp>
#include <limits>

namespace zubax
{
namespace service
{
namespace actuator
{
// +-------------------------------------------------------------------------------------------------------------------+
// | LANGUAGE OPTION ASSERTIONS
// |    These static assertions ensure that the header is being used with
// | Nunavut C++ serialization support that is compatible with the language
// | options in effect when that support code was generated.
// +-------------------------------------------------------------------------------------------------------------------+
static_assert( nunavut::support::options::target_endianness == 1693710260,
              "/tmp/zubax_dsdl/zubax/service/actuator/FaultFlags.1.0.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::omit_float_serialization_support == 0,
              "/tmp/zubax_dsdl/zubax/service/actuator/FaultFlags.1.0.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::enable_serialization_asserts == 0,
              "/tmp/zubax_dsdl/zubax/service/actuator/FaultFlags.1.0.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::enable_override_variable_array_capacity == 0,
              "/tmp/zubax_dsdl/zubax/service/actuator/FaultFlags.1.0.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::std == 628873475,
              "/tmp/zubax_dsdl/zubax/service/actuator/FaultFlags.1.0.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::variable_array_type_template == 0,
              "/tmp/zubax_dsdl/zubax/service/actuator/FaultFlags.1.0.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::variable_array_type_include == 0,
              "/tmp/zubax_dsdl/zubax/service/actuator/FaultFlags.1.0.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::cast_format == 1407868567,
              "/tmp/zubax_dsdl/zubax/service/actuator/FaultFlags.1.0.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::enable_allocator_support == 0,
              "/tmp/zubax_dsdl/zubax/service/actuator/FaultFlags.1.0.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );

// +-------------------------------------------------------------------------------------------------------------------+
// | This implementation uses the C++17 standard library variant type with wrappers for the emplace and
// | get_if methods to support forward-compatibility with the C++14 version of this object. The union_value type
// | extends std::variant and can be used with the entire set of variant methods. Using std::variant directly does mean
// | your code will not be backwards compatible with the C++14 version of this object.
// +-------------------------------------------------------------------------------------------------------------------+
///
/// A collection of detailed fault flags indicating problems detected by the service provider.
/// A fault flag is set when the corresponding parameter exceeds its safe operating area (SOA) as defined by the vendor;
/// see https://en.wikipedia.org/wiki/Safe_operating_area.
/// As long as at least one flag is set, the service health should not be NOMINAL.
/// This type is inherited from the original DS-015/UDRAL proposal.
///
struct FaultFlags_1_0 final
{
    struct _traits_  // The name is surrounded with underscores to avoid collisions with DSDL attributes.
    {
        _traits_() = delete;
        /// This type does not have a fixed port-ID. See https://forum.opencyphal.org/t/choosing-message-and-service-ids/889
        static constexpr bool HasFixedPortID = false;

        static constexpr bool IsServiceType = false;

        /// Extent is the minimum amount of memory required to hold any serialized representation of any compatible
        /// version of the data type; or, on other words, it is the the maximum possible size of received objects of this type.
        /// The size is specified in bytes (rather than bits) because by definition, extent is an integer number of bytes long.
        /// When allocating a deserialization (RX) buffer for this data type, it should be at least extent bytes large.
        /// When allocating a serialization (TX) buffer, it is safe to use the size of the largest serialized representation
        /// instead of the extent because it provides a tighter bound of the object size; it is safe because the concrete type
        /// is always known during serialization (unlike deserialization). If not sure, use extent everywhere.
        static constexpr std::size_t ExtentBytes                  = 2UL;
        static constexpr std::size_t SerializationBufferSizeBytes = 2UL;
        static_assert(ExtentBytes >= SerializationBufferSizeBytes, "Internal constraint violation");
        static_assert(ExtentBytes < (std::numeric_limits<std::size_t>::max() / 8U), "This message is too large to be handled by the selected types");
        struct TypeOf
        {
            TypeOf() = delete;
            using overload = bool;
            using voltage = bool;
            using motor_temperature = bool;
            using controller_temperature = bool;
            using velocity = bool;
            using mechanical = bool;
            using vibration = bool;
            using configuration = bool;
            using control_mode = bool;
            using other = bool;
        };
    };

    // +----------------------------------------------------------------------+
    // | FIELDS
    // +----------------------------------------------------------------------+
    ///
    /// The load is above SOA or regeneration below the SOA.
    ///
    _traits_::TypeOf::overload overload{};
    ///
    /// Supply voltage is above or below the SOA.
    ///
    _traits_::TypeOf::voltage voltage{};

    _traits_::TypeOf::motor_temperature motor_temperature{};
    ///
    /// Temperature is above or below the SOA.
    ///
    _traits_::TypeOf::controller_temperature controller_temperature{};
    ///
    /// The absolute velocity of the load is above the SOA.
    ///
    _traits_::TypeOf::velocity velocity{};
    ///
    /// The load cannot be driven due to a mechanical failure.
    ///
    _traits_::TypeOf::mechanical mechanical{};
    ///
    /// The mechanical vibration level exceeds the SOA.
    ///
    _traits_::TypeOf::vibration vibration{};
    ///
    /// Configuration is missing or invalid.
    ///
    _traits_::TypeOf::configuration configuration{};
    ///
    /// The requested control mode is not supported by the actuator.
    ///
    _traits_::TypeOf::control_mode control_mode{};
    ///
    /// None of the above (vendor-specific).
    ///
    _traits_::TypeOf::other other{};
};

inline nunavut::support::SerializeResult serialize(const FaultFlags_1_0& obj,
                                                   nunavut::support::bitspan out_buffer)
{
    const std::size_t capacity_bits = out_buffer.size();
    if ((static_cast<std::size_t>(capacity_bits)) < 16UL)
    {
        return -nunavut::support::Error::SerializationBufferTooSmall;
    }
    // Notice that fields that are not an integer number of bytes long may overrun the space allocated for them
    // in the serialization buffer up to the next byte boundary. This is by design and is guaranteed to be safe.
    {   // saturated bool overload
        auto _result2_ = out_buffer.setBit(obj.overload);
        if(not _result2_){
            return -_result2_.error();
        }
        out_buffer.add_offset(1UL);
    }
    {   // saturated bool voltage
        auto _result2_ = out_buffer.setBit(obj.voltage);
        if(not _result2_){
            return -_result2_.error();
        }
        out_buffer.add_offset(1UL);
    }
    {   // saturated bool motor_temperature
        auto _result2_ = out_buffer.setBit(obj.motor_temperature);
        if(not _result2_){
            return -_result2_.error();
        }
        out_buffer.add_offset(1UL);
    }
    {   // saturated bool controller_temperature
        auto _result2_ = out_buffer.setBit(obj.controller_temperature);
        if(not _result2_){
            return -_result2_.error();
        }
        out_buffer.add_offset(1UL);
    }
    {   // saturated bool velocity
        auto _result2_ = out_buffer.setBit(obj.velocity);
        if(not _result2_){
            return -_result2_.error();
        }
        out_buffer.add_offset(1UL);
    }
    {   // saturated bool mechanical
        auto _result2_ = out_buffer.setBit(obj.mechanical);
        if(not _result2_){
            return -_result2_.error();
        }
        out_buffer.add_offset(1UL);
    }
    {   // saturated bool vibration
        auto _result2_ = out_buffer.setBit(obj.vibration);
        if(not _result2_){
            return -_result2_.error();
        }
        out_buffer.add_offset(1UL);
    }
    {   // saturated bool configuration
        auto _result2_ = out_buffer.setBit(obj.configuration);
        if(not _result2_){
            return -_result2_.error();
        }
        out_buffer.add_offset(1UL);
    }
    {   // saturated bool control_mode
        auto _result2_ = out_buffer.setBit(obj.control_mode);
        if(not _result2_){
            return -_result2_.error();
        }
        out_buffer.add_offset(1UL);
    }
    {   // void6
        auto _result1_ = out_buffer.setZeros(6UL);
        if(not _result1_){
            return -_result1_.error();
        }
        out_buffer.add_offset(6UL);
    }
    {   // saturated bool other
        auto _result2_ = out_buffer.setBit(obj.other);
        if(not _result2_){
            return -_result2_.error();
        }
        out_buffer.add_offset(1UL);
    }
    {
        const auto _result0_ = out_buffer.padAndMoveToAlignment(8U);
        if(not _result0_){
            return -_result0_.error();
        }
    }
    // It is assumed that we know the exact type of the serialized entity, hence we expect the size to match.
    return out_buffer.offset_bytes_ceil();
}

inline nunavut::support::SerializeResult deserialize(FaultFlags_1_0& obj,
                                                     nunavut::support::const_bitspan in_buffer)
{
    const auto capacity_bits = in_buffer.size();
    // saturated bool overload
    obj.overload = in_buffer.getBit();
    in_buffer.add_offset(1U);
    // saturated bool voltage
    obj.voltage = in_buffer.getBit();
    in_buffer.add_offset(1U);
    // saturated bool motor_temperature
    obj.motor_temperature = in_buffer.getBit();
    in_buffer.add_offset(1U);
    // saturated bool controller_temperature
    obj.controller_temperature = in_buffer.getBit();
    in_buffer.add_offset(1U);
    // saturated bool velocity
    obj.velocity = in_buffer.getBit();
    in_buffer.add_offset(1U);
    // saturated bool mechanical
    obj.mechanical = in_buffer.getBit();
    in_buffer.add_offset(1U);
    // saturated bool vibration
    obj.vibration = in_buffer.getBit();
    in_buffer.add_offset(1U);
    // saturated bool configuration
    obj.configuration = in_buffer.getBit();
    in_buffer.add_offset(1U);
    // saturated bool control_mode
    obj.control_mode = in_buffer.getBit();
    in_buffer.add_offset(1U);
    // void6
    in_buffer.add_offset(6);
    // saturated bool other
    obj.other = in_buffer.getBit();
    in_buffer.add_offset(1U);
    in_buffer.align_offset_to<8U>();
    auto _bits_got_ = std::min<std::size_t>(in_buffer.offset(), capacity_bits);
    return { static_cast<std::size_t>(_bits_got_ / 8U) };
}

} // namespace actuator
} // namespace service
} // namespace zubax

#endif // ZUBAX_SERVICE_ACTUATOR_FAULT_FLAGS_1_0_HPP_INCLUDED
