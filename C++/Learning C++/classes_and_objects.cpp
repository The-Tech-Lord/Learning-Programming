#include <iostream>
using namespace std;

//Classes are like the blueprint for an object

class Book {
	public:
		string title;
		string author;
		int pages;
};

int main() {
	//These are the instances of the class, objects
	Book book1;
	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.pages = 500;

	Book book2;
	book2.title = "Lord of the Rings";
	book2.author = "Tolkein";
	book2.pages = 700;

	cout << book1.title << endl;
	cout << book2.author;
}