#include <stdio.h>
#include <stdlib.h>

int main() {
	double pi = 3.14159;
	printf("Pi is %.5f\n", pi);
	for (unsigned int i = 0; i < sizeof(double); i++)
		printf("Hex Val: 0x%02x \t Address: %p\n", ((unsigned char *)&pi)[i], (unsigned char *)&pi);
}
