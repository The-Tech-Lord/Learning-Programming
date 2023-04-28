public class NestedClasses {
	public static void main(String[] args) {
		IHaveNoIdea ab = new IHaveNoIdea();
		IHaveNoIdea.InnerStrife bc = ab.new InnerStrife();
		System.out.println(ab.a + " " + bc.b);

		// If the class is static then you can just do this
		IHaveNoIdea.StaticUrMom abc = new IHaveNoIdea.StaticUrMom();
		System.out.println(abc.c);
	}
}

class IHaveNoIdea {
	int a = 4;

	class InnerStrife {
		int b = 5;
	}

	// If a class is static then it can't see outside it's curly braces
	static class StaticUrMom {
		int c = 6;
	}
}
