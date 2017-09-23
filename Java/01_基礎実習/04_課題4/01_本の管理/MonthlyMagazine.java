package jkadai04;

public class MonthlyMagazine extends Book { // (2)月刊誌クラス
	private int issueDay;

	public MonthlyMagazine(int no, String title, int price, int issueDay) {
		super(no, title, price);
		this.issueDay = issueDay;
	}

	@Override
	public void printData() {
		super.printData();
		System.out.println("発行日 : " + issueDay + "\n");
	}
}
