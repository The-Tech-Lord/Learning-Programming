#include <stdio.h>
#include <stdlib.h>

// Posted on r/badcode
// https://www.reddit.com/r/badcode/comments/hv57hr/this_keeps_on_going_quite_some_lines/

int main() {
	int variable = 15; // Made for testing purposes
	char img[15];
	for (int i = 1; i <= variable; i++) {
		if (variable == i) {
			sprintf(img, "/prio_0%d.png", variable);
			printf("%s\n", img); break;
		}
	}
}