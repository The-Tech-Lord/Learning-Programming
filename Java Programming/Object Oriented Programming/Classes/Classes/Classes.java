public class Classes {
	public static void main(String[] args) {
		Student myStudent = new Student();
		myStudent.firstName = "Jim";
		myStudent.lastName = "Halpert";
		myStudent.major = "Computer Science";
		myStudent.gpa = 2.3;
		myStudent.age = 24;
		myStudent.onProbation = false;

		System.out.println(myStudent.firstName);

		Student myStudent2 = new Student();
		myStudent2.firstName = "Pam";
		myStudent2.lastName = "Halpert";
		myStudent2.major = "Computer Science";
		myStudent2.gpa = 4.3;
		myStudent2.age = 19;
		myStudent2.onProbation = true;

		System.out.println(myStudent2.firstName);
	}
}
