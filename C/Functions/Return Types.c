#include <stdio.h>
#include <stdlib.h>

void test() {
    return 8 * 8; //As you can see, you won't be able use 'return'
}

//You can put any return type here like int or double
int test2() {
    return 8 * 8;
}

int main() {
    test();
    test2();
}