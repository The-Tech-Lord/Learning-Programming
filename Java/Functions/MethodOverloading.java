public class MethodOverloading {
	public static void main(String[] args) {
		hello1("Bitch");
		hello2(5);
		hello3('A');
	}

	public static void hello1(String name) {
		System.out.println("Hello " + name);
	}
	public static void hello2(int number) {
		System.out.println("Your number is " + number);
	}
	public static void hello3(char character) {
		System.out.println("Hello " + character);
	}
}
