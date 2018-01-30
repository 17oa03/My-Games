package jkadai04;

public class Book { // (3)小説, 月刊誌, 週刊誌クラスの共通部分を持つ親クラス
	private int no;
	private String title;
	private int price;

	public Book(int no, String title, int price) {
		this.no = no;
		this.title = title;
		this.price = price;
	}

	public void printData() {
		System.out.println("番号 : " + no + "\n" +
							"書名 : " + title + "\n" +
							"価格 : " + price);
	}
}
