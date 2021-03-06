// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from gcc_to_clang_sqlitecpp.djinni

#pragma once

#include "TestCpp.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTestCpp final : ::djinni::JniInterface<::example::TestCpp, NativeTestCpp> {
public:
    using CppType = std::shared_ptr<::example::TestCpp>;
    using CppOptType = std::shared_ptr<::example::TestCpp>;
    using JniType = jobject;

    using Boxed = NativeTestCpp;

    ~NativeTestCpp();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTestCpp>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTestCpp>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTestCpp();
    friend ::djinni::JniClass<NativeTestCpp>;
    friend ::djinni::JniInterface<::example::TestCpp, NativeTestCpp>;

};

}  // namespace djinni_generated
