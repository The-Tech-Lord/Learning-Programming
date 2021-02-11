#include <stdio.h>
#include <stdlib.h>

void addition(int a, int b) {
    printf("%d\n", a + b);
}
void subtraction(int a, int b) {
    printf("%d\n", a - b);
}
void multiplication(int a, int b) {
    printf("%d\n", a * b);
}
void division(int a, int b) {
    printf("%d\n", a / b);
}

int main() {
    // This creates an array of function pointers that point to the address of each function
    // You don't have to put in the ampersand but you can if you want to
    void (*functionPTR_ARR[])(int, int) = { &addition, &subtraction, &multiplication, &division };
    unsigned int ch, a = 15, b = 10;

    printf("Enter array number: ");
    scanf("%d", &ch);
	
    (*functionPTR_ARR[ch])(a, b);
}
