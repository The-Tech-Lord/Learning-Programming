#include <stdio.h>
#include <stdlib.h>

typedef struct CumBlast {
    int a;
    int b;
} CumBlast;

typedef union ShitterFuck {
    int a;
    int b;
} ShitterFuck;

int main() {
    CumBlast Cum;
    ShitterFuck Fuuk;

    Cum.a = 5;
    Cum.b = 6;
    printf("%d %d\n", Cum.a, Cum.b);
    
    Fuuk.a = 4;
    printf("%d\n", Fuuk.a);
    Fuuk.b = 9;
    printf("%d\n", Fuuk.b);
}
