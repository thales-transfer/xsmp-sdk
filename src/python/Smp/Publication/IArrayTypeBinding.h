// Copyright 2024 THALES ALENIA SPACE FRANCE. All rights reserved.
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

#ifndef PYTHON_SMP_PUBLICATION_IARRAYTYPE_H_
#define PYTHON_SMP_PUBLICATION_IARRAYTYPE_H_

#include <python/ecss_smp.h>
#include <Smp/Publication/IArrayType.h>

inline void RegisterIArrayType(const py::module_ &m) {
    py::class_<::Smp::Publication::IArrayType, ::Smp::Publication::IType>(m,
            "IArrayType", py::multiple_inheritance())

    .def("GetSize", &::Smp::Publication::IArrayType::GetSize,
            "Get the size (number of array items) of the array type.")

    .def("GetItemType", &::Smp::Publication::IArrayType::GetItemType,
            "Get the type of each array item.",
            py::return_value_policy::reference)

    .doc() = "This interface defines a user defined array type.";
}

#endif // PYTHON_SMP_PUBLICATION_IARRAYTYPE_H_
