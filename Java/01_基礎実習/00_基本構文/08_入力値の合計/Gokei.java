// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Gokei {
	public static void main(String[] args) {

		String str; // String クラス型変数 str の宣言
		int seisu; // int 型変数 seisu の宣言
		int gokei = 0; // 合計値

		Scanner scanner = new Scanner(System.in); // Scanner クラスのインスタンスを変数 scanner に代入

		System.out.print("整数 ==> ");
		str = scanner.nextLine(); // 標準入力
		while (str.equals("") == false) { // equals メソッドが文字列を比較、null が入力されるまでループする
			seisu = Integer.parseInt(str); // parseInt メソッドが文字列を構文解析(parse)して数値に変換
			gokei += seisu; // 合計の計算
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