#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

typedef struct Stuff {
	int a;
	int cum;
} Stuff;

typedef struct {
	int b;
	float SixtyFiveInchScrodum;
} AnotherOne;

typedef union WTHMichael {
	int c;
	double AAAAAAAAAAAAAAAAAA;
} WTHMichael;

typedef union {
	int d;
	unsigned int idkanymore;
} BRUH;

int main() {
	Stuff river;
	river.a = 5; river.cum = 10;

	AnotherOne stuff;
	stuff.b = 6; stuff.SixtyFiveInchScrodum = 234234234.234234234;
	printf("%d %d , %d %lf\n", river.a, river.cum, stuff.b, stuff.SixtyFiveInchScrodum);	

	WTHMichael fuck;
	int c; double idk;
	fuck.c = 234234; c = fuck.c;
	fuck.AAAAAAAAAAAAAAAAAA = 234324243.34353242; idk = fuck.AAAAAAAAAAAAAAAAAA;

	BRUH messy;
	int d; unsigned int sperm;
	messy.d = 4532342; d = messy.d;
	messy.idkanymore = 1234567890; sperm = messy.idkanymore;
	printf("%d %lf , %d %u\n", c, idk, d, sperm);
}
