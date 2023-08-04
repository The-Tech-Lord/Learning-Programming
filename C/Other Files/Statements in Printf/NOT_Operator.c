#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int c = 4;
    printf("%d\n", !(a == c)); // a is not equal to c, but the NOT operator makes it true(1)

    int b = 6;
    char d = 6;
    printf("%d", !(b == d)); // b is equal to d, but the NOT operator makes it false(0)
}