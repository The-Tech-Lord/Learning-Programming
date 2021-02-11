#include <stdio.h>
#include <stdlib.h>

int* func(int a) {
    static int result;
    result = a;
    return &result;
}

int main() {
    int ab = 10;
    printf("%p\t%d\n", func(ab), *func(ab));
}