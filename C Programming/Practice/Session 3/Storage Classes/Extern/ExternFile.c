#include <stdio.h>
#include <stdlib.h>

int something = 10;

int main() {
    extern int addition();
    extern int subtraction();

    printf("%d\n", addition(10, 15, 5) );
    printf("%d\n", subtraction(10, 15, 5) );
}