#include <stdio.h>

// Extra Printing of Chars in 2D Char Array
// https://stackoverflow.com/questions/63542569/extra-printing-of-chars-in-2d-char-array

int main() {
    // The last square bracket shows how many elements each
    // Array can hold
    char positions[3][3] = {
        {'A', 'B', 'C'},
        {'D', 'E', 'F'},
        {'G', 'H', 'I'}
    };

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            printf("%c\n", positions[i][j]);
}