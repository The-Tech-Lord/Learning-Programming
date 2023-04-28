public class LambdaExpressions {
	public static void main(String[] args) {
		Greet greetFunction = () -> System.out.println("Hello World");
		greetFunction.greetings();

		DoubleNumber doubleNumberFunction = (int a) -> a * 2; // When inline you don't have to put in return
		System.out.println(doubleNumberFunction.math(5));	
		
		Add addFunction = (a, b) -> a + b;
		System.out.println(addFunction.math(5, 6));

		SafeDivide safeDivideFunction = (int a, int b) -> {
			if (b == 0) return 0;
			return a / b;
		};
		System.out.println(safeDivideFunction.math(5, 6));

		String string = "Hello!";
		StringLength stringLengthCountFunction = (String s) -> s.length();
		System.out.println(stringLengthCountFunction.length(string));
	}
}

interface Greet { void greetings(); }
interface DoubleNumber { int math(int a); }
interface Add { int math(int a, int b); }
interface SafeDivide { int math(int a, int b); }
interface StringLength { int length(String s); }
