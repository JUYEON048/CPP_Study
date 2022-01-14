// 23_virtual2.cpp
#include <stdio.h>

struct AAA {
};

struct BBB {
};

int main()
{
    printf("%ld\n", sizeof(AAA));
    printf("%ld\n", sizeof(BBB));
}
