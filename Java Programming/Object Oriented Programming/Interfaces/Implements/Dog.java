public class Dog implements Animal {
	@Override
	public void speak() {
		System.out.println("Woof woof");
	}
	@Override
	public void eat() {
		System.out.println("Eats some kibble");
	}
}
