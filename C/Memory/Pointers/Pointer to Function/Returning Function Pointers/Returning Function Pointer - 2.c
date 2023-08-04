#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) { return (a + b); }
int sub(int a, int b) { return (a - b); }

int (*AddSub(const char character))(int, int) {
    switch (character) {
        case '+': return &add;
        case '-': return &sub;
    }
    return 0;
}

int main() {
    int (*ptr)(int, int);
    ptr = AddSub('-');
    printf("%d\n", ptr(5, 6));
}