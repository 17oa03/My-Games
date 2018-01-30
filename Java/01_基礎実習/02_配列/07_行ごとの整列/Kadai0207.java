/*
【概要】
初期化されている二次元配列を行毎に昇順ソートする。
*/

// 【プログラム】
package com.github.jkadai02; // package 文

import java.util.Arrays; // Arrays クラスは、配列のソートや検索に便利な様々なメソッドがある。

public class Kadai0207 { // クラスの宣言
	public static void main(String[] args) { // main メソッドの宣言

		int[][] data = { // int 型配列の初期化
			{ 40, 10, 30, 20, 50 },
			{  2,  7,  6,  5,  3,  1,  4 },
			{ 300, 100, 200 },
		};

		System.out.println("*** ソート前 ***");
		for (int[] i : data) { // 配列の行ループ、for-each 文で二次元配列を操作
			for (int j : i) // 配列の列ループ
				System.out.printf("%4d", j); // 配列の列にあるデータを出力
			System.out.println(); // 改行
		}
		System.out.println(); // 改行

		System.out.println("*** ソート後 ***");
		for (int[] i : data) { // 配列の行ループ
			Arrays.sort(i); // 行毎に昇順ソート処理
			for (int j : i) { // 配列の列ループ
				System.out.printf("%4d", j); // 配列の列にあるデータを出力
			}
			System.out.println(); // 改行
		}
	}
}

/*
【実行結果】
*** ソート前 ***
  40  10  30  20  50
   2   7   6   5   3   1   4
 300 100 200

*** ソート後 ***
  10  20  30  40  50
   1   2   3   4   5   6   7
 100 200 300
*/
