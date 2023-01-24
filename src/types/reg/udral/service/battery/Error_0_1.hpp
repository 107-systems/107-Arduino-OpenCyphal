//
// This is an AUTO-GENERATED UAVCAN DSDL data type implementation. Curious? See https://opencyphal.org.
// You shouldn't attempt to edit this file.
//
// Checking this file under version control is not recommended since metadata in this header will change for each
// build invocation. TODO: add --reproducible option to prevent any volatile metadata from being generated.
//
// Generator:     nunavut-1.9.0 (serialization was enabled)
// Source file:   /tmp/public_regulated_data_types/reg/udral/service/battery/Error.0.1.dsdl
// Generated at:  2023-01-24 05:52:12.042771 UTC
// Is deprecated: no
// Fixed port-ID: None
// Full name:     reg.udral.service.battery.Error
// Type Version:  0.1
// Support
//    Support Namespace: nunavut.lang.cpp.support
//    Support Version:   (1, 0, 0)
// Template Set (package)
//    priority: 0
//    package:  nunavut.lang.cpp.templates
//    version:  (1, 0, 0)
// Platform
//     python_implementation:  CPython
//     python_version:  3.10.6
//     python_release_level:  final
//     python_build:  ('main', 'Nov 14 2022 16:10:14')
//     python_compiler:  GCC 11.3.0
//     python_revision:
//     python_xoptions:  {}
//     runtime_platform:  Linux-5.15.0-58-generic-x86_64-with-glibc2.35
// Language Options
//     target_endianness:  any
//     omit_float_serialization_support:  False
//     enable_serialization_asserts:  True
//     enable_override_variable_array_capacity:  False
//     std:  c++14
//     variable_array_type_template:
//     variable_array_type_include:
//     cast_format:  static_cast<{type}>({value})
//     enable_allocator_support:  False
// Uses Language Features
//     Uses std_variant:no
#ifndef REG_UDRAL_SERVICE_BATTERY_ERROR_0_1_HPP_INCLUDED
#define REG_UDRAL_SERVICE_BATTERY_ERROR_0_1_HPP_INCLUDED

#include <nunavut/support/serialization.hpp>
#include <cstdint>

