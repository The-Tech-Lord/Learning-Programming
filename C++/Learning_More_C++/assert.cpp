#include <iostream>
#include <cassert>

int main() {
	assert(2 + 2 == 4);
		std::cout << "Execution continues past the first assert\n";
	assert(2 + 2 == 5); //Takes in conditions apprently
						//Its sort of like an error handler but its not
		std::cout << "Excution continues past the second assert\n";
}