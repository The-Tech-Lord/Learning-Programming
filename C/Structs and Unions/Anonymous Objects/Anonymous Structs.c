#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Can save you time from having to come up with a name!!
// Don't make variables the same name if you do this though
// Because it will cause a conflict.
struct Unsigned_Integers {
	int a;
	struct {
		int b;
		struct {
			char c;
		};
	};
	struct {
		float d;
		double e;
	};
	// This won't cause a conflict though since the variable 'a'
	// is now under another name like "FUCK"
	struct FUCK {
		int a;
	} FUCK;
};

int main() {
	struct Unsigned_Integers Uns_Ints;
	Uns_Ints.a = 5;
	Uns_Ints.b = 10;
	Uns_Ints.c = 'b';
	Uns_Ints.d = 4.56;
	Uns_Ints.e = 234.234213211;

	Uns_Ints.FUCK.a = 234512;

	printf("%d\n%d\n%c\n%f\n%lf\n%d\n\n", Uns_Ints.a, Uns_Ints.b, Uns_Ints.c, Uns_Ints.d, Uns_Ints.e, Uns_Ints.FUCK.a);
}