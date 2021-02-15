#include <stdio.h>
#include <stdlib.h>

#define NUMBER 2

int main() {
	#ifdef NUMBER
		printf("NUMBER is defined!\n");
	#else
		printf("NUMBER is not defined\n");
	#endif

	#ifndef NUMBER
		printf("NUMBER is not defined!\n");
	#elif NUMBER == 2
		printf("NUMBER is equal to 2\n");
	#else
		printf("NUMBER is defined!");
	#endif

	#if !defined(GOKU) && NUMBER < ((4 * 3) - 6)
		printf("I have no fucking clue. Haha peepee poopoo\n");
	#endif
}