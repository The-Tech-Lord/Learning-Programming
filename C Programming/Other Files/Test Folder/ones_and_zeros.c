#include <stdio.h>
#include <stdlib.h>

int main() {
    int q = 0;
    int f = 1;

    // Returned False because the value of q was 0. which means false
    if (q) {
        printf("True");
    } else {
        printf("False");
    }

    // Returned True because the value of f was 1, which means true
    if (f) {
        printf("True");
    } else {
        printf("False");
    }
}