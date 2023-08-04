#include <stdio.h>
#include <stdlib.h>

/*
    int arr[] = { 1, 2, 3 ,4 };
    int *p;
    p = arr;

    int *p = &arr[0];

    These are both equivalent   
*/

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };

    printf("%d\n", *(arr + 2)); // Will return the value stored at the memory address of the third element
    printf("%p\n", arr + 1); // Will print the address of the second element
    printf("%p\n", &arr[0]); // Will return the base address of the array
    printf("%d\n", arr[1]); // Will return the second element of the array
    printf("%d\n", *arr); // Will return the element at the base address
    printf("%d\n", *(arr)); // Will return the element stored at the base of the array
    printf("%p\n", &arr); // Will return the base adress of the array
}