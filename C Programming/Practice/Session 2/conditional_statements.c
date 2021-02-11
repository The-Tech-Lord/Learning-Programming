#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 4;
	int a = 3;
	int g = 7;
	char string[] = "Hello World!";

	if (i == 4) {
		printf("Hello World!\n");
	}
	while (g > 6 && g != 19) {
		printf("%d ", g);
		g++;
	}
	printf("\n");

	for(int i = 0; i < a; i++) {
		printf("%d ", i);
	}
	printf("\n");

	int integer;
	do {
		printf("%s ", string);
		integer++;
	} while (a != g && integer <= g);
	printf("\n");

	int variable = (a < g) ? 1 : 0;
	printf("%d\n", variable);

	while(i < g) {
		if (i == 6) { printf(" ya boi "); break; }
		printf("%d ", g);
		i++;
	}
	printf("\n");

	while(i < g) {
		if (i == 8) {
			printf(" ya boi ");
			i++;
			continue;	
		}
		printf("%d ", i);
		i++;
	}
	printf("\n");		

	switch(i) {
		case 15: puts("boi 15"); break;
		case 16: puts("boi 16"); break;
		case 17: puts("boi 17"); break;
		case 18: puts("boi 18"); break;
		case 19: puts("boi 19"); break;
		case 20: puts("boi 20"); break;		
	}
}
