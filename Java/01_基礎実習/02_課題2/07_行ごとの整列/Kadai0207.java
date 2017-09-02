/*
【概要】
初期化されている二次元配列を行毎に昇順ソートする。
*/

// 【プログラム】
package com.github.jkadai02;

import java.util.Arrays;

public class Kadai0207 {
	public static void main(String[] args) {

		int[][] data = {
			{ 40, 10, 30, 20, 50 },
			{  2,  7,  6,  5,  3,  1,  4 },
			{ 300, 100, 200 },
		};

		StringBuilder sb = new StringBuilder(); // メモリ領域(バッファ)の確保

		sb.append("*** ソート前 ***\n");
		for (int[] i : data) { // 行ループ
			for (int j : i) { // 列ループ
				sb.append(String.format("%4d", j)); // バッファに追加
			}
			sb.append("\n"); // 改行
		}
		sb.append("\n"); // 改行

		sb.append("*** ソート後 ***\n");
		for (int[] i : data) { // 行ループ
			Arrays.sort(i); // 昇順ソート処理
			for (int j : i) { // 列ループ
				sb.append(String.format("%4d", j)); // バッファに追加
			}
			sb.append("\n"); // 改行
		}

		System.out.println(sb.toString()); // 標準出力
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
