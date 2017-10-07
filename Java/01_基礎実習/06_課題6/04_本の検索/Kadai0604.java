package jkadai06;

import java.util.HashMap;
import java.util.Scanner;

public class Kadai0604 {
	public static void main(String[] args) {
		HashMap<String, Book> hashMap = new HashMap<>();

		hashMap.put("坊っちゃん", new Novel(1, "坊っちゃん", 1500, "夏目漱石")); // (1),(2),(3)
		hashMap.put("雪国", new Novel(4, "雪国", 1400, "川端康成"));
		hashMap.put("月刊 Java", new MonthlyMagazine(2, "月刊 Java", 800, 25));
		hashMap.put("月刊 Servlet", new MonthlyMagazine(5, "月刊 Servlet", 900, 10));
		hashMap.put("週刊 C言語", new WeeklyMagazine(3, "週刊 C言語", 500, "火曜日"));

		Scanner sc = new Scanner(System.in);

		while (true) {
			System.out.print("書名 ==> ");
			String bookName = sc.nextLine();

			if (bookName.isEmpty())
				break;

			System.out.println("*** 検索結果 ***");

			int count = 0;
			for (String str : hashMap.keySet()) {
				count++;

				if (str.equals(bookName)) {
					hashMap.get(str).printData();
					break;
				} else if (count == hashMap.size()) {
					System.out.println("該当する本はありません。\n"); // (4)
				}
			}
		}
	}
}
 /*
【実行結果】
書名 ==> 雪国
*** 検索結果 ***
番号 : 4
書名 : 雪国
価格 : 1400
著者名 : 川端康成

書名 ==> 月刊 Java
*** 検索結果 ***
番号 : 2
書名 : 月刊 Java
価格 : 800
発行日 : 25

書名 ==> 週刊 COBOL
*** 検索結果 ***
該当する本はありません。

書名 ==> 坊っちゃん
*** 検索結果 ***
番号 : 1
書名 : 坊っちゃん
価格 : 1500
著者名 : 夏目漱石

書名 ==>
*/