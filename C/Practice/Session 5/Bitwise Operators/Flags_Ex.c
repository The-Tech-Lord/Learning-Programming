#include <stdio.h>
#include <stdlib.h>

#define FLAG1 0b001
#define FLAG2 0b010
#define FLAG3 0b100

int main() {
	int VALUE = FLAG1 | FLAG2 | FLAG3;
	if (VALUE & FLAG1)
		printf("I have no fucking idea what I'm doing right now please help me\n");
	if (VALUE & FLAG2)
		printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n");
	if (VALUE & FLAG3)
		printf("fuck fuck fuck fuck fuck fuck fuck fuck fuck fuck fuck fuck fuck\n");
}
