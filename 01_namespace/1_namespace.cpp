// 1_namespace.cpp

// 1) 이름 충돌을 해결할 수 있습니다.
// 2) 프로그램의 각 요소를 관련된 요소끼리 그룹화 할 수 있습니다.

#include <iostream>

namespace Audio
{
  void init() { std::cout << "Audio::init" << std::endl; }
}

namespace Video
{
  void init() { std::cout << "Video::init" << std::endl; }
}

void init()
{
  std::cout << "Global init" << std::endl;
}

int main()
{
  Audio::init();
  Video::init();
  init();
}

// 컴파일 방법: g++ 1_namespace.cpp -o 1_namespace
// 실행 방법 : ./1_namespace