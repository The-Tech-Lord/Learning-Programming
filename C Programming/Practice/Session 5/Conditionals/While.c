#include <stdio.h>

int main() {
	int a = 1;
	while (a) {
		printf("Nightmare\n");
		while (a < 10) {
			printf("Nigthmare\n");
			a++;
		}
		if (a == 10)
			break;
	}
}
