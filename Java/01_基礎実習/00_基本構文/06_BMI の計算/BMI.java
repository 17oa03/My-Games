// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class BMI {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in); // Scanner クラスのインスタンスを変数 sc に代入

		System.out.print("身長(m) ==> ");
		double height = sc.nextDouble(); // 標準入力
		System.out.print("体重(kg) ==> ");
		double weight = sc.nextDouble(); // 標準入力

		double bmi = weight / (height * height); // BMI の計算をし、変数 bmi に代入

		System.out.println("BMI は " + bmi + " です。"); // println メソッドによる出力
		System.out.printf("BMI は %.2f です。 ", bmi);   // printf メソッドによる出力
	}
}

/*
【実行結果】
身長(m) ==> 1.72
体重(kg) ==> 65.8
BMI は 22.24175229853975 です。
BMI は 22.24 です。
*/