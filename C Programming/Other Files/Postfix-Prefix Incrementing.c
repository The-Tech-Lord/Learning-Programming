#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int y = 4;

    printf("%d\n", a++); // Will return the value of the variable then increment
    printf("%d\n", a); // The incremented value is now stored in the variable

    printf("%d", ++y); // Will increment the variable then return the value
}