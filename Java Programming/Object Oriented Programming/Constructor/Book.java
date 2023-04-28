public class Book {
	String title;
	String author;
	int pages;
	String language;

	// The constructor method has to have the same name as the class
	// and also you can use method overloading on constructor methods!!
	public Book(String title, String author, int pages, String language) {
		this.title = title;
		this.author = author;
		this.pages = pages;
		this.language = language;
	}
}
