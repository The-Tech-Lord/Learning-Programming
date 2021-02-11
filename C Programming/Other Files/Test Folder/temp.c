#include <stdio.h>
#include <stdlib.h>

int* IntFuncAddr(int a, int b) {
    if(a > b)
        return &a; // Returning the pointer which therefore returns the memory address
    else if (b > a)
        return &b;
    return &a;
}

int main() {
    int ab = 15;
    int bc = 10;
    printf("Value: %d\t Address: %p\n", *IntFuncAddr(ab, bc), IntFuncAddr(ab, bc));
}