namespace reg
{
namespace udral
{
namespace service
{
namespace battery
{
// +-------------------------------------------------------------------------------------------------------------------+
// | LANGUAGE OPTION ASSERTIONS
// |    These static assertions ensure that the header is being used with
// | Nunavut C++ serialization support that is compatible with the language
// | options in effect when that support code was generated.
// +-------------------------------------------------------------------------------------------------------------------+
static_assert( nunavut::support::options::target_endianness == 1693710260,
              "/tmp/public_regulated_data_types/reg/udral/service/battery/Error.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::omit_float_serialization_support == 0,
              "/tmp/public_regulated_data_types/reg/udral/service/battery/Error.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::enable_serialization_asserts == 1,
              "/tmp/public_regulated_data_types/reg/udral/service/battery/Error.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::enable_override_variable_array_capacity == 0,
              "/tmp/public_regulated_data_types/reg/udral/service/battery/Error.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::std == 3161622713,
              "/tmp/public_regulated_data_types/reg/udral/service/battery/Error.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::variable_array_type_template == 0,
              "/tmp/public_regulated_data_types/reg/udral/service/battery/Error.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::variable_array_type_include == 0,
              "/tmp/public_regulated_data_types/reg/udral/service/battery/Error.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::cast_format == 1407868567,
              "/tmp/public_regulated_data_types/reg/udral/service/battery/Error.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::enable_allocator_support == 0,
              "/tmp/public_regulated_data_types/reg/udral/service/battery/Error.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );

// +-------------------------------------------------------------------------------------------------------------------+
// | This implementation uses a minimal variant implementation that is forward-compatible with the same types generated
// | using the C++17 variant type in the standard library. This minimal variant implementation is limited in the
// | following ways:
// |    1. Supports only emplace and get_if.
// |    2. Only support access by index (see the IndexOf property of the VariantType).
// |    3. This object cannot be copy-constructed nor move-constructed.
// |    4. There is an O(n) lookup in this object's destructor and in the
// |       emplace method.
// |
// | The C++17 version of this object will define the same emplace and get_if wrappers so code written against this
// | version will be fully-forward compatible, but the C++17 version exposes the variant type directly allowing full
// | use of that standard library feature – it is therefore not backwards-compatible.
// +-------------------------------------------------------------------------------------------------------------------+
///
/// Generic error codes reported by the service provider.
/// An error is reported when the corresponding parameter exceeds its safe operating area (SOA) as defined by the
/// vendor;
/// see https://en.wikipedia.org/wiki/Safe_operating_area.
/// As long as an error condition is present, the service health should not be NOMINAL.
/// If there are multiple error conditions present, the most severe one should be reported. The severity ordering
/// is implementation-defined. Barring special requirements, it is recommended to give preference to errors whose
/// code is smaller (e.g., BAD_BATTERY trumps TEMPERATURE_COLD).
///
struct Error_0_1 final
{
    // +---------------------------------------------------------------------------------------------------------------+
    // | PORT IDENTIFIERS
    // +---------------------------------------------------------------------------------------------------------------+
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

    static constexpr std::size_t EXTENT_BYTES                    =1UL;
    static constexpr std::size_t SERIALIZATION_BUFFER_SIZE_BYTES =1UL;
    static_assert(EXTENT_BYTES >= SERIALIZATION_BUFFER_SIZE_BYTES, "Internal constraint violation");
    static_assert(EXTENT_BYTES < (std::numeric_limits<std::size_t>::max() /8U), "This message is too large to be handled by current types!");

    // +---------------------------------------------------------------------------------------------------------------+
    // | CONSTANTS
    // +---------------------------------------------------------------------------------------------------------------+
    ///
    /// Normal operation.
    ///
    static constexpr std::uint8_t NONE = 0U;
    ///
    /// The battery should not be used anymore. Detection criteria are implementation-defined.
    ///
    static constexpr std::uint8_t BAD_BATTERY = 10U;
    ///
    /// The battery requires offline maintenance.
    ///
    static constexpr std::uint8_t NEEDS_SERVICE = 11U;
    ///
    /// An internal error in the battery management system, not related to the battery itself.
    ///
    static constexpr std::uint8_t BMS_ERROR = 20U;
    ///
    /// The battery/BMS/node/service configuration is missing or invalid.
    ///
    static constexpr std::uint8_t CONFIGURATION = 30U;
    ///
    /// The battery is discharged beyond the design limits and may have incurred damage.
    ///
    static constexpr std::uint8_t OVERDISCHARGE = 50U;
    ///
    /// The charge or discharge rate exceeds the safe operating limits.
    ///
    static constexpr std::uint8_t OVERLOAD = 51U;

    static constexpr std::uint8_t CELL_OVERVOLTAGE = 60U;
    ///
    /// Voltage of one of the battery cells exceeds its SOA.
    ///
    static constexpr std::uint8_t CELL_UNDERVOLTAGE = 61U;
    ///
    /// The sum of cell voltages is far from the total pack voltage.
    /// The threshold is implementation-defined.
    ///
    static constexpr std::uint8_t CELL_COUNT = 62U;

    static constexpr std::uint8_t TEMPERATURE_HOT = 100U;
    ///
    /// At least one cell is above/below the temperature SOA.
    ///
    static constexpr std::uint8_t TEMPERATURE_COLD = 101U;

    // +----------------------------------------------------------------------+
    // | FIELDS
    // +----------------------------------------------------------------------+

    std::uint8_t value;

    nunavut::support::SerializeResult
    serialize(nunavut::support::bitspan out_buffer) const
    {
        const std::size_t capacity_bits = out_buffer.size();
        if ((static_cast<std::size_t>(capacity_bits)) < 8UL)
        {
            return -nunavut::support::Error::SERIALIZATION_BUFFER_TOO_SMALL;
        }
        // Notice that fields that are not an integer number of bytes long may overrun the space allocated for them
        // in the serialization buffer up to the next byte boundary. This is by design and is guaranteed to be safe.
        NUNAVUT_ASSERT(out_buffer.offset_alings_to_byte());
        {   // saturated uint8 value
            NUNAVUT_ASSERT(out_buffer.offset_alings_to_byte());
            NUNAVUT_ASSERT(8ULL <= out_buffer.size());
            // Saturation code not emitted -- native representation matches the serialized representation.
            const auto _result3_ = out_buffer.setUxx(value, 8U);
            if(not _result3_){
                return -_result3_.error();
            }
            out_buffer.add_offset(8U);
        }
        {
            const auto _result0_ = out_buffer.padAndMoveToAlignment(8U);
            if(not _result0_){
                return -_result0_.error();
            }
        }
        // It is assumed that we know the exact type of the serialized entity, hence we expect the size to match.
        NUNAVUT_ASSERT(out_buffer.offset() == 8ULL);
        NUNAVUT_ASSERT(out_buffer.offset_alings_to_byte());
        return out_buffer.offset_bytes_ceil();
    }

    nunavut::support::SerializeResult
    deserialize(nunavut::support::const_bitspan in_buffer)
    {
        const auto capacity_bits = in_buffer.size();
        // saturated uint8 value
        NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
        value = in_buffer.getU8(8U);
        in_buffer.add_offset(8U);
        in_buffer.align_offset_to<8U>();
        NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
        auto _bits_got_ = std::min<std::size_t>(in_buffer.offset(), capacity_bits);
        NUNAVUT_ASSERT(capacity_bits >= _bits_got_);
        return { static_cast<std::size_t>(_bits_got_ / 8U) };
    }
};

} // namespace battery
} // namespace service
} // namespace udral
} // namespace reg

#endif // REG_UDRAL_SERVICE_BATTERY_ERROR_0_1_HPP_INCLUDED