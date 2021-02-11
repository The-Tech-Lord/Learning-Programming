#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 21;
    int b = 10;
    int c;

    //Addition
    c = a + b;
    printf("%d", c);

    //Subtraction
    c = a - b;
    printf("%d", c);

    //Multiplication
    c = a * b;
    printf("%d", c);

    //Division
    c = a / b;
    printf("%d", c);

    //Modular, Shows the remainder
    c = a % b;
    printf("%d", c);
	
    //Increment
    c = a++; 
    printf("%d", c);
	
    //Decrement
    c = a--; 
    printf("%d", c);
}