public class ReturningClasses {
	public static void main(String[] args) {
		Class class1 = new Class(5, "Loli");
		Class class2 = class1.returnObject(6, "Lolicon");
		System.out.println(class2.number);
		System.out.println(class2.name);
	}
}

class Class {
	int number;
	String name;

	public Class(int number, String name) {
		this.number = number;
		this.name = name;
	}

	public Class returnObject(int number, String name) {
		Class obj = new Class(number, name);
		return obj;
	}
}
