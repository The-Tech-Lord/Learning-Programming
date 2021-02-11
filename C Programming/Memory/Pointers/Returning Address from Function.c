#include <stdio.h>
#include <stdlib.h>

int* IntFuncAddr(int* a, int* b) {
    if(*a > *b)
        return a; // Returning the pointer which therefore returns the memory address
    else if (*b > *a)
        return b;
    return a;
}

char* CharFuncAddr(char* a, char* b) {
    if(*a > *b)
        return a; // Returning the pointer which therefore returns the memory address
    else if (*b > *a)
        return b;
    return a;
}

int main() {
    int addr1 = 15;
    int addr2 = 10;

    char charAddr1 = 'A';
    char charAddr2 = 'B';

    // I legit did not expect this to work
    printf("Address: %p\t Value: %d\n", IntFuncAddr(&addr1, &addr2), *IntFuncAddr(&addr1, &addr2));
    printf("Address: %p\t Value: %c\n", CharFuncAddr(&charAddr1, &charAddr2), *CharFuncAddr(&charAddr1, &charAddr2));
}