public class Static {
	public static void main(String[] args) {
		// Song = 0
		Songs holiday = new Songs("Holiday", "Green Day", 200);
		Songs americanIdiot = new Songs("American Idiot", "Green Day", 168);

		// Static variables belong to the class instead of the instance inself
		// When it gets, say incremented, it will happen across all instances.
		// You can also access with the syntax class.<static variable> and it
		// will work as long as it's not private
		System.out.println(holiday.getArtist()); // Song = 1
		System.out.println(americanIdiot.getLength()); // Song = 2

		System.out.println(holiday.getSongNum());
		System.out.println(americanIdiot.getSongNum());

		System.out.println(Second.number);
	}
}
