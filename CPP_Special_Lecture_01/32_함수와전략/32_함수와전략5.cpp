// 32_함수와전략5.cpp
#include <iostream>
using namespace std;

bool cmp1(int a, int b) { return a > b; }
bool cmp2(int a, int b) { return a < b; }

#include <algorithm> // 이미 정책 변경 가능한 sort가 이 안에 있습니다.

#include <functional>
// less<>, greater<> 함수 객체가 있습니다.

int main()
{
    int x[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
    
    less<int> l;
    greater<int> g;

    sort(x, x + 10, l);
    sort(x, x + 10, g);

    sort(x, x + 10);
    sort(x, x + 10, &cmp1);

    for (int e : x) {
        cout << e << endl;
    }
}