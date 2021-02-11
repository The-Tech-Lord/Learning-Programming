#include <stdio.h>
#include <stdlib.h>

int main() {
	double d = 3.14;
	printf("The double %.2f(%a) is: ", d, d); printf("\n");
	for (size_t n = 0; n < sizeof d; ++n)
		printf("Hex Val: 0x%02x \t Address: %p\n", ((unsigned char*)&d)[n], (unsigned char*)&d);
}
