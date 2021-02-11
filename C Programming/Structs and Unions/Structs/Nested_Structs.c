#include <stdio.h>
#include <stdlib.h>

struct address {
    int hn;
    char sn;
};

struct student {
    char name[15];
    int age;

    struct address addr; //This struct now has access to the address struct, therefore a nested struct
} anil;

//Another way to nest structs
struct union1 {
    int x;
    int y;
    int z;

    struct Nested_Structs {
        int u;
        int v;
        int w;
    } nest;
    // If it's a nested struct, you have to give it the variable otherwise the compiler will throw an error
};

int main() {
    struct student anil; //Haha, *funny sigh* anil. HA!
    struct union1 ioni;

    anil.addr.hn = 1234;
    printf("%d\n", anil.addr.hn);
    
    ioni.nest.u = 8;
    printf("%d\n", ioni.nest.u);
}