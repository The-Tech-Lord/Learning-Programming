public class StaticInitializationBlock {
	static String something = "";
	// Static initialization blocks are always run before the main method is run
	static {
		something = "Hello world!";
		System.out.println("FUCK");
	}

	public static void main(String[] args) {
		// If it's in another class you have to create an object
		// for the block to run
		StaticSomething somethingOBJ = new StaticSomething();
		System.out.println(something);
	}
	static {
		System.out.println("First");
	}
}
