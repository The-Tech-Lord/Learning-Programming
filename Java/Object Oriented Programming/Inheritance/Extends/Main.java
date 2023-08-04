public class Main {
	public static void main(String[] args) {
		Chef normalChef = new Chef();
		normalChef.makeChicken();

		ItalianChef italianChef = new ItalianChef();
		italianChef.makeSpecialDish();

		ChineseChef chineseChef = new ChineseChef();
		chineseChef.makeChicken();
	}
}
