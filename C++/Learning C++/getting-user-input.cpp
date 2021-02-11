#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int age;
	cout << "Enter your age: ";
	//Use cin to get input
	cin >> age;
	cout << "You are " << age << " years old" << endl;

	string name;
	cout << "Enter your name: ";
	//Use getlin() to get an entire line of text
	getline(cin, name);
	cout << "Hello " << name;
}