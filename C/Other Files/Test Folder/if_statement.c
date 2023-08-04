#include <stdio.h>

int main() {
	int a = 10;
	if (a == 10) {
		a += 10;
	} else if (a == 20) {
		a += 20;
	}
	printf("%d\n", a);
}