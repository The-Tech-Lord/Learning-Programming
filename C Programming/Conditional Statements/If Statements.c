#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;

    // Regular If Statement
    if (num1 > num2) {
        printf("num1 is greater than num2");
    }

    // Else If
    if (num1 > num2) {
        printf("num1 is greater than num2");
    } else if (num2 < num1) {
        printf("num2 is greater than num1");
    }

    // Else
    if (num1 > num2) {
        printf("num1 is greater than num2");
    } else if (num1 < num2) {
        printf("num2 is greater than num1");
    } else {
        printf("i really don't even know anymore");
    }
}