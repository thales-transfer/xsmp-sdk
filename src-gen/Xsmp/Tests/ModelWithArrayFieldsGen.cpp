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
// File Name    : ModelWithArrayFieldsGen.cpp
// Generated by : XsmpSdkGenerator-1.1.2
// -----------------------------------------------------------------------------
/// @file Xsmp/Tests/ModelWithArrayFieldsGen.cpp
// This file is auto-generated, Do not edit otherwise your changes will be lost

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/IPublication.h>
#include <Xsmp/ComponentHelper.h>
#include <Xsmp/Tests/ModelWithArrayFields.h>

namespace Xsmp::Tests {
//--------------------------- Constructor -------------------------
ModelWithArrayFieldsGen::ModelWithArrayFieldsGen(::Smp::String8 name,
                                                 ::Smp::String8 description,
                                                 ::Smp::IComposite *parent,
                                                 ::Smp::ISimulator *simulator)
    : // Base class initialization
      ::Xsmp::Model(name, description, parent, simulator),
      // boolean initialization
      boolean{},
      // char8 initialization
      char8{},
      // enum1 initialization
      enum1{},
      // string1 initialization
      string1{},
      // float1 initialization
      float1{},
      // integer1 initialization
      integer1{},
      // booleanInput initialization
      booleanInput{},
      // char8Input initialization
      char8Input{},
      // enum1Input initialization
      enum1Input{},
      // string1Input initialization
      string1Input{},
      // float1Input initialization
      float1Input{},
      // integer1Input initialization
      integer1Input{},
      // booleanTransient initialization
      booleanTransient{},
      // char8Transient initialization
      char8Transient{},
      // enum1Transient initialization
      enum1Transient{},
      // string1Transient initialization
      string1Transient{},
      // float1Transient initialization
      float1Transient{},
      // integer1Transient initialization
      integer1Transient{},
      // booleanOutput initialization
      booleanOutput{simulator->GetTypeRegistry(),
                    ::Xsmp::Tests::Types::Uuid_BoolArray,
                    "booleanOutput",
                    "",
                    this,
                    ::Smp::ViewKind::VK_None},
      // char8Output initialization
      char8Output{simulator->GetTypeRegistry(),
                  ::Xsmp::Tests::Types::Uuid_Char8Array,
                  "char8Output",
                  "",
                  this,
                  ::Smp::ViewKind::VK_None},
      // enum1Output initialization
      enum1Output{simulator->GetTypeRegistry(),
                  ::Xsmp::Tests::Types::Uuid_Enum1Array,
                  "enum1Output",
                  "",
                  this,
                  ::Smp::ViewKind::VK_None},
      // string1Output initialization
      string1Output{simulator->GetTypeRegistry(),
                    ::Xsmp::Tests::Types::Uuid_String1Array,
                    "string1Output",
                    "",
                    this,
                    ::Smp::ViewKind::VK_None},
      // float1Output initialization
      float1Output{simulator->GetTypeRegistry(),
                   ::Xsmp::Tests::Types::Uuid_Float1Array,
                   "float1Output",
                   "",
                   this,
                   ::Smp::ViewKind::VK_None},
      // integer1Output initialization
      integer1Output{simulator->GetTypeRegistry(),
                     ::Xsmp::Tests::Types::Uuid_Integer1Array,
                     "integer1Output",
                     "",
                     this,
                     ::Smp::ViewKind::VK_None},
      // booleanForcible initialization
      booleanForcible{simulator->GetTypeRegistry(),
                      ::Xsmp::Tests::Types::Uuid_BoolArray,
                      "booleanForcible",
                      "",
                      this,
                      ::Smp::ViewKind::VK_None},
      // char8Forcible initialization
      char8Forcible{simulator->GetTypeRegistry(),
                    ::Xsmp::Tests::Types::Uuid_Char8Array,
                    "char8Forcible",
                    "",
                    this,
                    ::Smp::ViewKind::VK_None},
      // enum1Forcible initialization
      enum1Forcible{simulator->GetTypeRegistry(),
                    ::Xsmp::Tests::Types::Uuid_Enum1Array,
                    "enum1Forcible",
                    "",
                    this,
                    ::Smp::ViewKind::VK_None},
      // string1Forcible initialization
      string1Forcible{simulator->GetTypeRegistry(),
                      ::Xsmp::Tests::Types::Uuid_String1Array,
                      "string1Forcible",
                      "",
                      this,
                      ::Smp::ViewKind::VK_None},
      // float1Forcible initialization
      float1Forcible{simulator->GetTypeRegistry(),
                     ::Xsmp::Tests::Types::Uuid_Float1Array,
                     "float1Forcible",
                     "",
                     this,
                     ::Smp::ViewKind::VK_None},
      // integer1Forcible initialization
      integer1Forcible{simulator->GetTypeRegistry(),
                       ::Xsmp::Tests::Types::Uuid_Integer1Array,
                       "integer1Forcible",
                       "",
                       this,
                       ::Smp::ViewKind::VK_None},
      // booleanFailure initialization
      booleanFailure{simulator->GetTypeRegistry(),
                     ::Xsmp::Tests::Types::Uuid_BoolArray,
                     "booleanFailure",
                     "",
                     this,
                     ::Smp::ViewKind::VK_None},
      // char8Failure initialization
      char8Failure{simulator->GetTypeRegistry(),
                   ::Xsmp::Tests::Types::Uuid_Char8Array,
                   "char8Failure",
                   "",
                   this,
                   ::Smp::ViewKind::VK_None},
      // enum1Failure initialization
      enum1Failure{simulator->GetTypeRegistry(),
                   ::Xsmp::Tests::Types::Uuid_Enum1Array,
                   "enum1Failure",
                   "",
                   this,
                   ::Smp::ViewKind::VK_None},
      // string1Failure initialization
      string1Failure{simulator->GetTypeRegistry(),
                     ::Xsmp::Tests::Types::Uuid_String1Array,
                     "string1Failure",
                     "",
                     this,
                     ::Smp::ViewKind::VK_None},
      // float1Failure initialization
      float1Failure{simulator->GetTypeRegistry(),
                    ::Xsmp::Tests::Types::Uuid_Float1Array,
                    "float1Failure",
                    "",
                    this,
                    ::Smp::ViewKind::VK_None},
      // integer1Failure initialization
      integer1Failure{simulator->GetTypeRegistry(),
                      ::Xsmp::Tests::Types::Uuid_Integer1Array,
                      "integer1Failure",
                      "",
                      this,
                      ::Smp::ViewKind::VK_None},
      // booleanAll initialization
      booleanAll{simulator->GetTypeRegistry(),
                 ::Xsmp::Tests::Types::Uuid_BoolArray,
                 "booleanAll",
                 "",
                 this,
                 ::Smp::ViewKind::VK_None},
      // char8All initialization
      char8All{simulator->GetTypeRegistry(),
               ::Xsmp::Tests::Types::Uuid_Char8Array,
               "char8All",
               "",
               this,
               ::Smp::ViewKind::VK_None},
      // enum1All initialization
      enum1All{simulator->GetTypeRegistry(),
               ::Xsmp::Tests::Types::Uuid_Enum1Array,
               "enum1All",
               "",
               this,
               ::Smp::ViewKind::VK_None},
      // string1All initialization
      string1All{simulator->GetTypeRegistry(),
                 ::Xsmp::Tests::Types::Uuid_String1Array,
                 "string1All",
                 "",
                 this,
                 ::Smp::ViewKind::VK_None},
      // float1All initialization
      float1All{simulator->GetTypeRegistry(),
                ::Xsmp::Tests::Types::Uuid_Float1Array,
                "float1All",
                "",
                this,
                ::Smp::ViewKind::VK_None},
      // integer1All initialization
      integer1All{simulator->GetTypeRegistry(),
                  ::Xsmp::Tests::Types::Uuid_Integer1Array,
                  "integer1All",
                  "",
                  this,
                  ::Smp::ViewKind::VK_None} {}

void ModelWithArrayFieldsGen::Publish(::Smp::IPublication *receiver) {
  // Call parent class implementation first
  ::Xsmp::Model::Publish(receiver);

  // Publish field boolean
  receiver->PublishField("boolean", "", &boolean,
                         ::Xsmp::Tests::Types::Uuid_BoolArray,
                         ::Smp::ViewKind::VK_None, true, false, false);
  // Publish field char8
  receiver->PublishField("char8", "", &char8,
                         ::Xsmp::Tests::Types::Uuid_Char8Array,
                         ::Smp::ViewKind::VK_None, true, false, false);
  // Publish field enum1
  receiver->PublishField("enum1", "", &enum1,
                         ::Xsmp::Tests::Types::Uuid_Enum1Array,
                         ::Smp::ViewKind::VK_None, true, false, false);
  // Publish field string1
  receiver->PublishField("string1", "", &string1,
                         ::Xsmp::Tests::Types::Uuid_String1Array,
                         ::Smp::ViewKind::VK_None, true, false, false);
  // Publish field float1
  receiver->PublishField("float1", "", &float1,
                         ::Xsmp::Tests::Types::Uuid_Float1Array,
                         ::Smp::ViewKind::VK_None, true, false, false);
  // Publish field integer1
  receiver->PublishField("integer1", "", &integer1,
                         ::Xsmp::Tests::Types::Uuid_Integer1Array,
                         ::Smp::ViewKind::VK_None, true, false, false);
  // Publish field booleanInput
  receiver->PublishField("booleanInput", "", &booleanInput,
                         ::Xsmp::Tests::Types::Uuid_BoolArray,
                         ::Smp::ViewKind::VK_None, true, true, false);
  // Publish field char8Input
  receiver->PublishField("char8Input", "", &char8Input,
                         ::Xsmp::Tests::Types::Uuid_Char8Array,
                         ::Smp::ViewKind::VK_None, true, true, false);
  // Publish field enum1Input
  receiver->PublishField("enum1Input", "", &enum1Input,
                         ::Xsmp::Tests::Types::Uuid_Enum1Array,
                         ::Smp::ViewKind::VK_None, true, true, false);
  // Publish field string1Input
  receiver->PublishField("string1Input", "", &string1Input,
                         ::Xsmp::Tests::Types::Uuid_String1Array,
                         ::Smp::ViewKind::VK_None, true, true, false);
  // Publish field float1Input
  receiver->PublishField("float1Input", "", &float1Input,
                         ::Xsmp::Tests::Types::Uuid_Float1Array,
                         ::Smp::ViewKind::VK_None, true, true, false);
  // Publish field integer1Input
  receiver->PublishField("integer1Input", "", &integer1Input,
                         ::Xsmp::Tests::Types::Uuid_Integer1Array,
                         ::Smp::ViewKind::VK_None, true, true, false);
  // Publish field booleanTransient
  receiver->PublishField("booleanTransient", "", &booleanTransient,
                         ::Xsmp::Tests::Types::Uuid_BoolArray,
                         ::Smp::ViewKind::VK_None, false, false, false);
  // Publish field char8Transient
  receiver->PublishField("char8Transient", "", &char8Transient,
                         ::Xsmp::Tests::Types::Uuid_Char8Array,
                         ::Smp::ViewKind::VK_None, false, false, false);
  // Publish field enum1Transient
  receiver->PublishField("enum1Transient", "", &enum1Transient,
                         ::Xsmp::Tests::Types::Uuid_Enum1Array,
                         ::Smp::ViewKind::VK_None, false, false, false);
  // Publish field string1Transient
  receiver->PublishField("string1Transient", "", &string1Transient,
                         ::Xsmp::Tests::Types::Uuid_String1Array,
                         ::Smp::ViewKind::VK_None, false, false, false);
  // Publish field float1Transient
  receiver->PublishField("float1Transient", "", &float1Transient,
                         ::Xsmp::Tests::Types::Uuid_Float1Array,
                         ::Smp::ViewKind::VK_None, false, false, false);
  // Publish field integer1Transient
  receiver->PublishField("integer1Transient", "", &integer1Transient,
                         ::Xsmp::Tests::Types::Uuid_Integer1Array,
                         ::Smp::ViewKind::VK_None, false, false, false);
  // Publish field booleanOutput
  receiver->PublishField(&booleanOutput);
  // Publish field char8Output
  receiver->PublishField(&char8Output);
  // Publish field enum1Output
  receiver->PublishField(&enum1Output);
  // Publish field string1Output
  receiver->PublishField(&string1Output);
  // Publish field float1Output
  receiver->PublishField(&float1Output);
  // Publish field integer1Output
  receiver->PublishField(&integer1Output);
  // Publish field booleanForcible
  receiver->PublishField(&booleanForcible);
  // Publish field char8Forcible
  receiver->PublishField(&char8Forcible);
  // Publish field enum1Forcible
  receiver->PublishField(&enum1Forcible);
  // Publish field string1Forcible
  receiver->PublishField(&string1Forcible);
  // Publish field float1Forcible
  receiver->PublishField(&float1Forcible);
  // Publish field integer1Forcible
  receiver->PublishField(&integer1Forcible);
  // Publish field booleanFailure
  receiver->PublishField(&booleanFailure);
  // Publish field char8Failure
  receiver->PublishField(&char8Failure);
  // Publish field enum1Failure
  receiver->PublishField(&enum1Failure);
  // Publish field string1Failure
  receiver->PublishField(&string1Failure);
  // Publish field float1Failure
  receiver->PublishField(&float1Failure);
  // Publish field integer1Failure
  receiver->PublishField(&integer1Failure);
  // Publish field booleanAll
  receiver->PublishField(&booleanAll);
  // Publish field char8All
  receiver->PublishField(&char8All);
  // Publish field enum1All
  receiver->PublishField(&enum1All);
  // Publish field string1All
  receiver->PublishField(&string1All);
  // Publish field float1All
  receiver->PublishField(&float1All);
  // Publish field integer1All
  receiver->PublishField(&integer1All);
  // Call user DoPublish if any
  ::Xsmp::Component::Helper::Publish<::Xsmp::Tests::ModelWithArrayFields>(
      this, receiver);
}

void ModelWithArrayFieldsGen::Configure(
    ::Smp::Services::ILogger *logger,
    ::Smp::Services::ILinkRegistry *linkRegistry) {
  // Call parent implementation first
  ::Xsmp::Model::Configure(logger, linkRegistry);

  // Call user DoConfigure if any
  ::Xsmp::Component::Helper::Configure<::Xsmp::Tests::ModelWithArrayFields>(
      this, logger, linkRegistry);
}

void ModelWithArrayFieldsGen::Connect(::Smp::ISimulator *simulator) {
  // Call parent implementation first
  ::Xsmp::Model::Connect(simulator);

  // Call user DoConnect if any
  ::Xsmp::Component::Helper::Connect<::Xsmp::Tests::ModelWithArrayFields>(
      this, simulator);
}

void ModelWithArrayFieldsGen::Disconnect() {
  // Call user DoDisconnect if any
  ::Xsmp::Component::Helper::Disconnect<::Xsmp::Tests::ModelWithArrayFields>(
      this);

  // Call parent implementation last, to remove references to the Simulator and
  // its services
  ::Xsmp::Model::Disconnect();
}

const Smp::Uuid &ModelWithArrayFieldsGen::GetUuid() const {
  return Uuid_ModelWithArrayFields;
}
} // namespace Xsmp::Tests
