#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0, b = 0;
    int *c = NULL;
    c = &a;
    *c = 5;
    b = a;
    printf("%d %d\n", a, b);
}
