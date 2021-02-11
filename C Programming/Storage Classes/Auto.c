#include <stdio.h>
#include <stdlib.h>

int main() {
	auto int x;
	printf("%d\n", x);
	{
		auto int i;
		// You can access auto variables outside their scope
		// using the concept of pointers
		int *ptr = &x;
		printf("%d\n", *ptr);
	}
}