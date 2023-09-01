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
// File Name    : XsmpLoggerGen.cpp
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Services/XsmpLoggerGen.cpp
// This file is auto-generated, Do not edit otherwise your changes will be lost

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include "Smp/IPublication.h"
#include "Xsmp/ComponentHelper.h"
#include "Xsmp/Services/XsmpLogger.h"

namespace Xsmp {
namespace Services {
//--------------------------- Constructor -------------------------
XsmpLoggerGen::XsmpLoggerGen(::Smp::String8 name, ::Smp::String8 description,
        ::Smp::IObject *parent, ::Smp::ISimulator *simulator) :
        // Base class initialization
        ::Xsmp::Service(name, description, parent, simulator) {
}

/// Virtual destructor that is called by inherited classes as well.
XsmpLoggerGen::~XsmpLoggerGen() {
}

void XsmpLoggerGen::Publish(::Smp::IPublication *receiver) {
    // Call parent class implementation first
    ::Xsmp::Service::Publish(receiver);

    // Call user DoPublish if any
    ::Xsmp::Component::Helper::Publish < ::Xsmp::Services::XsmpLogger
            > (this, receiver);
}

void XsmpLoggerGen::Configure(::Smp::Services::ILogger *logger,
        ::Smp::Services::ILinkRegistry *linkRegistry) {
    // Call parent implementation first
    ::Xsmp::Service::Configure(logger, linkRegistry);

    // Call user DoConfigure if any
    ::Xsmp::Component::Helper::Configure < ::Xsmp::Services::XsmpLogger
            > (this, logger, linkRegistry);
}

void XsmpLoggerGen::Connect(::Smp::ISimulator *simulator) {
    // Call parent implementation first
    ::Xsmp::Service::Connect(simulator);

    // Call user DoConnect if any
    ::Xsmp::Component::Helper::Connect < ::Xsmp::Services::XsmpLogger
            > (this, simulator);
}

void XsmpLoggerGen::Disconnect() {
    // Call user DoDisconnect if any
    ::Xsmp::Component::Helper::Disconnect < ::Xsmp::Services::XsmpLogger
            > (this);

    // Call parent implementation last, to remove references to the Simulator and its services
    ::Xsmp::Service::Disconnect();
}

const Smp::Uuid& XsmpLoggerGen::GetUuid() const {
    return Uuid_XsmpLogger;
}
} // namespace Services
} // namespace Xsmp
