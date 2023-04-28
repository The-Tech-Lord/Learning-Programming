public class OverrideAnnotation {
	public static void main(String[] args) {
		Ba idk = new Ba();
		idk.something();
	}
}

class Aa {
	void something() {
		System.out.println("aaaaaaaaa");
	}
}

class Ba extends Aa {
	@Override
	void something() {
		// You don't have to use @Override but it can be used when
		// you are updating some code or want to make sure something gets Overrided.
		// Also make sure that it does not conflict with other names like class name.
		System.out.println("bbbbbbbbb");
	}
}
