#include <iostream>
using namespace std;

class Book {
	public:
		string title;
		string author;
		int pages;
		//The constructer functions runs when a new object is being created
		Book() {
			title = "No title";
			author = "No author";
			pages = 0;
		} //This one runs when there are no parameters

		//It can also take in parameters
		Book(string aTitle, string aAuthor, int aPages){
			title = aTitle; //The variable title is equal to the parameter passed in
			author = aAuthor;
			pages = aPages;
		}
};

int main() {
	//This is so much cleaner than before!
	Book book1("Harry Potter", "JK Rowling", 500);
	Book book2("Lord of the Rings", "Tolkein", 700);
	Book book3; //Didn't have to pass in parameters here since there is another Book constructer that doesn't take in parameters if that makes sense

	cout << book3.title;
}