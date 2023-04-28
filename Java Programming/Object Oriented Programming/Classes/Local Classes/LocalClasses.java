// Taken from Java Docs

public class LocalClasses {
	static String regularExpression = "[^0-9]";

	public static void validatePhoneNumber(String phoneNumber1, String phoneNumber2) {
		final int numberLength = 10; // JDK 8 and later variables can be final or essentially final

		class PhoneNumber {
			String formattedPhonenumber = null;

			PhoneNumber(String phoneNumber) {
				// numberLength = 7;
				// If you add this, when the constructor gets run and changes the variable (If not declared final)
				// it will no longer be considered essentially final. A local class can only access local variables
				// if they are declared final or essentially final.
				String currentNumber = phoneNumber.replaceAll(regularExpression, "");
				if (currentNumber.length() == numberLength)
					formattedPhonenumber = currentNumber;
				else
					formattedPhonenumber = null;
			}

			public String getNumber() {
				return formattedPhonenumber;
			}

			// Valid in JDK 8 and later (Being able to use the outer methods parameters)
			public void printOriginalNumbers() {
				System.out.println("Original numbers are " + phoneNumber1 + " and " + phoneNumber2);
			}
		}

		PhoneNumber myNumber1 = new PhoneNumber(phoneNumber1);
		PhoneNumber myNumber2 = new PhoneNumber(phoneNumber2);

		// Valid in JDK 8 and later
		myNumber1.printOriginalNumbers();

		if (myNumber1.getNumber() == null)
			System.out.println("First number is invalid");
		else
			System.out.println("First number is " + myNumber1.getNumber());

		if (myNumber2.getNumber() == null)
			System.out.println("Second number is invalid");
		else
			System.out.println("Second number is " + myNumber2.getNumber());
	}

	public static void main(String[] args) {
		validatePhoneNumber("123-456-7890", "456-7890");
	}
}
