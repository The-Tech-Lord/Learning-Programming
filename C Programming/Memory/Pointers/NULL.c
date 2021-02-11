#include <stdio.h>
#include <stdlib.h>

//NULL is both a value and a pointer, its value is basically 0, but its still a pointer, 
//so your gonna need a pointer variable which is what I did

int main() {
    int *ptr = NULL;
    if (ptr == NULL) {
        printf("NULL Found \n");
    }
    if (ptr == 0) {
        printf("NULL Found \n");
    }
    if (!ptr) { //Says "if ptr is not 0, print this" a.k.a "if ptr is 0, print this"
        printf("NULL Found \n");
    }
}
