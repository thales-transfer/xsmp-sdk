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
// File Name    : XsmpLinkRegistryGen.cpp
// Generated by : XsmpSdkGenerator-1.1.3
// -----------------------------------------------------------------------------
/// @file Xsmp/Services/XsmpLinkRegistryGen.cpp
// This file is auto-generated, Do not edit otherwise your changes will be lost

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/IPublication.h>
#include <Xsmp/ComponentHelper.h>
#include <Xsmp/Services/XsmpLinkRegistry.h>

namespace Xsmp::Services {
//--------------------------- Constructor -------------------------
XsmpLinkRegistryGen::XsmpLinkRegistryGen(::Smp::String8 name,
                                         ::Smp::String8 description,
                                         ::Smp::IComposite *parent,
                                         ::Smp::ISimulator *simulator)
    : // Base class initialization
      ::Xsmp::Service(name, description, parent, simulator) {}

void XsmpLinkRegistryGen::Publish(::Smp::IPublication *receiver) {
  // Call parent class implementation first
  ::Xsmp::Service::Publish(receiver);

  // Call user DoPublish if any
  ::Xsmp::Component::Helper::Publish<::Xsmp::Services::XsmpLinkRegistry>(
      this, receiver);
}

void XsmpLinkRegistryGen::Configure(
    ::Smp::Services::ILogger *logger,
    ::Smp::Services::ILinkRegistry *linkRegistry) {
  // Call parent implementation first
  ::Xsmp::Service::Configure(logger, linkRegistry);

  // Call user DoConfigure if any
  ::Xsmp::Component::Helper::Configure<::Xsmp::Services::XsmpLinkRegistry>(
      this, logger, linkRegistry);
}

void XsmpLinkRegistryGen::Connect(::Smp::ISimulator *simulator) {
  // Call parent implementation first
  ::Xsmp::Service::Connect(simulator);

  // Call user DoConnect if any
  ::Xsmp::Component::Helper::Connect<::Xsmp::Services::XsmpLinkRegistry>(
      this, simulator);
}

void XsmpLinkRegistryGen::Disconnect() {
  // Call user DoDisconnect if any
  ::Xsmp::Component::Helper::Disconnect<::Xsmp::Services::XsmpLinkRegistry>(
      this);

  // Call parent implementation last, to remove references to the Simulator and
  // its services
  ::Xsmp::Service::Disconnect();
}

const Smp::Uuid &XsmpLinkRegistryGen::GetUuid() const {
  return Uuid_XsmpLinkRegistry;
}
} // namespace Xsmp::Services
