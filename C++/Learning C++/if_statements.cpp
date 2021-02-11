#include <iostream>
using namespace std;

int main() {
	bool isMale = true;
	bool isTall = false;
	//Saying that if isMale and isTall is true, kinda hard to see that here imo
	//It can still do normal conditions like in other programming languages
	if(isMale && isTall) {
		cout << "You are a tall male";
	} else if(isMale && !isTall) { //This is weird to me, like wth
		cout << "You are a short male";
	} else if(!isMale && isTall) {
		cout << "You are tall but not male";
	} else {
		cout << "You are not male and not tall";
	}
}