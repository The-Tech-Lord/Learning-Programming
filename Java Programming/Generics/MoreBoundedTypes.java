import java.lang.Comparable;

public class MoreBoundedTypes {
	public static void main(String[] args) {
		Integer[] arr = { 5, 8, 4, 9, 10 };
		System.out.println(Compare.countGreaterThan(arr, 3));
	}
}

class Compare {
	public static <T extends Comparable<T>> int countGreaterThan(T[] anArray, T elem) {
		int count = 0;
		for (T e : anArray)
			if (e.compareTo(elem) > 0)
				++count;
		return count;
	}
}
