public class GetAndSet {
	public static void main(String[] args) {
		Movie movie1 = new Movie("The Avengers", "Joss Whedon", "PG-13");
		Movie movie2 = new Movie("Step Brothers", "Adam McKay", "R");

		movie1.setRating("PG");
		System.out.println(movie1.getRating());
		System.out.println(movie2.getDirector());
	}
}
