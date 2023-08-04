#include <stdio.h>
#include <stdlib.h>

int main() {
	double d = 3.14;
	printf("0x%02x\n", *(((unsigned char*)&d) + 0));
}
