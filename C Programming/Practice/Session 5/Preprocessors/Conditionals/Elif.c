#include <stdio.h>

#define Fuck 69

#ifndef Fuck
	#define Yes 50
#elif Fuck < 80
	#define yes 70
#endif

int main() {
	printf("%d\n", yes);
}
