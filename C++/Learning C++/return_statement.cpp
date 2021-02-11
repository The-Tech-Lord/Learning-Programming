#include <iostream>
using namespace std;

double cube(double num) {
	double result = num * num * num;
	return result; //Don't have to do it like this
}

int main() {
	//Just storing it in a variable
	double answer = cube(5.0);
	cout << answer;
}