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
// File Name    : SimpleUInt16Array.h
// Generated by : XsmpSdkGenerator-1.1.3
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/SimpleUInt16Array.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_SIMPLEUINT16ARRAY_H_
#define XSMP_TESTS_TYPES_SIMPLEUINT16ARRAY_H_

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
using SimpleUInt16Array = ::Xsmp::Array<::Smp::UInt16, 3>::simple;

/// Universally unique identifier of type SimpleUInt16Array.
inline constexpr ::Smp::Uuid Uuid_SimpleUInt16Array{
    0x0e6111feU, 0x2db9U, 0x46c3U, 0xa5afU, 0x644462fc0ec1U};

void _Register_SimpleUInt16Array(::Smp::Publication::ITypeRegistry *registry);
} // namespace Xsmp::Tests::Types

#endif // XSMP_TESTS_TYPES_SIMPLEUINT16ARRAY_H_
