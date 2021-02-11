#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30;
    int *pAge = &age;

    //Since it was printing out a number and not a memory address, I had to put in the integer placeholder
    printf("%d", *pAge); //Will print out the value of what was stored in the variable at the memory address
    printf("%d", *&age); //This does the same thing
}
