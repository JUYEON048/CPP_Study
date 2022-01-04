//https://github.com/yoondev-classroom/cpp_220103/tree/main/220103


/*
#include <iostream>

int main()
{
    std::cout << "HI";
    return 0;
}

// 컴파일 방법: g++ 1.cpp
// 실행 방법: ./a.out
*/


// ===========================================
// 1. C++ -> .cpp, .cc, .cxx, .cp, .c++ 
// 2. Compiler -> clang++, g++, Microsofg C++ Compiler
// 3. Standard
//    C++ 1.0 - 98/03
//    C++ 2.0 - 11/14 : Modern C++
//    C++ 3.0 - 17/20

#include <iostream>
// C++ 표준 헤더: 헤더 파일의 확장자가 없는 경우가 많습니다.

// include <stdio.h> // C style 헤더, C++에서도 사용할 수 있습니다.
#include <cstdio> // C++ 에서는 앞에 c를 붙이고, .h를 제거한 형태를 권장합니다.

int main()
{
    printf("Hello, C \n");
    std::printf("Hello, C \n");
    std::cout << "Hello, C++" << std::endl;
}