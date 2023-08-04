public class BoundedTypeParameters {
	public static void main(String[] args) {
		Box<Integer> integerBox = new Box<Integer>();
		integerBox.set(10);
		integerBox.inspect("some text"); // Won't work since it's recieving a string as input
										 // and not an integer

		NaturalNumber<Integer> someNumber = new NaturalNumber<>(5);
		System.out.println(someNumber.isEven());
	}
}

class Box<T> {
	private T t;

	public void set(T t) {
		this.t = t;
	}

	public T get() {
		return t;
	}

	public <U extends Number> void inspect(U u) {
		System.out.println("T: " + t.getClass().getName());
		System.out.println("U: " + u.getClass().getName());
	}
}

class NaturalNumber<T extends Number> {
	private T n;

	public NaturalNumber(T n) { this.n = n; }

	public boolean isEven() {
		// Since it's being constrained, Java knows that
		// other methods won't interfere and will let you use
		// the intValue method from the Number class
		return n.intValue() % 2 == 0;
	}
}
