public class EvolvingInterfaces {
	public static void main(String[] args) {

	}
}	

interface DoIt {
	void doSomething(int i, double x);
	int doSomethingElse(String s);
	// You can set default methods that will be already defined.
	// This is useful if you want to deploy a feature without breaking
	// someones code
	//
	// Only default and static methods can do this
	default boolean didItWork(int i, double x, String s) {
		return true;
	}
}
