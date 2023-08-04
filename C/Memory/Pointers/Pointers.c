#include <stdio.h>
#include <stdlib.h>

//& means address-of
//* means the dereference of a variable

int main() {
    int age = 30;
    double gpa = 3.0;
    char grade = 'A';

    //The pointer variable is now string the address of the age variable
    int *pAge = &age;
    double *pGpa = &gpa;

    printf("%p", pAge);
}