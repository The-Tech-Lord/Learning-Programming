#include <stdio.h>
#include <stdlib.h>

int Addiction(int a, int b) { return (a + b); }
int Methanphetamine(int a, int b) { return (a - b); }
int fail(int a, int b) {
    printf("Fuck off %d %d\n", a, b);
    return 1;
}

int (*CumBlast(char ID))(int, int) {
    switch (ID) {
        case '+': return Addiction;
        case '-': return Methanphetamine;
    }
    return fail;
}

int main() {
    printf("%d\n", CumBlast('+')(5, 6));
}
