package jkadai06;

public class Novel extends Book { // (2)小説クラス
	private String authorName;

	public Novel(int no, String title, int price, String authorName) {
		super(no, title, price);
		this.authorName = authorName;
	}

	@Override
	public void printData() {
		super.printData();
		System.out.println("著者名 : " + authorName + "\n");
	}
}
