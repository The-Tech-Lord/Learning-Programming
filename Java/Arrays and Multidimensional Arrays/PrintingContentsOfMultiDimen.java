public class PrintingContentsOfMultiDimen {
	public static void main(String[] args) {
		String[][] People = {
			{"Mike", "Kido", "Shuuya", "Ray"},
			{"Shintaro", "Marry", "Seto", "Maunia"},
			{"Momo", "Konoha", "Azami", "Tsukihiko"}
		};

		for (byte i = 0; i < 3; i++)
			for (byte ii = 0; ii < 4; ii++)
				System.out.println(People[i][ii]);
	}
}
