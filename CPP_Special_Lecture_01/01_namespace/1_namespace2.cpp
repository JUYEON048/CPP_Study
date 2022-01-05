// 1_namespace2.cpp
#include <iostream>

// 1. 전체 이름을 사용하는 방법.  --> Good solution
//  : 이름공간과 함수의 이름을 사용한 방법
//   ex) std::cout, std::endl, std::printf
/*
int main()
{
  std::cout << "Hello, cpp" << std::endl
            << "Hello, cpp" << std::endl;
}
*/

// 2. using 선언(declaration)을 사용하는 방법.
/*
using std::cout;
using std::endl;
int main()
{
  cout << "Hello, cpp" << endl
       << "Hello, cpp" << endl;
}
*/

// 3. using 지시어(directive) --> Bad solution
using namespace std;

int main()
{
  cout << "Hello, cpp" << endl
       << "Hello, cpp" << endl;
}