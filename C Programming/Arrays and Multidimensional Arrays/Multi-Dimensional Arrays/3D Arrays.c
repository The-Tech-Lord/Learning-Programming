#include <stdio.h>
#include <stdlib.h>

int main() {
    //3D Array, you can go even further as much as until it reaches your compilers limit!
    int luckyNumbers[2][3][5] = {
        {
            { 1, 2, 3, 4, 5 },
            { 6, 7, 8, 9, 10 },
            { 11, 12, 13, 14, 15 },
        },
        {
            { 16, 17, 18, 19, 20 },
            { 21, 22, 23, 24, 25 },
            { 26, 27, 28, 29, 30 },
        },
    };

    //The output of this for loop is clean as hell!
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 3; i++) {
            for (int k = 0; k < 5; k++) {
                printf("%d\t", luckyNumbers[j][i][k]);
            }
            printf("\n");
        }
    }
}