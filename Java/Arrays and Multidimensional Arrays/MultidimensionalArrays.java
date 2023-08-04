import java.util.Arrays;

public class MultidimensionalArrays {
	public static void main(String[] args) {
		int[][] multiDimen = new int[2][5]; // How to use old method
		System.out.println(Arrays.deepToString(multiDimen));

		int[][] multiDimen2 = { // The usual way to initiate arrays
			{ 1, 2, 3, 4, 5 },
			{ 6, 7, 8, 9, 10 }
		};
		System.out.println(Arrays.deepToString(multiDimen2));
	}
}
