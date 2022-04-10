//===----- GDBRegistrationListener.cpp - Registers objects with GDB -------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "llvm-c/ExecutionEngine.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ExecutionEngine/JITEventListener.h"
#include "llvm/Object/ObjectFile.h"
#include "llvm/Support/Compiler.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/Support/ManagedStatic.h"
#include "llvm/Support/Mutex.h"
#include <mutex>

using namespace llvm;
using namespace llvm::object;

namespace {

/// Global access point for the JIT debugging interface designed for use with a
/// singleton toolbox. Handles thread-safe registration and deregistration of
/// object files that are in executable memory managed by the client of this
/// class.
class GDBJITRegistrationListener : public JITEventListener {
public:
  /// Instantiates the JIT service.
  GDBJITRegistrationListener() {}

  /// Unregisters each object that was previously registered and releases all
  /// internal resources.
  ~GDBJITRegistrationListener() override;

  /// Creates an entry in the JIT registry for the buffer @p Object,
  /// which must contain an object file in executable memory with any
  /// debug information for the debugger.
  void notifyObjectLoaded(ObjectKey K, const ObjectFile &Obj,
                          const RuntimeDyld::LoadedObjectInfo &L) override;

  /// Removes the internal registration of @p Object, and
  /// frees associated resources.
  /// Returns true if @p Object was found in ObjectBufferMap.
  void notifyFreeingObject(ObjectKey K) override;
};

GDBJITRegistrationListener::~GDBJITRegistrationListener() {
}

void GDBJITRegistrationListener::notifyObjectLoaded(
    ObjectKey K, const ObjectFile &Obj,
    const RuntimeDyld::LoadedObjectInfo &L) {
}

void GDBJITRegistrationListener::notifyFreeingObject(ObjectKey K) {
}

llvm::ManagedStatic<GDBJITRegistrationListener> GDBRegListener;

} // end namespace

namespace llvm {

JITEventListener* JITEventListener::createGDBRegistrationListener() {
  return &*GDBRegListener;
}

} // namespace llvm

LLVMJITEventListenerRef LLVMCreateGDBRegistrationListener(void)
{
  return wrap(JITEventListener::createGDBRegistrationListener());
}
