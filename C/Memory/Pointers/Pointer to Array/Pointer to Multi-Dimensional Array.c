#include <stdio.h>
#include <stdlib.h>

//A more organized representation on a method on pointing to an array

int main() {
    int arr[2][3][4] = {
        {
            { 1, 2, 3, 4 },
            { 5, 6, 7, 8 },
            { 9, 10, 11, 12 },
        },
        {
            { 13, 14, 15, 16 },
            { 17, 18, 19, 20 },
            { 21, 22, 23, 24 },
        },
    };

    printf("%d\n", *(*(*(arr + 1) + 2) + 3) ); //Points to the 2nd array, 3rd array, and the 3rd array's 4th element
    
    int arr2[2][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 }
    };

    printf("%d\n\n", *(*(arr2 + 1) + 2) ); //Points to the 2nd array and its 3 element

    int arr3[3][4] = {
        { 10, 11, 12, 13 },
        { 20, 21, 22, 23 },
        { 30, 31, 32, 33 }
    };

    //It looks itmitating to be honest
    int (*ptr)[4];
    ptr = &arr3[0];
    printf("%p %p %p\n", ptr, ptr + 1, ptr + 2);
    printf("%p %p %p\n", *ptr, *(ptr + 1), *(ptr + 2));
    printf("%d %d %d\n", **ptr, *(*(ptr + 1) + 2), *(*(ptr + 2) + 3));
    printf("%d %d %d\n", ptr[0][0], ptr[1][2], ptr[2][3]);
}