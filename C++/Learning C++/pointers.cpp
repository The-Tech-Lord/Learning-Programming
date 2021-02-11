#include <iostream>
using namespace std;

//A pointer is just a memory address

int main() {
	//You can create pointer varibles by using the * and then doing something
	//like below. Then your able to store pointers in pointer variables

	int age = 19;
	int *pAge = &age; //Pweety cowers
	double gpa = 2.7;
	double *pGpa = &gpa;
	string name = "Mike";
	string *pname = &name;

	//Prints out the variables memory address, and you'd find the value of age
	//Use & to do this like below
	cout << &age << endl;

	//This is called dereferencing. Since the pointer variable
	//Has a memory address stored in it, doing this will print out the
	//value at the memory address
	cout << *&age << endl;
	cout << *pAge << endl; //This just prints out the value basically

	cout << &*&gpa; //Doing this prints out the memory address
					//Don't know why'd you would do this though
}