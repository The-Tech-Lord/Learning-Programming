#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char potato[] = "POTATO";
	for (int i = 1; i <= argc; i++) {
		if (strcmp(argv[1], potato) != 0)
			printf("I WANT POTATO\n");

		while (i == 2) {
			if (i != 2) {
				break;
			} else {
				printf("KEEP ER GOIN!!\n");
			}
			i++;
		}

		printf("This was not meant to be practical\n");
		do {
			printf("KEEP ER GOIN\n");
			i++;
		} while (i == 4);

		switch(i) {
			case 1: printf("FOP\n"); break;
			case 2: printf("FAP\n"); break;
			case 3: printf("FWIP\n"); break;
			case 4: printf("196KM In ur Mom\n"); break;
			case 5: printf("200KM in ur Mom\n"); break;
		}
	}
}
