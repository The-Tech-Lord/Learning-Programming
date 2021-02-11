#include <iostream>
using namespace std;

template <class testFile> //Its like making a class datatype
testFile GetMax (testFile a, testFile b) {
	testFile result;
	result = (a > b) ? a : b;
	return (result);
}

int main() {
	int m = 6, j = 7, k;
	long l = 10, h = 5, n;
	k = GetMax <int> (m, j); //testFile gets replaced with the datatypes we want
	n = GetMax <long> (l, h);
	cout << k << endl;
	cout << n << endl;
}