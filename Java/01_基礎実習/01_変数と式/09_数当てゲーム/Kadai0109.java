/*
【概要】
0 から 999 までの整数の乱数を発生させて、
その値を当てるゲームを作成する。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Random;
import java.util.Scanner;

public class Kadai0109 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		Random random = new Random();
		int correct = random.nextInt(1000); // 正解値(0 ～ 999)
		int count = 0; // 入力回数

		while (true) { // 無限ループ
			System.out.print("0 から 999 の整数 ==> ");
			int answer = scanner.nextInt(); // 標準入力

			count++; // 入力回数の加算

			if (correct < answer) { System.out.println(answer + " より小さいです。"); } // 一致しない場合
			else if (correct > answer) { System.out.println(answer + " より大きいです。"); } // 一致しない場合
			else { break; } // 一致した場合
		}

		System.out.printf("%d 回で当たりです。", count); // 出力
	}
}

/*
【実行結果】
0 から 999 の整数 ==> 500
500 より小さいです。
0 から 999 の整数 ==> 250
250 より小さいです。
0 から 999 の整数 ==> 125
125 より小さいです。
0 から 999 の整数 ==> 60
60 より大きいです。
0 から 999 の整数 ==> 80
80 より小さいです。
0 から 999 の整数 ==> 70
70 より小さいです。
0 から 999 の整数 ==> 65
65 より小さいです。
0 から 999 の整数 ==> 64
64 より小さいです。
0 から 999 の整数 ==> 63
63 より小さいです。
0 から 999 の整数 ==> 62
62 より小さいです。
0 から 999 の整数 ==> 61
11 回で当たりです。
*/