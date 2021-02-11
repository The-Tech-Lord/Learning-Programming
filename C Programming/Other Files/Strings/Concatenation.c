#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[1024];
    strcat(str, "Hello");
    strcat(str, " world!"); //You can also nest these!
    strcat(strcat(str, " I'm your "), "new best friend!!! :D");

    printf("%s", str);
}