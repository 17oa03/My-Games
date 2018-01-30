/*
【概要】
標準入力より装置A、装置B、装置Cの稼働率を入力し、
標準出力に下記の図の複合システムの稼働率を
小数点以下3桁まで出力する。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Scanner;

public class Kadai0114 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		System.out.print("装置 A の稼働率  ==> ");
		double  machineryA = scanner.nextDouble(); // 標準入力
		System.out.print("装置 B の稼働率  ==> ");
		double  machineryB = scanner.nextDouble(); // 標準入力
		System.out.print("装置 C の稼働率  ==> ");
		double  machineryC = scanner.nextDouble(); // 標準入力

		System.out.printf("複合システムの稼働率は %.3f です。",
			(1 - (1 - machineryA) * (1 - machineryB)) * machineryC); // 標準出力
	}
}

/*
【実行結果1】
装置 A の稼働率  ==> 0.8
装置 B の稼働率  ==> 0.8
装置 C の稼働率  ==> 0.8
複合システムの稼働率は 0.768 です。

【実行結果2】
装置 A の稼働率  ==> 0.7
装置 B の稼働率  ==> 0.8
装置 C の稼働率  ==> 0.9
複合システムの稼働率は 0.846 です。
*/