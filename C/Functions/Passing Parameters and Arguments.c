#include <stdio.h>
#include <stdlib.h>

//Parameters \/    \/
void Sum(int a, int b) {
    int Sum = a + b; //<-----------
    printf("%d \n", Sum);
}

int main() {
    Sum(50, 60); //Passed parameters values
}