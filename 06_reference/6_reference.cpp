// 6_reference.cpp
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

// C++에는 레퍼런스라는 새로운 형태의 타입을 제공합니다.
// > 새로운 메모리를 할당하는 것이 아니라, 기존 메모리에 새로운 이름을 부여합니다.

// [      ] n, r

int main()
{
  int n = 0; // 이 순간 4바이트의 메모리가 할당됩니다.

  int &r = n; // 새로운 메모리를 할당하는 것이 아니라,
              // 기존 메모리의 새로운 이름을 부여합니다.

  // int &r2; // 컴파일 오류!
  // 레퍼런스 변수는 기존 변수의 별칭이므로, 반드시 초기값이 있어야 합니다.

  r = 10;

  cout << n << endl; // 10
}