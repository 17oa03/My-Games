/*
【概要】
標準入力より半径を入力し、
標準出力に円の面積と円周を小数点以下3桁まで出力する。
円の面積の計算と円の円周の計算は、
円クラスにクラスメソッドとして定義する。
 */

// 【プログラム】
package jkadai03;

import java.util.Scanner;

public class Kadai0304 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		System.out.print("半径 ==> ");
		int radius = scanner.nextInt(); // 半径の入力

		System.out.printf("半径 %d の円の面積は %.3f です。\n",
							radius,
							Circle.area(radius)); // 円の面積計算クラスメソッドの呼び出し

		System.out.printf("半径 %d の円の面積は %.3f です。\n",
							radius,
							Circle.circumference(radius)); // 円の円周計算クラスメソッドの呼び出し
	}
}

/*
【実行結果1】
半径 ==> 5
半径 5 の円の面積は 78.540 です。
半径 5 の円の面積は 31.416 です。

【実行結果2】
半径 ==> 10
半径 10 の円の面積は 314.159 です。
半径 10 の円の面積は 62.832 です。
*/