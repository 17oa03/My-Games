// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Sprit {
	public static void main(String[] args) {

		String str; // String クラス型変数 str の宣言
		String[] strArray; // String クラス型配列 strArray の宣言

		Scanner scanner = new Scanner(System.in); // Scanner クラスのインスタンスを変数 scanner に代入

		System.out.print("文字列 ==> "); // 出力
		str = scanner.nextLine(); // 標準入力

		strArray = str.split(","); // split メソッドが配列 str の文字列をカンマの位置で区切って取得

		System.out.println("---カンマ区切り出力---"); // 出力
		for (String s : strArray) { // strArray[0] = "aaa"; strArray[1] = "bbbbb"; strArray[2] = "333";
			System.out.println(s); // 出力
		}
	}
}

/*
【実行結果】
文字列 ==> aaa,bbbbb,333
---カンマ区切り出力---
aaa
bbbbb
333
*/