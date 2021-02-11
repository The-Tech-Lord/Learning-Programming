#include <stdio.h>
#include <stdlib.h>

// This program wasn't meant to be practical but to see if I understood the concept

void AllocFail() {
    printf("Allocation Failed\n");
    exit(0);
}

// Just some random math
int MathFunc(int num1, int num2, int num3) {
    int count = ((num1 * num2) + (num2 * num3)) / 5;
    for(int i = 0; i < 10; i++)
        count += i * .2;
    return count;
}

void Alloc(char **Array, int size) {    
    for(int i = 0; i < size; i++) {
        Array[i] = malloc(15 * sizeof(char));
        if(Array[i] == NULL) AllocFail();
    }
}

int ComplexFunc(int (*Func1)(int, int, int), void (*Func2)(char **, int), char **ARRAY, int size) {
    static int count;
    for(int i = 0; i < 5; i++)
        count = Func1(5, 6, 7);

    Func2(ARRAY, size);
    for(int i = 0; i < size; i++) {
        printf("Input Name %d: ", i + 1);
        fgets(ARRAY[i], 25, stdin);
    }
    printf("\n");
    for(int i = 0; i < size; i++)
        printf("Name %d: %s", i + 1, ARRAY[i]);
    return count;
}

int main() {
    char *CHAR_ARRAY[5];
    ComplexFunc(MathFunc, Alloc, CHAR_ARRAY, 5);
}