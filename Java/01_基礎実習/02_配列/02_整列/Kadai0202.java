/*
【概要】
初期化されている配列の要素を降順に並べ替え、
標準出力に出力する。
*/

// 【プログラム】
package com.github.jkadai02; // package 文

public class Kadai0202 { // クラスの宣言
	public static void main(String[] args) { // main メソッドの宣言

		double[] doubleAry = { 581.1, 834.0, 253.4, 924.9, 301.7 }; // 配列の初期化

		System.out.println("*** ソート前 ***");
		for (int i = 0; i < doubleAry.length; i++) // 出力ループ
			System.out.printf("  %.1f", doubleAry[i]); // 出力
		System.out.println(); // 改行

		for (int i = 0; i < doubleAry.length - 1; i++) { // 降順ループ
			for (int j = i + 1; j < doubleAry.length; j++) {
				if (doubleAry[i] < doubleAry[j]) { // データの大小比較
					double work = doubleAry[i]; // データ交換
					doubleAry[i] = doubleAry[j];
					doubleAry[j] = work;
				}
			}
		}

		System.out.println("*** ソート後 ***");
		for (int i = 0; i < doubleAry.length; i++) // 出力ループ
			System.out.printf("  %.1f", doubleAry[i]); // 出力
		System.out.println(); // 改行
	}
}

/*
【実行結果】
*** ソート前 ***
  581.1  834.0  253.4  924.9  301.7
*** ソート後 ***
  924.9  834.0  581.1  301.7  253.4
*/
