public class IfStatement {
	public static void main(String[] args) {
		boolean isMale = true;
		boolean isTall = true;
		if (isMale && isTall) {
			System.out.println("You are male and tall");
		} else {
			System.out.println("You are either not male, not tall, or both");
		}
	}
}
