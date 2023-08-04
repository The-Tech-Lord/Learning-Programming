#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 1;
    while (number < 10) {
        if (number == 7) {
            break; // Will terminate the whole loop, only used if...else statements
        }
        printf("Hello world!");
        number++;
    }
}