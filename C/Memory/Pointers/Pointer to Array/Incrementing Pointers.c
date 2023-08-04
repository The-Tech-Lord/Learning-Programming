#include <stdio.h>
#include <stdlib.h>

/*
    A good explanation, no srsly this is like, a god send
    int num = 5;   // Suppose address of num = 0x1230
    int *ptr;      // Pointer variable

    ptr = &num;    // ptr points to 0x1230 or ptr points to num
    ptr++;         // ptr now points to 0x1234, since integer size is 4 bytes
    ptr--;         // ptr now points to 0x1230
*/

int main() {
    int a[] = { 1, 2, 3, 4, 5 };
    int *f = &a[0]; // Same as saying int *f = a;

    // Incrementing by 4 bytes ( ptr++ )
    // Ex: 0x1234 becomes 0x1238
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *f);
        f++;
    }

    // Decrementing by 4 bytes ( ptr-- )
    // Ex: 0x1234 becomes 0x1230
    int *h = &a[4];
    for (int g = 5; g > 0; g--) {
        printf("%d\n", *h);
        h--;
    }
}