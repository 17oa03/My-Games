package jkadai04;

import java.util.Scanner;

public class Kadai0407 {
	public static void main(String[] args) {
		Search search = null;
		Scanner scanner = new Scanner(System.in);

		System.out.print("処理区分(1:社員の検索, 2:書籍の検索) ==> ");
		switch (scanner.nextInt()){ // ①
			case 1 : // ②
				search = new EmployeeSearch();
				break;
			case 2 : // ②
				search = new BookSearch();
				break;
		}

		search.inputNo(); // ③
		search.searchName(); // ④
		search.printData(); // ⑤
	}
}

/*
【実行結果1】
処理区分(1:社員の検索, 2:書籍の検索) ==> 1
*** 社員検索 ***
社員番号 ==> 10
*** 検索結果 ***
番号：10, 氏名：東京太郎, 給与：300000

【実行結果2】
処理区分(1:社員の検索, 2:書籍の検索) ==> 1
*** 社員検索 ***
社員番号 ==> 50
*** 検索結果 ***
番号：50, 氏名：東京五郎, 給与：320000

【実行結果3】
処理区分(1:社員の検索, 2:書籍の検索) ==> 1
*** 社員検索 ***
社員番号 ==> 33
*** 検索結果 ***
見つかりません。

【実行結果4】
処理区分(1:社員の検索, 2:書籍の検索) ==> 2
*** 書籍検索 ***
書籍番号 ==> 1
*** 検索結果 ***
番号：1
書名：坊っちゃん
価格：1500

【実行結果5】
処理区分(1:社員の検索, 2:書籍の検索) ==> 2
*** 書籍検索 ***
書籍番号 ==> 5
*** 検索結果 ***
番号：5
書名：月刊 Servlet
価格：900

【実行結果6】
処理区分(1:社員の検索, 2:書籍の検索) ==> 2
*** 書籍検索 ***
書籍番号 ==> 6
*** 検索結果 ***
見つかりません。
*/