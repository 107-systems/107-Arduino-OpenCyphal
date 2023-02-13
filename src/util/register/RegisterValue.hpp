/**
 * This software is distributed under the terms of the MIT License.
 * Copyright (c) 2020-2023 LXRobotics.
 * Author: Alexander Entinger <alexander.entinger@lxrobotics.com>
 * Contributors: https://github.com/107-systems/107-Arduino-Cyphal/graphs/contributors.
 */

#ifndef CYPHAL_REGISTERVALUE_HPP
#define CYPHAL_REGISTERVALUE_HPP

/**************************************************************************************
 * INCLUDES
 **************************************************************************************/

#include <type_traits>

#include "../../DSDL_Types.h"

/**************************************************************************************
 * NAMESPACE
 **************************************************************************************/

namespace registry
{

/**************************************************************************************
 * STRUCT DECLARATION
 **************************************************************************************/

class RegisterValue
{
private:
  using DSDL_Value = uavcan::_register::Value_1_0;
  DSDL_Value _value;

public:
  DSDL_Value const & raw() { return _value; };

  /* Assigns a numerically typed array value (ints, floats, bools, etc.) from multiple scalar arguments.
   * Dimensionality and type correctness is checked at compile time, so the method cannot fail.
   */
  template <typename... Args>
  auto set(Args&&... args)
  -> std::enable_if_t<(sizeof...(Args) > 0) && std::is_arithmetic_v<std::decay_t<std::common_type_t<Args...>>>>
  {
    using T = std::decay_t<std::common_type_t<Args...>>;
    this->set(std::array<T, sizeof...(Args)>{{static_cast<T>(args)...}});
  }

  /* Assigns a numerically typed array value (ints, floats, bools, etc.) from std::array<>.
   * Dimensionality and type correctness is checked at compile time, so the method cannot fail.
   */
  template<typename T, std::size_t N>
  auto set(const std::array<T, N> &ar) -> std::enable_if_t<std::is_arithmetic_v<T> && !std::is_same_v<T, bool>>
  {
    if constexpr (std::is_same_v<T, std::int64_t>) {
      uavcan::primitive::array::Integer64_1_0 int_ar;
      std::copy_n(ar.begin(), std::min(N, int_ar.value.max_size()), std::back_inserter(int_ar.value));
      _value.union_value.emplace<DSDL_Value::VariantType::IndexOf::integer64>(int_ar);
    }
    else if constexpr (std::is_same_v<T, std::int32_t>) {
      uavcan::primitive::array::Integer32_1_0 int_ar;
      std::copy_n(ar.begin(), std::min(N, int_ar.value.max_size()), std::back_inserter(int_ar.value));
      _value.union_value.emplace<DSDL_Value::VariantType::IndexOf::integer32>(int_ar);
    }
    else if constexpr (std::is_same_v<T, std::int16_t>) {
      uavcan::primitive::array::Integer16_1_0 int_ar;
      std::copy_n(ar.begin(), std::min(N, int_ar.value.max_size()), std::back_inserter(int_ar.value));
      _value.union_value.emplace<DSDL_Value::VariantType::IndexOf::integer16>(int_ar);
    }
    else if constexpr (std::is_same_v<T, std::int8_t>) {
      uavcan::primitive::array::Integer8_1_0 int_ar;
      std::copy_n(ar.begin(), std::min(N, int_ar.value.max_size()), std::back_inserter(int_ar.value));
      _value.union_value.emplace<DSDL_Value::VariantType::IndexOf::integer8>(int_ar);
    }
    else if constexpr (std::is_same_v<T, std::uint64_t>) {
      uavcan::primitive::array::Natural64_1_0 uint_ar;
      std::copy_n(ar.begin(), std::min(N, uint_ar.value.max_size()), std::back_inserter(uint_ar.value));
      _value.union_value.emplace<DSDL_Value::VariantType::IndexOf::natural64>(uint_ar);
    }
    else if constexpr (std::is_same_v<T, std::uint32_t>) {
      uavcan::primitive::array::Natural32_1_0 uint_ar;
      std::copy_n(ar.begin(), std::min(N, uint_ar.value.max_size()), std::back_inserter(uint_ar.value));
      _value.union_value.emplace<DSDL_Value::VariantType::IndexOf::natural32>(uint_ar);
    }
    else if constexpr (std::is_same_v<T, std::uint16_t>) {
      uavcan::primitive::array::Natural16_1_0 uint_ar;
      std::copy_n(ar.begin(), std::min(N, uint_ar.value.max_size()), std::back_inserter(uint_ar.value));
      _value.union_value.emplace<DSDL_Value::VariantType::IndexOf::natural16>(uint_ar);
    }
    else if constexpr (std::is_same_v<T, std::uint8_t>) {
      uavcan::primitive::array::Natural8_1_0 uint_ar;
      std::copy_n(ar.begin(), std::min(N, uint_ar.value.max_size()), std::back_inserter(uint_ar.value));
      _value.union_value.emplace<DSDL_Value::VariantType::IndexOf::natural8>(uint_ar);
    }
    else if constexpr (std::is_same_v<T, float>) {
      uavcan::primitive::array::Real32_1_0 flt_ar{ar};
      std::copy_n(ar.begin(), std::min(N, flt_ar.value.max_size()), std::back_inserter(flt_ar.value));
      _value.union_value.emplace<DSDL_Value::VariantType::IndexOf::real32>(flt_ar);
    }
    else if constexpr (std::is_same_v<T, double>) {
      uavcan::primitive::array::Real64_1_0 dbl_ar;
      std::copy_n(ar.begin(), std::min(N, dbl_ar.value.max_size()), std::back_inserter(dbl_ar.value));
      _value.union_value.emplace<DSDL_Value::VariantType::IndexOf::real64>(dbl_ar);
    }
    else
    {
      /* The expression we feed to static_assert() shall always evaluate to falsity.
       * We can't use a literal false here because the discarded constexpr if branch shall be valid.
       * Details at https://en.cppreference.com/w/cpp/language/if
       */
      static_assert(std::is_void_v<T>,
                    "No known conversion from supplied arguments to register value. "
                    "Consider using explicit type conversion?");
    }
  }

  /* Assigns a string value. Strings that are too long are silently truncated.
   */
  void set(std::string const & str)
  {
    uavcan::primitive::String_1_0 out;
    std::copy_n(str.begin(), std::min(str.length(), out.value.max_size()), std::back_inserter(out.value));
    _value.union_value.emplace<DSDL_Value::VariantType::IndexOf::string>(out);
  }
};

/**************************************************************************************
 * NAMESPACE
 **************************************************************************************/

} /* registry */

#endif /* CYPHAL_REGISTERVALUE_HPP */
