#include <stdio.h>

#define Shitter 10

int main() {
	#ifdef Shitter
		printf("Shitter is defined! %d\n", Shitter);
	#endif
}
