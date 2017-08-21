/*
【概要】
標準入力より整数を入力し、
標準入力に入力した整数の平方根を出力する。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Scanner;

public class Kadai0104 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		System.out.print("整数 ==> ");
		int n = scanner.nextInt(); // 整数の入力

		System.out.println(n + " の平方根は " + Math.sqrt((double)n) + " です。");
	}
}

/*
【実行結果1】
整数 ==> 4
4 の平方根は 2.0 です。

【実行結果2】
整数 ==> 5
5 の平方根は 2.23606797749979 です。
*/