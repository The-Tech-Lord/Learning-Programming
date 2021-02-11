#include <iostream>
#include <cstdlib>

int main() {
	//These things must be powers of positive 2
	alignas(16) int a[4]; //Stores the memory addresses that are a multiple of 16
	alignas(1024) int b[4];
	printf("%p\n", a[0]);
	printf("%p\n", b[2]);
}