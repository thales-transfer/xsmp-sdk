// Copyright 2023-2024 YOUR ORGANIZATION. All rights reserved.
//
// YOUR NOTICE
// -----------------------------------------------------------------------------
// File Name    : CounterGen.cpp
// Generated by : XsmpSdkGenerator-1.1.2
// -----------------------------------------------------------------------------
/// @file Example/CounterGen.cpp
// This file is auto-generated, Do not edit otherwise your changes will be lost

// ----------------------------------------------------------------------------
// ---------------------------- Include Header Files --------------------
// ----------------------------------------------------------------------------

#include <Example/Counter.h>
#include <Smp/IPublication.h>
#include <Xsmp/ComponentHelper.h>
#include <Xsmp/Request.h>

namespace Example {
//--------------------------- Constructor -------------------------
CounterGen::CounterGen(::Smp::String8 name, ::Smp::String8 description,
                       ::Smp::IComposite *parent, ::Smp::ISimulator *simulator)
    : // Base class initialization
      ::Xsmp::Model(name, description, parent, simulator),
      // EntryPoint: IncrementCount
      IncrementCount{"IncrementCount", "", this,
                     std::bind(&CounterGen::_IncrementCount, this)},
      // Event Sink: Add
      Add{"Add", "", this,
          std::bind(&CounterGen::_Add, this, std::placeholders::_1,
                    std::placeholders::_2),
          ::Smp::PrimitiveTypeKind::PTK_Int32},
      // count initialization
      count{0} {}

void CounterGen::Publish(::Smp::IPublication *receiver) {
  // Call parent class implementation first
  ::Xsmp::Model::Publish(receiver);

  // Publish field count
  receiver->PublishField("count", "", &count, ::Smp::ViewKind::VK_None, true,
                         false, false);
  {
    // Publish operation ResetCount
    receiver->PublishOperation("ResetCount", "", ::Smp::ViewKind::VK_None);
  }
  // Call user DoPublish if any
  ::Xsmp::Component::Helper::Publish<::Example::Counter>(this, receiver);
}

void CounterGen::Configure(::Smp::Services::ILogger *logger,
                           ::Smp::Services::ILinkRegistry *linkRegistry) {
  // Call parent implementation first
  ::Xsmp::Model::Configure(logger, linkRegistry);

  // Call user DoConfigure if any
  ::Xsmp::Component::Helper::Configure<::Example::Counter>(this, logger,
                                                           linkRegistry);
}

void CounterGen::Connect(::Smp::ISimulator *simulator) {
  // Call parent implementation first
  ::Xsmp::Model::Connect(simulator);

  // Call user DoConnect if any
  ::Xsmp::Component::Helper::Connect<::Example::Counter>(this, simulator);
}

void CounterGen::Disconnect() {
  // Call user DoDisconnect if any
  ::Xsmp::Component::Helper::Disconnect<::Example::Counter>(this);

  // Call parent implementation last, to remove references to the Simulator and
  // its services
  ::Xsmp::Model::Disconnect();
}

CounterGen::RequestHandlers CounterGen::requestHandlers = InitRequestHandlers();

CounterGen::RequestHandlers CounterGen::InitRequestHandlers() {
  RequestHandlers handlers;
  if (handlers.find("ResetCount") == handlers.end()) {
    handlers["ResetCount"] = [](CounterGen *cmp, ::Smp::IRequest *) {
      /// Invoke ResetCount
      cmp->ResetCount();
    };
  }
  return handlers;
}

void CounterGen::Invoke(::Smp::IRequest *request) {
  if (request == nullptr) {
    return;
  }
  auto handler = requestHandlers.find(request->GetOperationName());
  if (handler != requestHandlers.end()) {
    handler->second(this, request);
  } else {
    // pass the request down to the base model
    ::Xsmp::Model::Invoke(request);
  }
}

const Smp::Uuid &CounterGen::GetUuid() const { return Uuid_Counter; }
} // namespace Example
