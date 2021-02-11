#include <iostream>
using namespace std;

int main() {
	string phrase = "Giraffe Academy"; //endl creates a new line you can do the same with \n inside the string
	//You can also index a string with []'s
	cout << phrase[0] << endl;
	//.length() is used to get the length of something
	cout << phrase.length() << endl;

	phrase[0] = 'B';
	cout << phrase << endl;
	//You can use .find() to find something using parameters
	cout << phrase.find("Academy", 0) << endl;
	//.substr() allows you to get a certain ammount of values
	cout << phrase.substr(8, 3);
}