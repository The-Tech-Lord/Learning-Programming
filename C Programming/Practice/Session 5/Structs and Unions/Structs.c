#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Nightmare {
	int a;
	char *name;
};

int main() {
	struct Nightmare fuck;
	fuck.a = 5;
	fuck.name = (char *)malloc(sizeof(char) * 20);
	if (fuck.name == NULL)
		exit(1);
	strcpy(fuck.name, "Shintaro");

	printf("%d %s\n", fuck.a, fuck.name);
	free(fuck.name);
}
