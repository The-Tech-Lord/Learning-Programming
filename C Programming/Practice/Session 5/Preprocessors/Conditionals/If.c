#include <stdio.h>

#define Fuck 78

#if Fuck < 80
	#define yes 50
#endif

int main() {
	printf("%d\n", yes);
}
