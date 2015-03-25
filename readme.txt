with cmake 3.1 and visual studio 2012 (with /analyze support) installed:

    mkdir build && cd build
    cmake -G "Visual Studio 11 2012" -A x64 ..
    cmake --build .

produces analyze warning:

> warning C6001: Using uninitialized memory 'catch_internal_Section10'.: Lines: 8, 9, 10

Preprocessed file included as test.i