package jkadai04;

import java.util.Scanner;

public class BookSearch extends Book implements Search {
	private Book[] book; // ①
	boolean hitFlag;

	public BookSearch() {
		book = new Book[] { // ②
				new Book(1, "坊っちゃん", 1500),
				new Book(2, "月刊 Java", 800),
				new Book(3, "週刊 C言語", 500),
				new Book(4, "雪国", 1400),
				new Book(5, "月刊 Servlet", 900),
		};
	}

	@Override
	public void inputNo() { // ③
		Scanner scanner = new Scanner(System.in);

		System.out.println("*** 書籍検索 ***");
		System.out.print("書籍番号 ==> ");
		setNo(scanner.nextInt());
	}

	@Override
	public void searchName() { // ③
		for (Book i : book)
			if (getNo() == i.getNo()) {
				setNo(i.getNo());
				setTitle(i.getTitle());
				setPrice(i.getPrice());
				hitFlag = true;
				break;
			}
	}

	@Override
	public void printData() { // ③
		System.out.println("*** 検索結果 ***");

		if (hitFlag != false)
			System.out.println(
				"番号：" + getNo() + "\n" +
				"書名：" + getTitle() + "\n" +
				"価格：" + getPrice());
		else
			System.out.println("見つかりません。");
	}
}
