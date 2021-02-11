#include <iostream>
using namespace std;

int main() {
	int index = 1;
	while(index <= 5) {
		cout << index << endl;
		index++;
	}
	//A do while loop exacutes and then checks the conditions
	do {
		cout << index << endl;
		index++;
	} while (index <= 5);
}