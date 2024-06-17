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
// File Name    : UInt32Array.h
// Generated by : XsmpSdkGenerator-1.1.2
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/UInt32Array.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_UINT32ARRAY_H_
#define XSMP_TESTS_TYPES_UINT32ARRAY_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/PrimitiveTypes.h>
#include <Smp/Publication/ITypeRegistry.h>
#include <Xsmp/Array.h>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests::Types {
using UInt32Array = ::Xsmp::Array<::Smp::UInt32, 3>;

/// Universally unique identifier of type UInt32Array.
inline constexpr ::Smp::Uuid Uuid_UInt32Array{0xc3d5fac9U, 0x0739U, 0x42a4U,
                                              0xb837U, 0xa8a8d1c3a8f2U};

void _Register_UInt32Array(::Smp::Publication::ITypeRegistry *registry);
} // namespace Xsmp::Tests::Types

#endif // XSMP_TESTS_TYPES_UINT32ARRAY_H_
