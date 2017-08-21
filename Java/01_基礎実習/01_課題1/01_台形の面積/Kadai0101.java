package com.github.jkadai01;

import java.util.Scanner;

public class Kadai0101 {
	public static void main (String[] args) {

		Scanner scanner = new Scanner(System.in);
		System.out.print("上底 ==> ");
		int upperBase = scanner.nextInt(); // 上底の入力
		System.out.print("下底 ==> ");
		int lowerBase = scanner.nextInt(); // 下底の入力
		System.out.print("高さ ==> ");
		int height = scanner.nextInt(); // 高さの入力

		int area = (upperBase + lowerBase) * height / 2; // 台形の面積の計算

		System.out.println("台形の面積は " + area + " です。 "); // 台形の面積の出力
	}
}

/*
【実行結果1】
上底 ==> 10
下底 ==> 20
高さ ==> 5
台形の面積は 75 です。

【実行結果2】
上底 ==> 10
下底 ==> 15
高さ ==> 10
台形の面積は 125 です。
*/
