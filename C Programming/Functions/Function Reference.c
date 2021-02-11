#include <stdio.h>
#include <stdlib.h>

void reference();

int main() {
    reference();
}

void reference() {
    printf("I got referenced!");
}