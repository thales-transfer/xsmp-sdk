// Copyright 2023-2024 THALES ALENIA SPACE FRANCE. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// -----------------------------------------------------------------------------
// File Name    : SimpleFloat1Array.h
// Generated by : XsmpSdkGenerator-1.1.3
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/SimpleFloat1Array.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_SIMPLEFLOAT1ARRAY_H_
#define XSMP_TESTS_TYPES_SIMPLEFLOAT1ARRAY_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/PrimitiveTypes.h>
#include <Smp/Publication/ITypeRegistry.h>
#include <Xsmp/Array.h>
#include <Xsmp/Tests/Types/Float1.h>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests::Types {
using SimpleFloat1Array =
    ::Xsmp::Array<::Xsmp::Tests::Types::Float1, 3>::simple;

/// Universally unique identifier of type SimpleFloat1Array.
inline constexpr ::Smp::Uuid Uuid_SimpleFloat1Array{
    0xa0189dc0U, 0xbff8U, 0x4326U, 0x8e23U, 0xf68cc66421a7U};

void _Register_SimpleFloat1Array(::Smp::Publication::ITypeRegistry *registry);
} // namespace Xsmp::Tests::Types

#endif // XSMP_TESTS_TYPES_SIMPLEFLOAT1ARRAY_H_
