package jkadai03;

import java.util.Scanner;

public class BookMgt {
	private Book[] books; // ①(クラス型配列の宣言)
	private String novelist; // ①(作家名のフィールド)
	private String novel; // ①(作品名のフィールド)

	public BookMgt() { // ②(コンストラクタ)
		books = new Book[] { // ②(インスタンス配列の生成)
			new Book("夏目漱石",   "坊っちゃん"),
			new Book("国木田独歩", "武蔵野"),
			new Book("樋口一葉",   "たけくらべ"),
			new Book("石川啄木",   "一握の砂"),
			new Book("森鴎外",     "舞姫"),
			new Book("芥川龍之介", "羅生門"),
		};
	}

	public void input() { // ③(作品名入力メソッド)
		Scanner sc = new Scanner(System.in);

		System.out.print("作品名 ==> ");
		novel = sc.nextLine(); // (4)文字列入力
	}

	public void search() { // ③(作家名探索メソッド)
		int i;
		boolean hitFlag = false;

		for (i = 0; i < books.length && hitFlag == false; i++) {
			if (books[i].getNovel().equals(novel))
				hitFlag = true;
		}

		if (hitFlag == true)
			novelist = "作品名 : " + books[i - 1].getNovelist();
		else
			novelist = "見つかりません。"; // (4)存在しない場合のメッセージ出力
	}

	public void output() { // ③(探索結果出力メソッド)
		System.out.println(novelist);
	}
}