#include <stdio.h>

#define yes 6

#ifdef yes
	#undef yes
	#define yers 7
#endif

int main() {
	printf("%d\n", yers);
}
