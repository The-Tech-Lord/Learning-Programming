#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char names[6][20];
	// I just wanted to try using strcpy()
	strcpy(names[0], "Shintaro Kisaragi");
	strcpy(names[1], "Tsubomi Kido");
	strcpy(names[2], "Shuuya Kano");
	strcpy(names[3], "Mary Kozakura");
	strcpy(names[4], "Kousuke Seto");
	printf("%s\n%s\n%s\n%s\n%s\n", names[0], names[1], names[2], names[3], names[4]);
}
