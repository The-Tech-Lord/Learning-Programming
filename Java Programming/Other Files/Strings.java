public class Strings {
	public static void main(String[] args) {
		String word = "Hello World!" + "!!";
		System.out.println(word.endsWith("!!"));
		System.out.println(word.startsWith("!!"));
		System.out.println(word.length()); // Returns the length of a string
		System.out.println(word.indexOf("W")); // Finds the index of the first occurence of the passed in character
		System.out.println(word.replace("!", "*")); // Replaces the characters of a string
													// Java strings are immutable so when something modifies a string
													// it actually returns a copy
	}
}
