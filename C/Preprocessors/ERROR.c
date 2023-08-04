#include <stdio.h>
#include <stdlib.h>

#if __STDC__ != 1
    #error "Not a standard compliant compiler"
#endif

int main() {
    printf("The compiler used conforms to the ISO C Standard!!\n");
}