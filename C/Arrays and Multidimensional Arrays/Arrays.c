#include <stdio.h>
#include <stdlib.h>

//In C programming, there is no such thing as a string, its just an array of characters

/*
    When an array is declared, the compiler allocates sufficient amount of memory for all of the elements in the array
    and the base address with also be allocated by the compiler (The first element of the array).
*/

int main() {
    /*
     *This is how you make an array
     *If you put a number in the []'s, that shows how many elements they can hold
     *ex. char luckyNumbers[255] = {1, 2, 3, 4, 5, 6,...255};
    */
    
    int luckyNumbers[] = {1, 2, 3, 4, 5};
    //Array index starts at zero, ex. 0, 1, 2, 3, 4,...
    printf("%d\n", luckyNumbers[0]);

    printf("%d", *(luckyNumbers + 0)); //Another way of getting an element from an array
}