#include <stdio.h>
#include <stdlib.h>

int main() {
    int counter;
    for (counter = 1; counter <= 10; counter++) {
        if (counter == 2) {
            continue; // Will skip the current interation, this is mostly used with an if...else statement
        }
        
        printf("%d\n", counter);
    }
}