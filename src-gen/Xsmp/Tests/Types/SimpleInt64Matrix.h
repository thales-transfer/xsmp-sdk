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
// File Name    : SimpleInt64Matrix.h
// Generated by : XsmpSdkGenerator-1.1.2
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/SimpleInt64Matrix.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_SIMPLEINT64MATRIX_H_
#define XSMP_TESTS_TYPES_SIMPLEINT64MATRIX_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/PrimitiveTypes.h>
#include <Smp/Publication/ITypeRegistry.h>
#include <Xsmp/Array.h>
#include <Xsmp/Tests/Types/SimpleInt64Array.h>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Tests::Types {
using SimpleInt64Matrix =
    ::Xsmp::Array<::Xsmp::Tests::Types::SimpleInt64Array, 3>;

/// Universally unique identifier of type SimpleInt64Matrix.
inline constexpr ::Smp::Uuid Uuid_SimpleInt64Matrix{
    0xd2ad2c28U, 0x6398U, 0x4a1eU, 0x8b7dU, 0xff3d8a91223eU};

void _Register_SimpleInt64Matrix(::Smp::Publication::ITypeRegistry *registry);
} // namespace Xsmp::Tests::Types

#endif // XSMP_TESTS_TYPES_SIMPLEINT64MATRIX_H_
