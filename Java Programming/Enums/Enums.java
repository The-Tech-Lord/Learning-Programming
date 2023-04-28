public class Enums {
	Day day;
	public enum Day {
		SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
	}

	public Enums(Day day) {
		this.day = day;
	}

	public void tellItLikeThis() {
		switch (day) {
			case MONDAY: System.out.println("Mondays are bad");
						 break;
			case FRIDAY: System.out.println("Fridays are better");
						 break;
			case SATURDAY: case SUNDAY:
						 System.out.println("Weekends are best");
						 break;
			default: System.out.println("Midweek days are so-so");
					 break;
		}
	}

	public static void main(String[] args) {
		Enums firstday = new Enums(Day.MONDAY);
		firstday.tellItLikeThis();
	}
}
