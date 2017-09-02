/*
【概要】
標準入力より、
カンマで区切られた一つの文字列を入力し、
入力した文字列をカンマで区切り、
別々の文字列とし標準出力に出力する。
*/

// 【プログラム】
package com.github.jkadai02;

import java.util.Scanner;

public class Kadai0205 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		String br = System.getProperty("line.separator"); // プラットフォームに適した改行コードを取得

		System.out.print("文字列 ==> ");
		String[] strAry = (scanner.nextLine()).split(","); // 入力

		System.out.println(br + "---カンマ区切り出力---");
		for (String s : strAry) // 出力ループ
			System.out.println(s); // 出力
	}
}

/*
【実行結果】
文字列 ==> C 言語,Java,データベース,HTML,JSP,サーブレット

---カンマ区切り出力---
C 言語
Java
データベース
HTML
JSP
サーブレット
*/