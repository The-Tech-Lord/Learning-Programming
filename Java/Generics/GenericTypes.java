public class GenericTypes {
	public static void main(String[] args) {
		Integers integer = new Integers();
		integer.set(5); System.out.println(integer.get());

		Doubles doubles = new Doubles();
		doubles.set(56.46); System.out.println(doubles.get());

		// You can do `new Generics<Integer>();` if you want but you don't have to
		Generics<Integer> integers = new Generics<>();
		integers.set(7); System.out.println(integers.get());

		Generics<Double> doubless = new Generics<Double>();
		doubless.set(34.78); System.out.println(doubless.get());
	}
}

// The generic type within the <>'s can be any name but this is a
// naming convention that helps distinguish between variables and
// the generic type variables
class Generics<T> {
	private T t; // T stands for Type

	public void set(T t) { this.t = t; }
	public T get() { return t; }
}

// Java Generics help prevent us from creating identical code
// that works for different types
class Integers {
	private Integer i;

	public void set(Integer i) { this.i = i; }
	public Integer get() { return i; }
}

class Doubles {
	private Double d;

	public void set(Double d) { this.d = d; }
	public Double get() { return d; }
}
