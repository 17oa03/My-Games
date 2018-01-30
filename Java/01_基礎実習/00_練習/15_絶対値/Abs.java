// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Abs {
	public static void main(String[] args) { // main メソッドの定義

		int in; // int 型変数 in の宣言
		int out; // int 型変数 out の宣言

		in = input(); // 入力メソッド
		out = abs(in); // 絶対値(Absolute value)メソッド
		output(in, out); // 出力メソッド
	}

	public static int input() { // 入力メソッドの定義

		Scanner scanner = new Scanner(System.in); // Scanner クラスのインスタンスを変数 scanner に代入
		System.out.print("整数 ==> ");
		int in = scanner.nextInt(); // 標準入力
		return in; // 戻り値
	}

	public static int abs(int in) { // 絶対値メソッドの定義
		int out = Math.abs(in); // Math クラスの abs メソッドは指定された数値(引数)の絶対値を返す
		return out; // 戻り値
	}

	public static void output(int in, int out) { // 出力メソッド
		System.out.println(in + " の絶対値は " + out + "です。"); // 出力
	}
}

/*
【実行結果】
整数 ==> -3
-3 の絶対値は 3です。
*/