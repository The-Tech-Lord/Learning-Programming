public class SuperConstructors {
	public static void main(String[] args) {
		System.out.println(new UrMom(5, 6, 7, 8).startGear);
	}
}

class UrDad {
	int startSpeed;
	int startCandece;
	int startGear;

	public UrDad(int startSpeed, int startCandece, int startGear) {
		this.startSpeed = startSpeed;
		this.startCandece = startCandece;
		this.startGear = startGear;
	}
}

class UrMom extends UrDad {
	int seatHeight;

	public UrMom(int startHeight, int startCandece, int startGear, int startSpeed) {
		super(startHeight, startCandece, startGear);
		this.seatHeight = startHeight;
	}	
}
