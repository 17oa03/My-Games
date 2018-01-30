package jkadai04;

public class Kadai0401 {
	public static void main(String[] args) {
		Book[] books = new Book[5];

		books[0] = new Novel(1, "坊っちゃん", 1500, "夏目漱石"); // ①(1冊目のインスタンスを生成)
		books[1] = new MonthlyMagazine(2, "月刊 Java", 800, 25); // ②(2冊目のインスタンスを生成)
		books[2] = new WeeklyMagazine(3, "週刊 C言語", 500, "火曜日"); // ③(3冊目のインスタンスを生成)
		books[3] = new Novel(4, "雪国", 1400, "川端康成"); // ④(4冊目のインスタンスを生成)
		books[4] = new MonthlyMagazine(5, "月刊 Servlet", 900, 10); // ⑤(5冊目のインスタンスを生成)

		for (Book i : books)
			i.printData(); // ⑥⑦⑧⑨⑩(1, 2, 3, 4, 5冊目の内容を出力)
	}
}

/*
【実行結果】
番号 : 1
書名 : 坊っちゃん
価格 : 1500
著名者 : 夏目漱石

番号 : 2
書名 : 月刊 Java
価格 : 800
発行日 : 25

番号 : 3
書名 : 週刊 C言語
価格 : 500
発行曜日 : 火曜日

番号 : 4
書名 : 雪国
価格 : 1400
著名者 : 川端康成

番号 : 5
書名 : 月刊 Servlet
価格 : 900
発行日 : 10
*/