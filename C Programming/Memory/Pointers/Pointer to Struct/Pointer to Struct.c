#include <stdio.h>
#include <stdlib.h>

struct test {
    int x;
    int y;
};

int main() {
    struct test *ptr, Yolo;
    ptr = &Yolo;

    printf("Enter number: ");
    scanf("%d", &ptr->x);

    printf("Enter another number: ");
    scanf("%d", &ptr->y);

    printf("Your numbers are %d and %d", ptr->x, ptr->y);
}