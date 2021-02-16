#include <stdio.h>
#include <stdlib.h>


#include "PRAGMA_ONCE.h"
#include "PRAGMA_ONCE.h"
#include "REGULAR_HEADER.h"
#include "REGULAR_HEADER.h"

int main() {
    VARS Crack;
    Crack.KEY = 5; Crack.A_KEY = 8;
    printf("%d %d\n", Crack.KEY, Crack.A_KEY);

    VARSA Meth;
    Meth.KEY = 7; Meth.A_KEY = 10;
    printf("%d %d\n", Meth.KEY, Meth.A_KEY);
}