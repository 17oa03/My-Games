/*
【概要】
標準入力に2個の整数の足し算問題を5問出力し、
標準入力より答えを入力する。
不正解は"×"、正解は"○"、
最後に正解数と得点を出力する。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Random;
import java.util.Scanner;

public class Kadai0113 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		Random random = new Random();

		System.out.print("何桁のたし算ドリル ==> ");
		int n = (int)Math.pow(10,scanner.nextInt()); // 乱数の桁数を入力
		int count = 0; // 正解数

		for (int i = 0; i < 5; i++) { // 入力ループ

			System.out.println(); // 改行

			int randomNumber1 = random.nextInt(n); // 乱数の値(0 ～ 999)
			int randomNumber2 = random.nextInt(n); // 乱数の値(0 ～ 999)

			System.out.printf(randomNumber1 + " + " + randomNumber2 + " = "); // 問題の出力

			if ((randomNumber1 + randomNumber2) == scanner.nextInt()) { // 正解の場合
				System.out.println("○"); // 正否の出力
				count++; // 正解数に加算
			} else // それ以外の場合
				System.out.println("×  (正解 = " + (randomNumber1 + randomNumber2) + ")"); // 正否の出力
		}

		System.out.println("\n" + count + " 問正解。 " + (count * 20) + " 点です。"); // 結果の出力
	}
}

/*
【実行結果1】
何桁のたし算ドリル ==> 3

84 + 204 = 288
○

696 + 187 = 883
○

558 + 567 = 777
×  (正解 = 1125)

716 + 10 = 777
×  (正解 = 726)

68 + 21 = 89
○

3 問正解。 60 点です。

【実行結果2】
何桁のたし算ドリル ==> 2

35 + 91 = 126
○

29 + 44 = 73
○

59 + 87 = 146
○

78 + 35 = 113
○

19 + 61 = 80
○

5 問正解。 100 点です。
*/