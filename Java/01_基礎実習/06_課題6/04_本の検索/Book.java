package jkadai06;

public class Book {
	private int no;
	private String title;
	private int price;

	public Book(int no, String title, int price) {
		this.no = no;
		this.title = title;
		this.price = price;
	}

	public Book() {
	}

	public void setNo(int no) {
		this.no = no;
	}

	public void setTitle(String title) {
		this.title = title;
	}

	public void setPrice(int price) {
		this.price = price;
	}

	public int getNo() {
		return no;
	}

	public String getTitle() {
		return title;
	}

	public int getPrice() {
		return price;
	}

	public void printData() {
		System.out.println(
			"番号 : " + no + "\n" +
			"書名 : " + title + "\n" +
			"価格 : " + price);
	}
}
