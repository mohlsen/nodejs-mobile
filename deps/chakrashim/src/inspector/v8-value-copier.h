// Copyright 2016 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEPS_CHAKRASHIM_SRC_INSPECTOR_V8_VALUE_COPIER_H_
#define DEPS_CHAKRASHIM_SRC_INSPECTOR_V8_VALUE_COPIER_H_

#include "include/v8.h"

namespace v8_inspector {

v8::MaybeLocal<v8::Value> copyValueFromDebuggerContext(
    v8::Isolate*, v8::Local<v8::Context> debuggerContext,
    v8::Local<v8::Context> toContext, v8::Local<v8::Value>);
v8::Maybe<bool> createDataProperty(v8::Local<v8::Context>,
                                   v8::Local<v8::Object>,
                                   v8::Local<v8::Name> key,
                                   v8::Local<v8::Value>);
v8::Maybe<bool> createDataProperty(v8::Local<v8::Context>, v8::Local<v8::Array>,
                                   int index, v8::Local<v8::Value>);

}  // namespace v8_inspector

#endif  // DEPS_CHAKRASHIM_SRC_INSPECTOR_V8_VALUE_COPIER_H_
