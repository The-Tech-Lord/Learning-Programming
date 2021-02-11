#include <stdio.h>
#include <stdlib.h>

int addInt(int a, int b) {
    return a + b;
}

int main() {
    // Unlike regualr pointers that point to data, function pointers point to code
    // They can also be passed into other functions
    int (*addIntPTR)(int, int) = &addInt; // This is saying that its pointing to a function with 2 paramters
                                          // and both parameters are integers, they don't have to be the same
    addIntPTR = &addInt;
    // This line of code will just simpiley point to the address of the function
    // And then we can do some fun stuff from there!!

    int sum = (*addIntPTR)(5, 4);
    printf("%d", sum);
}