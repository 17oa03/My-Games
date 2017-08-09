// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Menseki {
	public static void main(String[] args) {

		int tate; // 縦の長さ
		int yoko; // 横の長さ
		int menseki; // 面積

		Scanner scanner = new Scanner(System.in); // 「Scanner」クラスのインスタンスを「scanner」変数に代入

		System.out.println("縦の長さ ==> ");
		tate = scanner.nextInt(); // 標準入力
		System.out.println("横の長さ ==> ");
		yoko = scanner.nextInt(); // 標準入力

		menseki = tate * yoko; // 面積の計算

		System.out.println("面積は " + menseki + "です。"); // 面積の出力

	}
}

/*
【実行結果】
縦の長さ ==>
30
横の長さ ==>
40
面積は 1200です。
*/