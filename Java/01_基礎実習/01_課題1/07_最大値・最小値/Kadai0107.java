/*
【概要】
標準入力より整数を5個入力し、
その最大値と最小値を標準出力に出力する。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Scanner;

public class Kadai0107 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		int maxValue = 0; // 最大値
		int minValue = 0; // 最小値

		for (int i = 0; i < 5; i++) // 入力ループ
		{
			System.out.print("整数 ==> ");
			int n = scanner.nextInt(); // 入力

			if(i == 0 || n > maxValue) maxValue = n; // 最大値かの比較
			if(i == 0 || n < minValue) minValue = n; // 最小値かの比較
		}

		System.out.println("最大値 = " + maxValue); // 最大値の出力
		System.out.println("最小値 = " + minValue); // 最小値の出力
	}
}

/*
【実行結果1】
整数 ==> 5
整数 ==> -100
整数 ==> -70
整数 ==> 200
整数 ==> 60
最大値 = 200
最小値 = -100

【実行結果2】
整数 ==> 10
整数 ==> -2147483648
整数 ==> 0
整数 ==> 2147483647
整数 ==> 30
最大値 = 2147483647
最小値 = -2147483648

【実行結果3】
整数 ==> 10
整数 ==> 20
整数 ==> 30
整数 ==> 40
整数 ==> 50
最大値 = 50
最小値 = 10
*/