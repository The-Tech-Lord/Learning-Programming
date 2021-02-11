#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int step;
    int equation;
    printf("Enter a number between 1 and 10: ");
    scanf("%d", &number);

    //Number chosen correction
    if (number < 1 || number > 10) {
        printf("You didn't pick a number between 1 and 10! Restart Program!\n");
    } else if (number >= 1 && number <= 10) {
        equation = (((number * 2) + 5) * 50);
    }

    int birthday;
    printf("Put in 1770 if you celebrated your birthday this year, otherwise type in 1769: ");
    scanf("%d", &birthday);
    step = equation + birthday;

    printf("Put in your year of birth: ");
    int year;
    scanf("%d", &year);

    int final = step - year;

    printf("The first number is the number you chose and the other two numbers are your age!: %d\n", final);
}