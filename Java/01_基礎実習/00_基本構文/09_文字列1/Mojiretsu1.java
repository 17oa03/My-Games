// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Mojiretsu1 {
	public static void main(String[] args) {

		String str1; // String クラス型変数 str1 の宣言、基本データ型（プリミティブ型）には含まれない
		str1  = new String("aaaaa"); // 文字列の代入
		String str2 = new String("bbbbb"); // 文字列の代入
		System.out.println("str1 = [" + str1 + "]"); // 出力
		System.out.println("str1 = [" + str2 + "]"); // 出力

		String str3; // String クラス型変数 str3 の宣言
		str3 = "ccccc"; // 文字列の代入
		String str4 = "ddddd"; // 文字列の代入
		System.out.println("str1 = [" + str3 + "]"); // 出力
		System.out.println("str1 = [" + str4 + "]"); // 出力

		String str5; // String クラス型変数 str5 の宣言
		Scanner scanner = new Scanner(System.in); // Scanner クラスのインスタンスを変数 scanner に代入
		System.out.print("文字列 ==> ");
		str5 = scanner.nextLine(); // 標準入力
		System.out.println("str5 = [" + str5 + "]"); // 出力

		String str6 = null; // String クラス型変数 str6 に null を代入
		System.out.println("str6 = [" + str6 + "]"); // 出力
		str6 = new String(); // コンストラクタ(クラスが new された直後に自動的に実行されるメソッド)が呼ばれ空のオブジェクトを生成、変数 str6 に代入
		System.out.println("str6 = [" + str6 + "]"); // 出力
		str6 = "fffff"; // 文字列の代入
		System.out.println("str6 = [" + str6 + "]"); // 出力
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