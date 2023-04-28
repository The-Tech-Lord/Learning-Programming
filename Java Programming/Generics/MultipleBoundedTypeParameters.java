public class MultipleBoundedTypeParameters {
	public static void main(String[] args) {

	}
}

class A {
	int a;
	int b;
}

interface B {
	default int somethingSomething(int c, int d) {
		return c * d;
	}
}
interface C {
	default int something(int a, int b) {
		return a + b;
	}
}

class E <T extends A & B & C> {
	/* Some random code idk I'm too lazy to right some */
}
