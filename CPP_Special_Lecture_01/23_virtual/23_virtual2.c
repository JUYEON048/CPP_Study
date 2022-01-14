#include <stdio.h>

struct AAA {
    int a;
    char b;
    double c;
};

// 0x123456
//  빅엔디안: [0x12][0x34][0x56]
//리틀엔디안: [0x56][0x34][0x12]

struct BBB {
    char a;
    double b;
    int c;
} __attribute__((aligned(1), packed));

int main()
{
    printf("%ld\n", sizeof(struct AAA));
    printf("%ld\n", sizeof(struct BBB));
}


// C/C++ default theory : 8byte alignment
// struct AAA __ int a, har b, double c
// [ ][ ][ ][ ][ ][ ][ ][ ] [ ][ ][ ][ ][ ][ ][ ][ ]
//  ---- a----  b            ---------- c --------- 
// => total : 16 byte
// struct BBB __ int a, double b, char c
// [ ][ ][ ][ ][ ][ ][ ][ ] [ ][ ][ ][ ][ ][ ][ ][ ] [ ][ ][ ][ ][ ][ ][ ][ ]
// ---- a ----              ----------- b ----------  c
// => total : 24 byte

// if you use "__attribute___()", saving value without empty
// struct AAA 
// [ ][ ][ ][ ][ ][ ][ ][ ] [ ][ ][ ][ ][ ][ ][ ][ ]
//  ---- a----  b  ----------- c --------- 
// => total : 13 byte
// struct BBB 
// [ ][ ][ ][ ][ ][ ][ ][ ] [ ][ ][ ][ ][ ][ ][ ][ ] [ ][ ][ ][ ][ ][ ][ ][ ]
// ---- a ----  ----------- b ---------- c
// => total : 13 byte
