public class Songs {
	private String title;
	private String artist;
	private int length;
	private static int song = 0;

	public Songs(String title, String artist, int length) {
		this.title = title;
		this.artist = artist;
		this.length = length;
		song++;
	}

	public String getTitle() {
		return title;
	}
	public String getArtist() {
		return artist;
	}
	public int getLength() {
		return length;
	}
	public int getSongNum() {
		return song;
	}
}
