/*
【概要】
標準入力より関東の件名を入力し、
標準入力にその県の県庁所在地を出力する。
※正しい件名のみ入力されるものとする。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Scanner;

public class Kadai0106 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		System.out.print("関東の件名 ==> ");

		switch (scanner.next()) { // 県名の入力
			case "茨城":
				System.out.println("水戸市");
				break;
			case "栃木":
				System.out.println("宇都宮市");
				break;
			case "群馬":
				System.out.println("前橋市");
				break;
			case "埼玉":
				System.out.println("さいたま市");
				break;
			case "千葉":
				System.out.println("千葉市");
				break;
			case "神奈川":
				System.out.println("横浜市");
				break;
		}
	}
}

/*
【実行結果1】
関東の件名 ==> 栃木
宇都宮市

【実行結果2】
関東の件名 ==> 群馬
前橋市

【実行結果3】
関東の件名 ==> 茨城
水戸市

【実行結果4】
関東の件名 ==> 埼玉
さいたま市

【実行結果5】
関東の件名 ==> 千葉
千葉市

【実行結果6】
関東の件名 ==> 神奈川
横浜市
*/
