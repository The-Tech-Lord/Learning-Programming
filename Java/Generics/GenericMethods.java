public class GenericMethods {
	public static void main(String[] args) {
		Pair<Integer, String> p1 = new Pair<>(1, "apple");
		Pair<Integer, String> p2 = new Pair<>(2, "pear");

		// You can just do Util.compare(p1, p2); if you want
		// Java is smart enough to predict the generic types
		boolean same = Util.<Integer, String>compare(p1, p2);
		System.out.println(same);
	}
}

class Util {
	public static <K, V> boolean compare(Pair<K, V> p1, Pair<K, V> p2) {
		return p1.getKey().equals(p2.getKey()) && p1.getValue().equals(p2.getValue());
	}
}

class Pair<K, V> {
	private K key;
	private V value;

	public Pair(K key, V value) {
		this.key = key;
		this.value = value;
	}

	public void setKey(K key) { this.key = key; }
	public void setValue(V value) { this.value = value; }
	public K getKey() { return key; }
	public V getValue() { return value; }
}
