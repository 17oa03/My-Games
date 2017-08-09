// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Gokei {
	public static void main(String[] args) {

		String str;
		int seisu;
		int gokei = 0; // 合計

		Scanner scanner = new Scanner(System.in); // 「Scanner」クラスのインスタンスを「scanner」変数に代入

		System.out.print("整数 ==> ");
		str = scanner.nextLine(); // 標準入力
		while (str.equals("") == false) { // 「equals」メソッドで文字列を比較し、null が入力されるまでループする
			seisu = Integer.parseInt(str); // 「parseInt」メソッドは文字列を構文解析(parse)して数値変換する
			gokei += seisu; // 合計計算
			System.out.print("整数 ==> ");
			str = scanner.nextLine(); // 標準入力
		}

		System.out.println("合計 = " + gokei); // 合計の出力

	}
}

/*
【実行結果】
整数 ==> 100
整数 ==> 200
整数 ==> 300
整数 ==>
合計 = 600
*/