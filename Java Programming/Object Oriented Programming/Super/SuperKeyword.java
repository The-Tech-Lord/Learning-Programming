public class SuperKeyword extends SuperClass {
	void printMethod() {
		super.printMethod(); // You cannot use the super keyword in main due to how
							 // Java works and teh JVM
		System.out.println("Printed in subclass");
	}

	public static void main(String[] args) {
		SuperKeyword kido = new SuperKeyword();
		kido.printMethod();
	}
}

class SuperClass {
	void printMethod() {
		System.out.println("Printed in Superclass");
	}
}
