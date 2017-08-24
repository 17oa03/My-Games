/*
【概要】
標準入力より半径を入力し、
標準入力に円の面積と球の体積を小数点以下3桁まで出力する。
※半径入力、円の面積計算、球の体積計算、出力をメソッドにする。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Scanner;

public class Kadai0112 {
	public static void main(String[] args) {

	int radius = input(); // 入力
	output(radius, circleArea(radius), sphereVolume(radius)); // 出力
	}

	public static int input() { // 半径入力メソッド

		Scanner scanner = new Scanner(System.in);

		System.out.print("半径 ==> ");
		int radius = scanner.nextInt(); // 半径の入力
		return radius; // 戻り値は半径の入力値
	}

	public static double circleArea(int radius) { // 円の面積計算メソッド

		double answer = radius * radius * Math.PI; // 円の面積の計算
		return answer; // 戻り値は円の面積
	}

	public static double sphereVolume(int radius) { // 球の体積計算メソッド

		double answer = radius * radius * radius * Math.PI * 4 / 3; // 球の体積の計算
		return answer; // 戻り値は球の体積
	}

	public static void output(int radius, double circleArea, double sphereVolume) { // 出力メソッド

		System.out.printf("半径 %d の円の面積は %.3f です。\n", radius, circleArea); // 円の面積の出力
		System.out.printf("半径 %d の円の面積は %.3f です。\n", radius, sphereVolume); // 球の体積の出力
	}
}

/*
【実行結果1】
半径 ==> 5
半径 5 の円の面積は 78.540 です。
半径 5 の円の面積は 523.599 です。

【実行結果2】
半径 ==> 10
半径 10 の円の面積は 314.159 です。
半径 10 の円の面積は 4188.790 です。
*/