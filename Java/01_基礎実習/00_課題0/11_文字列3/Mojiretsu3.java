// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Mojiretsu3 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in); // Scanner クラスのインスタンスを変数 scanner に代入

		String str1 = "abc"; // String クラス型変数 str1 の定義
		String str2; // String クラス型変数 str2 の宣言

		System.out.print("文字列 ==> ");
		str2 = scanner.nextLine(); // 標準入力

		if (str1 == str2) // 等値判定の結果、true の場合(変数 str2 にはアドレスが格納されているので等値判定より false に置き換わる)
			System.out.println("A"); // 出力
		else // それ以外の場合
			System.out.println("B"); // 出力

		if (str1.equals(str2)) // equals メソッドがインスタンスを等価判定し、true を返した場合
			System.out.println("C"); // 出力
		else // それ以外の場合
			System.out.println("D"); // 出力

		String str3 = "xyz"; // String クラス型変数 str3 の定義
		String str4 = "xyz"; // String クラス型変数 str4 の定義

		if (str3 == str4) // 等値判定の結果、true の場合
			System.out.println("E"); // 出力
		else // それ以外の場合
			System.out.println("F"); // 出力

		if (str3.equals(str4)) // equals メソッドがインスタンスを等価判定し、true を返した場合
			System.out.println("G"); // 出力
		else // それ以外の場合
			System.out.println("H"); // 出力
	}
}

/*
【実行結果】
文字列 ==> abc
B
C
E
G
*/