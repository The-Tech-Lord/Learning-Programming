#include <iostream>
using namespace std;

int main() {
	string characterName = "John";
	int characterAge;
	characterAge = 35;

	cout << "There was once a man named " << characterName << endl;
	cout << "He was " << characterAge << " years old" << endl;

	//You can change the variable any time
	characterName = "Mike";
	cout << "He liked the name " << characterName << endl;
	cout << "But did not like being " << characterAge << endl;
}