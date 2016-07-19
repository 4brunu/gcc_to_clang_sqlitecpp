# gcc_to_clang_sqlitecpp

## Fixed with SQLiteCpp library update - https://github.com/4brunu/gcc_to_clang_sqlitecpp/commit/1ed805b355882071cacc3913a3f667a51a865707

This project show's the error I'm getting while migrating from GCC to Clang.

####GCC  Works.
```
ndk {
    toolchain = "gcc"
    toolchainVersion = "4.9"
}
```
####Clang - Error.
````
ndk {
    toolchain = "clang"
}
```
```
Information:Gradle tasks [:app:assembleDebug]
:app:compileExampleArm64-v8aDebugSharedLibraryExampleMainC
:app:compileExampleArm64-v8aDebugSharedLibraryExampleMainCpp
    inline operator int64_t() const
           ^
1 error generated.
    inline operator int64_t() const
           ^
1 error generated.
    inline operator int64_t() const
           ^
1 error generated.
    inline operator int64_t() const
           ^
1 error generated.
/Users/user/Developer/gcc_to_clang_sqlitecpp/deps/SQLiteCpp/include/SQLiteCpp/Column.h
Error:(189, 12) error: conversion function cannot be redeclared
Information:(176, 12) previous declaration is here
Error:(189, 12) error: conversion function cannot be redeclared
Error:(189, 12) error: conversion function cannot be redeclared
Error:(189, 12) error: conversion function cannot be redeclared
Error:(189, 12) error: conversion function cannot be redeclared
    inline operator int64_t() const
           ^
1 error generated.
Error:Execution failed for task ':app:compileExampleArm64-v8aDebugSharedLibraryExampleMainCpp'.
> Multiple build operations failed.
      C++ compiler failed while compiling Backup.cpp.
      C++ compiler failed while compiling Database.cpp.
      C++ compiler failed while compiling Column.cpp.
      C++ compiler failed while compiling Transaction.cpp.
      C++ compiler failed while compiling Statement.cpp.
  See the complete log at: file:///Users/user/Developer/gcc_to_clang_sqlitecpp/android_project/gcc_to_clang_sqlitecpp/app/build/tmp/compileExampleArm64-v8aDebugSharedLibraryExampleMainCpp/output.txt
Information:BUILD FAILED
Information:Total time: 6.205 secs
Information:6 errors
Information:0 warnings
Information:See complete output in console
```
