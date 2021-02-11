#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n); fgetc(stdin);
    char characters[n + 1];
    fgets(characters, n + 1, stdin);

    char orderedChars[n + 1];
    for (int i = 0; i < n; i++) {
        int index;
        scanf("%d", &index);
        orderedChars[i] = characters[index - 1];
    }
    orderedChars[n] = '\0';
    printf("%s", orderedChars);
}