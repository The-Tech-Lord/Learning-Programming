#include <stdio.h>
#include <stdlib.h>

void addition(int a, int b, int c) {
    static int count;
    for(int i = 0; i < 10; i++) {
        count += a + b + c;
        printf("%d ", count);
        if(i == 9) printf("\n");
    }
}

int main() {
    addition(10, 15, 5);
}