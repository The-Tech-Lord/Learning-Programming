public class InterfaceAsType implements MyInterface {
	public void frob() {
		doFrobbing();
	}

	private void doFrobbing() {
		System.out.println("frobbing");
	}

	public static void main(String[] args) {
		MyInterface myObj = new InterfaceAsType();
		myObj.frob();
		((InterfaceAsType)myObj).doFrobbing();
	}
}

interface MyInterface {
	void frob();
}
