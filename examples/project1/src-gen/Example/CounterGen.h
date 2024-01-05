// Copyright 2023 YOUR ORGANIZATION. All rights reserved.
// 
// YOUR NOTICE

// -----------------------------------------------------------------------------
// File Name    : CounterGen.h
// Generated by : XsmpSdkGenerator-${qualifiedVersion}
// -----------------------------------------------------------------------------
/// @file Example/CounterGen.h
// This file is auto-generated, Do not edit otherwise your changes will be lost

#ifndef EXAMPLE_COUNTERGEN_H_
#define EXAMPLE_COUNTERGEN_H_

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Smp/IRequest.h>
#include <Smp/ISimulator.h>
#include <Smp/PrimitiveTypes.h>
#include <Smp/Publication/IPublishOperation.h>
#include <Smp/Publication/ITypeRegistry.h>
#include <Xsmp/EntryPoint.h>
#include <Xsmp/EntryPointPublisher.h>
#include <Xsmp/EventConsumer.h>
#include <Xsmp/EventSink.h>
#include <Xsmp/Model.h>
#include <functional>
#include <map>
#include <type_traits>

// ----------------------------------------------------------------------------
// ------------------------ Types and Interfaces ------------------------
// ----------------------------------------------------------------------------

namespace Example {
// forward declaration of user class
class Counter;
/// Universally unique identifier of type Counter.
static constexpr ::Smp::Uuid Uuid_Counter { 0x2386045dU, 0x5cffU, 0x46b5U,
        0xb6daU, 0x3ff6e2cfd792U };

class CounterGen: public ::Xsmp::Model,
        public virtual ::Xsmp::EventConsumer,
        public virtual ::Xsmp::EntryPointPublisher {

    friend class ::Example::Counter;

public:
    // ------------------------------------------------------------------------------------
    // -------------------------- Constructors/Destructor --------------------------
    // ------------------------------------------------------------------------------------

    /// Constructor setting name, description, parent and simulator.
    /// @param name Name of new model instance.
    /// @param description Description of new model instance.
    /// @param parent Parent of new model instance.
    /// @param simulator The simulator instance.
    CounterGen(::Smp::String8 name, ::Smp::String8 description,
            ::Smp::IObject *parent, ::Smp::ISimulator *simulator);
    /// deleted copy constructor
    CounterGen(const CounterGen&) = delete;
    /// deleted move constructor
    CounterGen(CounterGen&&) = delete;
    /// deleted copy assignment
    CounterGen& operator=(const CounterGen&) = delete;
    /// deleted move assignment
    CounterGen& operator=(CounterGen&&) = delete;

    /// Virtual destructor to release memory.
    ~CounterGen() override;

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

    // ----------------------------------------------------------------------------------
    // --------------------------- IDynamicInvocation ---------------------------
    // ----------------------------------------------------------------------------------
    using RequestHandlers = std::map<std::string, std::function<void(CounterGen*, ::Smp::IRequest*)>>;
    static RequestHandlers requestHandlers;
    static RequestHandlers InitRequestHandlers();

    /// Invoke the operation for the given request.
    /// @param request Request object to invoke.
    void Invoke(::Smp::IRequest *request) override;

private:
    virtual void ResetCount()=0;
public:
    ::Xsmp::EntryPoint IncrementCount;
    virtual void _IncrementCount() = 0;
    ::Xsmp::EventSink<::Smp::Int32> Add;
    virtual void _Add(::Smp::IObject *sender, ::Smp::Int32 value) = 0;
protected:
    ::Smp::Int32 count;
};
} // namespace Example

#endif // EXAMPLE_COUNTERGEN_H_
