/*
【概要】
標準入力より5個の整数を入力し、
入力した5個の整数の合計、平均、分散、標準偏差を標準出力に出力する。
*/

// 【プログラム】
package com.github.jkadai02; // package 文

import java.util.Scanner; // import 文

public class Kadai0209 { // クラスの宣言
	public static void main(String[] args) { // main メソッドの宣言

		final int LOOP = 5; // 入力回数
		double total = 0; // 入力値と偏差の合計
		double[] doubleAry = new double[LOOP]; // 入力回数分の要素を持つ配列の宣言

		Scanner scanner = new Scanner(System.in); // インスタンスを生成し、代入

		for (int i = 0; i < LOOP; i++) { // 入力ループ
			System.out.print("整数 ==> ");
			doubleAry[i] = scanner.nextInt(); // 入力
			total += doubleAry[i]; // 入力値の合計を計算
		}

		System.out.printf("合計 = %.0f\n", total); // 入力値の合計を出力
		System.out.printf("平均 = %.2f\n", total / LOOP); // 平均の出力

		for (int i = 0; i < LOOP; i++) // 偏差ループ
			doubleAry[i] = Math.pow((doubleAry[i] - (total / LOOP)), 2); // 偏差の計算

		total = 0; // 偏差の合計をする為に 0 を代入
		for (int i = 0; i < LOOP; i++) // 偏差の合計ループ
			total += doubleAry[i]; // 偏差の合計を計算

		System.out.printf("分散 = %.2f\n", total / LOOP); // 分散の出力
		System.out.printf("標準偏差 = %.2f\n", Math.sqrt(total / LOOP)); // 標準偏差の出力
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