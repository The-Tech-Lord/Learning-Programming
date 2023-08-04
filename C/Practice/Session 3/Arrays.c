#include <stdio.h>
#include <stdlib.h>

int main() {
    char names[4][20] = {
        "Ayin Smith",
        "Raiyan Hossain",
        "Maunia Monelo",
        "Roger Joseph"
    };
    int ages[4] = { 15, 15, 15, 18 };
    for(int i = 0; i < 4; i++) {
        printf("Name: %s\n", names[i]);
        printf("Age: %d\n\n", ages[i]);
    }   
}