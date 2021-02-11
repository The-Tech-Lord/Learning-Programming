#include <stdio.h>
#include <stdlib.h>

int main() {
    int grade = 90;
    switch (grade) {
        case 90:
            printf("You got an A!");
            break;
        case 80:
            printf("You got a B!");
            break;
        case 70:
            printf("You got a C!");
            break;
        case 60:
            printf("You got a D!");
            break;
        case 50:
            printf("You Failed!");
            break;
        default:
            printf("I don't even know anymore");
            break;
    }
}