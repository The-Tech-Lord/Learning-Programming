// Taken from Java Docs

public class NestedClasses3 {
	private final static int SIZE = 15;
	private int[] arrayOfInts = new int[SIZE];

	public NestedClasses3() {
		// Fill the array with ascending integer values
		for (int i = 0; i < SIZE; i++) {
			arrayOfInts[i] = i;
		}
	}

	public void printEven() {
		// Print out values of even indices of the array
		DataStructureIterator iterator = new EvenIterator();
		while (iterator.hasNext())
			System.out.println(iterator.next() + " ");
		System.out.println();
	}

	interface DataStructureIterator extends java.util.Iterator<Integer> {  }

	private class EvenIterator implements DataStructureIterator {
		private int nextIndex = 0;

		public boolean hasNext() {
			return (nextIndex <= SIZE - 1);
		}

		public Integer next() {
			Integer retValue = Integer.valueOf(arrayOfInts[nextIndex]);
			nextIndex += 2;
			return retValue;
		}
	}

	public static void main(String[] args) {
		NestedClasses3 nc = new NestedClasses3();
		nc.printEven();
	}
}
