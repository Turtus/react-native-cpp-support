// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#pragma once

#include "djinni_support.hpp"
#include "second_listener.hpp"

namespace djinni_generated {

class NativeSecondListener final : ::djinni::JniInterface<::testsuite::SecondListener, NativeSecondListener> {
public:
    using CppType = std::shared_ptr<::testsuite::SecondListener>;
    using CppOptType = std::shared_ptr<::testsuite::SecondListener>;
    using JniType = jobject;

    using Boxed = NativeSecondListener;

    ~NativeSecondListener();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeSecondListener>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeSecondListener>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeSecondListener();
    friend ::djinni::JniClass<NativeSecondListener>;
    friend ::djinni::JniInterface<::testsuite::SecondListener, NativeSecondListener>;

};

}  // namespace djinni_generated
