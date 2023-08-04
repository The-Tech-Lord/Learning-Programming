#include <stdio.h>
#include <stdlib.h>

// There are really just integers
// The compiler gives them a value starting from the first number at 0
// If there are numbers without values and others with values, it will start at the
// last numbers number and so on, Ex. A = 1, B, :B = 2,, C = 5, D, :D = 6
enum EnumType { A, B, C };

int main() {
    enum EnumType type; // You can create a variable of type enum and you can give it a value
    type = B;

    printf("%d\n", type);
    printf("%d\n", A); // But you don't have to create a variable just to use the enums
}