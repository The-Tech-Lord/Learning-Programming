#include <stdio.h>
#include <stdlib.h>

struct myStruct {
	int x;
	int y;
	int z;

	struct nest_struct {
		int u;
		int t;
		int v;
	} nested_struct;
};

union myUnion {
	int r;
	int s;
	int o;

	union nest_union {
		int w;
		int q;
		int p;
	} nest_uni;
};

int main() {
	struct myStruct variable;

	variable.x = 9;
	variable.nested_struct.u = 4;

	printf("%d\n", variable.x);
	printf("%d\n", variable.nested_struct.u);


	union myUnion uni;

	uni.r = 6;
	uni.nest_uni.w = 5;

	printf("%d %d %d\n", uni.r, uni.s, uni.o);
	printf("%d %d %d\n", uni.nest_uni.w, uni.nest_uni.q, uni.nest_uni.p);
}