#include <stdio.h>
#include <stdlib.h>

int main() {
    //You have to specify how many arrays and how many elements are in those arrays
    int luckyNumbers[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

    //Array 0, Element 2 of that array!
    printf("%d", luckyNumbers[0][2]);
}