public class DeprecatedStuff {
	public static void main(String[] args) {
		// Rules of Deprecation
		// 1. Deprecated cannot work if the deprecated element is declared and used both within the same outermost class
		// 2. Deprecated cannot work if you used @SupressWarnings("deprecation")
		// 3. Deprecated cannot work if you use the deprecated element in another deprecated element
		DeprecatedMethod obj = new DeprecatedMethod();
		obj.deprecateMethod();
	}
}

class DeprecatedMethod {
	@Deprecated
	void deprecateMethod() {
		/**
		 * @deprecated
		 */

		System.out.println("nut");
	}
}
