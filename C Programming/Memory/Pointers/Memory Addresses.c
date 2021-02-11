#include <stdio.h>
#include <stdlib.h>

/*
    A memory address is the address that data is stored at.
    C will use that to get the data in the variables
*/

int main() {
    int age = 28;
    char grade = 'A';
    double gpa = 3.4;

    printf("%p\n", &age); //Will print out the memory address of the age variable
}