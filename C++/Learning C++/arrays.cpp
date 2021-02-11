#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int luckyNums[] = {4, 8, 15, 16, 23, 42};
	//You can access the index of an array
	//You can also override values
	luckyNums[0] = 19;
	cout << luckyNums[0];
}