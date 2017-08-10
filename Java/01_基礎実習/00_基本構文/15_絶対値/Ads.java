// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Ads {
	public static void main(String[] args) { // main メソッドの定義

		int in;
		int out;
		in = input(); // 入力メソッド
		out = abs(in); // 絶対値(Absolute value)メソッド
		output(in, out); // 出力メソッド
	}

	public static int input() {

		Scanner scanner = new Scanner(System.in); // 「Scanner」クラスのインスタンスを「scanner」変数に代入
		System.out.print("整数 ==> ");
		int in = scanner.nextInt(); // 標準入力
		return in; // 戻り値
	}

	public static int abs(int in) { // abs メソッドの定義
		int out = Math.abs(in); // 絶対値の値 = Math.abs(対象となる数)
		return out; // 戻り値
	}

	public static void output(int in, int out) { // output メソッドの定義
		System.out.println(in + " の絶対値は " + out + "です。");
	}
}

/*
【実行結果】
整数 ==> -3
-3 の絶対値は 3です。
*/