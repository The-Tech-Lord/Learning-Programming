#include <iostream>
#include <cmath> //Math functions
using namespace std;

int main() {
	//You can do math, +, -, *, /, %, ()
	//You can also increment values, --, ++
	int wnum = 5;
	double dnum = 5.5; 

	cout << 10.0 / 3.0 << endl; //If it were integers, you'd get an integer, since its decimals, you'll get a full answer
	cout << pow(2, 5) << endl; //2 raised to the power of 5
	cout << sqrt(36) << endl; //Square root
	cout << round(4.3) << endl; //Will round the number
	cout << ceil(4.2) << endl; //Will round it up no matter what
	cout << floor(4.6) << endl; //Will round it down no matter what
	cout << fmax(3, 10); //Will take the bigger number, fmin() does the opposite
}