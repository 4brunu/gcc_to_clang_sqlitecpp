// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from gcc_to_clang_sqlitecpp.djinni

#pragma once

#include <memory>
#include <string>

namespace example {

class TestCpp {
public:
    virtual ~TestCpp() {}

    static std::shared_ptr<TestCpp> create();

    virtual std::string getStringTest() = 0;
};

}  // namespace example
