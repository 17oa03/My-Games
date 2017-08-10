// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Mojiretsu1 {
	public static void main(String[] args) {

		String str1; // 「String」クラス型変数、基本データ型（プリミティブ型）には含まれない
		str1  = new String("aaaaa"); // 文字列の代入
		String str2 = new String("bbbbb");
		System.out.println("str1 = [" + str1 + "]");
		System.out.println("str1 = [" + str2 + "]");

		String str3;
		str3 = "ccccc";
		String str4 = "ddddd";
		System.out.println("str1 = [" + str3 + "]");
		System.out.println("str1 = [" + str4 + "]");

		String str5;
		Scanner scanner = new Scanner(System.in); // 「Scanner」クラスのインスタンスを「scanner」変数に代入
		System.out.print("文字列 ==> ");
		str5 = scanner.nextLine(); // 標準入力
		System.out.println("str5 = [" + str5 + "]");

		String str6 = null; // null を代入
		System.out.println("str6 = [" + str6 + "]");
		str6 = new String(); // コンストラクタ(クラスがnewされた直後に自動的に実行されるメソッド)が空のオブジェクトを生成
		System.out.println("str6 = [" + str6 + "]");
		str6 = "fffff";
		System.out.println("str6 = [" + str6 + "]");

	}
}

/*
【実行結果】
str1 = [aaaaa]
str1 = [bbbbb]
str1 = [ccccc]
str1 = [ddddd]
文字列 ==> eeeee
str5 = [eeeee]
str6 = [null]
str6 = []
str6 = [fffff]
*/