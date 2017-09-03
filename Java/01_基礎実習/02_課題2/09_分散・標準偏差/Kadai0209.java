/*
【概要】
標準入力より5個の整数を入力し、
入力した5個の整数の合計、平均、分散、標準偏差を標準出力に出力する。
*/

// 【プログラム】
package com.github.jkadai02;

import java.util.Scanner;

public class Kadai0209 {
	public static void main(String[] args) {

		final int LOOP = 5; // 入力回数
		double total = 0; // 合計
		double[] doubleAry = new double[LOOP];

		Scanner scanner = new Scanner(System.in);
		StringBuilder sb = new StringBuilder(); // メモリ領域(バッファ)の確保

		for (int i = 0; i < LOOP; i++) { // 入力ループ
			System.out.print("整数 ==> ");
			doubleAry[i] = scanner.nextInt(); // 入力
			total += doubleAry[i]; // 合計の計算
		}

		sb.append(String.format("合計 = %.0f\n", total)); // 合計の追加
		sb.append(String.format("平均 = %.2f\n", total / LOOP)); // 平均の追加

		for (int i = 0; i < LOOP; i++) // 偏差ループ
			doubleAry[i] = Math.pow((doubleAry[i] - (total / LOOP)), 2); // 偏差の計算

		total = 0; // 合計
		for (int i = 0; i < LOOP; i++) // 合計ループ
			total += doubleAry[i]; // 合計の計算

		sb.append(String.format("分散 = %.2f\n", total / LOOP)); // 分散の追加
		sb.append(String.format("標準偏差 = %.2f\n", Math.sqrt(total / LOOP))); // 標準偏差の追加

		System.out.println(sb.toString()); // 標準出力
	}
}

/*
【実行結果1】
整数 ==> 3
整数 ==> 7
整数 ==> 5
整数 ==> 9
整数 ==> 2
合計 = 26
平均 = 5.20
分散 = 6.56
標準偏差 = 2.56

【実行結果2】
整数 ==> 5
整数 ==> 1
整数 ==> 4
整数 ==> 3
整数 ==> 2
合計 = 15
平均 = 3.00
分散 = 2.00
標準偏差 = 1.41
*/