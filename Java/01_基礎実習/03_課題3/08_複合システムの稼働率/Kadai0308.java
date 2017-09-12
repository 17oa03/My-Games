/*
【概要】
標準入力より装置A,B,Cの稼働率を入力し、
下図の複合システムの稼働率を小数点以下3桁まで出力する。

	----装置A----
	|	    |
     ----	    ----装置C----
	|	    |
	----装置B----

※直列、並列稼働率計算は、
別クラスのクラスメソッドとして定義する。
 */

// 【プログラム】
package jkadai03;

import java.util.Scanner;

public class Kadai0308 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("装置 A の稼働率 ==> ");
		double a = sc.nextDouble(); // (2)稼働率の入力

		System.out.print("装置 B の稼働率 ==> ");
		double b = sc.nextDouble(); // (2)稼働率の入力

		System.out.print("装置 C の稼働率 ==> ");
		double c = sc.nextDouble(); // (2)稼働率の入力

		System.out.printf("複合システムの稼働率は %.3f です。", // (3)稼働率の出力
				OperatingRatio.serial(OperatingRatio.parallel(a, b), c));
	}
}

/*
【実行結果1】
装置 A の稼働率 ==> 0.8
装置 B の稼働率 ==> 0.8
装置 C の稼働率 ==> 0.8
複合システムの稼働率は 0.768 です。

【実行結果2】
装置 A の稼働率 ==> 0.7
装置 B の稼働率 ==> 0.8
装置 C の稼働率 ==> 0.9
複合システムの稼働率は 0.846 です。
*/