// Copyright 2023 THALES ALENIA SPACE FRANCE. All rights reserved.
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
// File Name    : SimpleInt32Array.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/Types/SimpleInt32Array.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_TESTS_TYPES_SIMPLEINT32ARRAY_H_
#define XSMP_TESTS_TYPES_SIMPLEINT32ARRAY_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Smp/PrimitiveTypes.h"
#include "Smp/Publication/ITypeRegistry.h"
#include "Xsmp/Array.h"

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp {
namespace Tests {
namespace Types {
using SimpleInt32Array = ::Xsmp::Array<::Smp::Int32, 3>::simple;

/// Universally unique identifier of type SimpleInt32Array.
static constexpr ::Smp::Uuid Uuid_SimpleInt32Array { 0xc236c297U, 0x5e6bU,
        0x426fU, 0x9c4bU, 0xeb7c0924112fU };

void _Register_SimpleInt32Array(::Smp::Publication::ITypeRegistry *registry);
} // namespace Types
} // namespace Tests
} // namespace Xsmp

#endif // XSMP_TESTS_TYPES_SIMPLEINT32ARRAY_H_
