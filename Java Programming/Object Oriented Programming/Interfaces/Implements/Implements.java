public class Implements {
	public static void main(String[] args) {
		Cow urMom = new Cow();
		urMom.eat();

		Dog myDog = new Dog();
		myDog.eat();

		Animal[] myAnimals = {
			new Bird(),
			new Dog(),
			new Cow()
		};
		for (int i = 0; i < 3; i++)
			myAnimals[i].eat();
	}
}
