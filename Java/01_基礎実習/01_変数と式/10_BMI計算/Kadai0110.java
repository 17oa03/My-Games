/*
【概要】
標準入力より身長と体重を入力し、
標準入力にBMIを小数点以下2桁まで出力する。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Scanner;

public class Kadai0110 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		System.out.print("身長(m) ==> ");
		double height = scanner.nextDouble(); // 標準入力
		System.out.print("体重(kg) ==> ");
		double weight = scanner.nextDouble(); // 標準入力

		double bmi = bmiCalculate(height, weight); // BMIの計算
		bmiOutput(bmi); // BMIの出力
	}

	public static double bmiCalculate(double height, double weight) { // BMI計算メソッド

		double answer = weight / (height * height); // BMIの計算
		return answer; // 戻り値
	}

	public static void bmiOutput(double bmi) { // BMI出力メソッド

		System.out.printf("BMI は %.2f です。", bmi); // BMIの出力
		return; // 戻り値
	}
}

/*
【実行結果1】
身長(m) ==> 1.72
体重(kg) ==> 65.8
BMI は 22.24 です。

【実行結果2】
身長(m) ==> 1.8
体重(kg) ==> 55.5
BMI は 17.13 です。
*/