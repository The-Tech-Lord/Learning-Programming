public class Movie {
	// Getters and Setters are usually used for private access control
	// The methods don't have to start with set or get, it's just a
	// naming convention
	private String title;
	private String director;
	private String rating; // Restricts access to the variable

	public Movie(String title, String director, String rating) {
		this.title = title;
		this.director = director;
		this.rating = rating;
	}
	
	// Allows you to have more control over the setting of values
	// when other people use your programs
	public void setRating(String rating) {
		if (rating.equals("G") || rating.equals("PG") || rating.equals("PG-13") || rating.equals("R") || rating.equals("NR")) {
			this.rating = rating;
		} else {
			this.rating = "NR";
		}
	}

	public String getRating() {
		return this.rating;
	}
	public String getTitle() {
		return this.title;
	}
	public String getDirector() {
		return this.director;
	}
}
