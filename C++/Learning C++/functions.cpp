#include <iostream>
#include <cmath>
using namespace std;

//You can put your functions on the bottom and declare them above the
//main() function
void sayHi(string name, int age);

int main() {
	cout << "Top" << endl;
	//You can call it as many times as you want
	sayHi("Mike", 26);
	cout << endl << "Bottom";
}

//Putting in void means that it won't return anything
//You can also pass parameters
//When making functions, your gonna need to put in a return type
void sayHi(string name, int age) {
	cout << "Hello " << name << " you are " << age;
}