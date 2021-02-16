#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define FNAME "LINE.c"

int main() {
    #line 8 FNAME
        assert(2 + 2 == 4);
    
    #line 100 FNAME
        assert(2 + 2 == 5);

    #line 14 FNAME
        assert(2 + 5 == 7);
}