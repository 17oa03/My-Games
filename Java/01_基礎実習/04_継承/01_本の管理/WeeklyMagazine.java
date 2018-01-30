package jkadai04;

public class WeeklyMagazine extends Book { // (2)週刊誌クラス
	private String issueDate;

	public WeeklyMagazine(int no, String name, int price, String issueDate) {
		super(no, name, price);
		this.issueDate = issueDate;
	}

	public void printData() {
		super.printData();
		System.out.println("発行曜日 : " + issueDate + "\n");
	}
}
