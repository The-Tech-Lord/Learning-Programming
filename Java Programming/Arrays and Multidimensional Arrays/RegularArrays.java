import java.util.Arrays;

public class RegularArrays {
	public static void main(String[] args) {
		int[] numbers = new int[5]; // Old method of making arrays
		numbers[0] = 5;
		numbers[1] = 6;
		System.out.println(Arrays.toString(numbers));

		int[] numbers2 = { 1, 2, 3, 4, 5 }; // Thanks god they added this
		System.out.println(Arrays.toString(numbers2));
	}
}
