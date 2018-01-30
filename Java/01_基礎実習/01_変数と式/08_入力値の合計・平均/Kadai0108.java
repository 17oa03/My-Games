/*
【概要】
標準入力より 0 以上の整数を繰り返し入力する。
Enter キーのみで何も入力されていない時は入力を中止し、
合計と平均(小数点以下第2位まで)を出力する。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Scanner;

public class Kadai0108 {
	public static void main(String[] args) {

		int n; // 入力値
		int total = 0; // 合計値
		int count = 0; // 入力回数

		Scanner scanner = new Scanner(System.in);

		System.out.print("整数 ==> ");
		String str = scanner.nextLine(); // 標準入力

		while (str.equals("") == false) { // 空文字が入力されるまでループ
			n = Integer.parseInt(str); // parseInt メソッドが文字列を構文解析(parse)して数値に変換
			total += n; // 合計の計算
			count++; // 入力回数をカウント

			System.out.print("整数 ==> ");
			str = scanner.nextLine(); // 標準入力
		}

		if (count != 0) { // 入力があった場合
			System.out.printf("合計 = %d\n", total); // 合計の出力
			System.out.printf("平均 = %.2f\n", (double)total / count); // 平均の出力
		} else { // 入力がなかった場合
			System.out.println("入力データがありません。");
		}
	}
}

/*
【実行結果1】
整数 ==> 10
整数 ==> 25
整数 ==> 36
整数 ==>
合計 = 71
平均 = 23.67

【実行結果2】
整数 ==>
入力データがありません。

【実行結果3】
整数 ==> 0
整数 ==> 0
整数 ==> 0
整数 ==>
合計 = 0
平均 = 0.00
*/