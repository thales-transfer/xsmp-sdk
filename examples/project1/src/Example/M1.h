// Copyright 2023 YOUR ORGANIZATION. All rights reserved.
// 
// YOUR NOTICE

// -----------------------------------------------------------------------------
// File Name    : M1.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Example/M1.h

#ifndef EXAMPLE_M1_H_
#define EXAMPLE_M1_H_

// Include the generated header file
#include "Example/M1Gen.h"

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Example {
class M1: public M1Gen {
public:
    /// Re-use parent constructors
    using M1Gen::M1Gen;

    /// Virtual destructor to release memory.
    ~M1() noexcept override = default;

private:
    // M1Gen call DoPublish/DoConfigure/DoConnect/DoDisconnect
    friend class ::Example::M1Gen;

    /// Publish fields, operations and properties of the model.
    /// @param receiver Publication receiver.
    void DoPublish(::Smp::IPublication *receiver);

    /// Request for configuration.
    /// @param logger Logger to use for log messages during Configure().
    /// @param linkRegistry Link Registry to use for registration of
    ///         links created during Configure() or later.
    void DoConfigure(::Smp::Services::ILogger *logger,
            ::Smp::Services::ILinkRegistry *linkRegistry);

    /// Connect model to simulator.
    /// @param simulator Simulation Environment that hosts the model.
    ///
    void DoConnect(::Smp::ISimulator *simulator);

    /// Disconnect model to simulator.
    /// @throws Smp::InvalidComponentState
    void DoDisconnect();

};
} // namespace Example

#endif // EXAMPLE_M1_H_
