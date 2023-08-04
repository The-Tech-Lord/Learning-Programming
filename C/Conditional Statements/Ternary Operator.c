#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = 1, num2 = 2;

	int max = num1 > num2 ? num1 : num2; // If num1 is less than num2, then make max equal num1,
                                         // else num2, this can come in handy sometimes
    printf("%d", max);
}