#include <stdio.h>
#include <stdlib.h>

int main() {
    // Gives the compiler a hint to put the variable in the CPU register
    // But it won't always put it in the register
    register int miles = 0;
    for(;;) {
        miles++;
        printf("%d\n", miles);
        if(miles == 500) {
            break;
        }
    }
}