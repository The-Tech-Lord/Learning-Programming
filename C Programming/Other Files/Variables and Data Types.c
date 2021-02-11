#include <stdio.h>
#include <stdlib.h>

int main() {
	char characterName[] = "John"; // Strings don't exist in C, its an ARRAY of characters!
								   // So you can basically treat it like an array of characters and
								   // Add stuff to it
	char characterNames = 'A';

	int i, j; // Uninitialized variables, you can do this for multiple variables like this, but you don't have to

	// Unsigned varibles start at 0
	// Add const at the beginning to make in unchangable, ex. const int = 1;

	short int x = 32767; // -32,768 to 32,767
	unsigned short int y = 65535; // 0 to 65,535
	unsigned int z = 4294967295; // 0 to 4,294,967,295
	int a = 2147483647; // -2,147,483,648 to 2,147,483,647
	long int b = 2147483648; // -2,147,483,648 to 2,147,483,647
	unsigned long int c = 4294967295; // 0 to 4,294,967,295
	long long int d = 9223372036854775807; // -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

	// Problem here
	// unsigned long long int e = -9223372036854775807; // 0 to 18,446,744,073,709,551,615

	signed char f = 127; // -128 to 127
	float g = 1.9999999; // Holds up to 7 decimal points
	double h = 1.999999999999999; // Holds up to 15 deciaml points
	long double i = 1.999999999999999999; // Holds up to 18 decimal points


	printf("%Lf \n", i); 
	return 0;
}