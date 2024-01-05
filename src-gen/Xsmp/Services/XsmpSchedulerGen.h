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
// File Name    : XsmpSchedulerGen.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Xsmp/Services/XsmpSchedulerGen.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef XSMP_SERVICES_XSMPSCHEDULERGEN_H_
#define XSMP_SERVICES_XSMPSCHEDULERGEN_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/IPersist.h>
#include <Smp/ISimulator.h>
#include <Smp/Publication/ITypeRegistry.h>
#include <Smp/Services/IScheduler.h>
#include <Xsmp/EntryPoint.h>
#include <Xsmp/EntryPointPublisher.h>
#include <Xsmp/Service.h>
#include <type_traits>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Xsmp::Services {
// forward declaration of user class
class XsmpScheduler;
/// Universally unique identifier of type XsmpScheduler.
static constexpr ::Smp::Uuid Uuid_XsmpScheduler { 0x98df2ec3U, 0x7f94U, 0x4a49U,
        0x8c95U, 0x3da0b3525ae5U };

class XsmpSchedulerGen: public ::Xsmp::Service,
        public virtual ::Smp::Services::IScheduler,
        public virtual ::Smp::IPersist,
        public virtual ::Xsmp::EntryPointPublisher {

    friend class ::Xsmp::Services::XsmpScheduler;

public:
    // ------------------------------------------------------------------------------------
    // -------------------------- Constructors/Destructor --------------------------
    // ------------------------------------------------------------------------------------

    /// Constructor setting name, description, parent and simulator.
    /// @param name Name of new model instance.
    /// @param description Description of new model instance.
    /// @param parent Parent of new model instance.
    /// @param simulator The simulator instance.
    XsmpSchedulerGen(::Smp::String8 name, ::Smp::String8 description,
            ::Smp::IObject *parent, ::Smp::ISimulator *simulator);
    /// deleted copy constructor
    XsmpSchedulerGen(const XsmpSchedulerGen&) = delete;
    /// deleted move constructor
    XsmpSchedulerGen(XsmpSchedulerGen&&) = delete;
    /// deleted copy assignment
    XsmpSchedulerGen& operator=(const XsmpSchedulerGen&) = delete;
    /// deleted move assignment
    XsmpSchedulerGen& operator=(XsmpSchedulerGen&&) = delete;

    /// Virtual destructor to release memory.
    ~XsmpSchedulerGen() override;

    // ----------------------------------------------------------------------------------
    // -------------------------------- IComponent ---------------------------------
    // ----------------------------------------------------------------------------------

    /// Publish fields, operations and properties of the model.
    /// @param receiver Publication receiver.
    void Publish(::Smp::IPublication *receiver) override;

    /// Request for configuration.
    /// @param logger Logger to use for log messages during Configure().
    /// @param linkRegistry Link Registry to use for registration of
    ///         links created during Configure() or later.
    void Configure(::Smp::Services::ILogger *logger,
            ::Smp::Services::ILinkRegistry *linkRegistry) override;

    /// Connect model to simulator.
    /// @param simulator Simulation Environment that hosts the model.
    ///
    void Connect(::Smp::ISimulator *simulator) override;

    /// Disconnect model to simulator.
    /// @throws Smp::InvalidComponentState
    void Disconnect() override;

    /// Return the Universally Unique Identifier of the Model.
    /// @return Universally Unique Identifier of the Model.
    const Smp::Uuid& GetUuid() const override;

    ::Xsmp::EntryPoint HoldEvent;
    virtual void _HoldEvent() = 0;
    ::Xsmp::EntryPoint EnterExecuting;
    virtual void _EnterExecuting() = 0;
    ::Xsmp::EntryPoint LeaveExecuting;
    virtual void _LeaveExecuting() = 0;
};
} // namespace Xsmp::Services

#endif // XSMP_SERVICES_XSMPSCHEDULERGEN_H_
