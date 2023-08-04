#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main() {
    char str_letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};

    char minecraft[5072];
    gets(minecraft);
    int str_length = strlen(minecraft);

    for (int string_stop = 0; string_stop < str_length; string_stop++) {
        for (int index = 0; index != 26; index++) {
            if (minecraft[string_stop] == str_letters[index]) { printf(" :%c_:", str_letters[index]); }
            if (minecraft[string_stop] == str_letters[26]) { printf("%c%c", str_letters[26], str_letters[26]); break; }
        }
    }
    Sleep(1000 * 240);
}
