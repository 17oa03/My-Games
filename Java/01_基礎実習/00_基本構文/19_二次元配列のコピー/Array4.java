// 【プログラム】
package com.github.java.test;

public class Array4 {
	public static void main(String[] args) {

		int[][] data1 = { // 二次元配列 data1 の定義、要素の型[][] 配列変数名 = { {初期化}, };
			{ 101, 102, 103, 104, 105 },
			{ 201, 202 },
			{ 301, 302, 303 }
		};

		for (int i = 0; i < data1.length; i++) { // 出力ループ
			for (int j = 0; j < data1[i].length; j++) {
				System.out.print(data1[i][j] + " "); // 二次元配列 data1 の出力
			}
			System.out.println(); // 改行
		}
		System.out.println(); // 改行

		int[][] data2 = new int[3][]; // 二次元配列 data2 の宣言、 要素の型[][] 配列変数名 = new 要素の型[行数][];
		data2[0] = new int[5];  // 列数を 5 確保する
		data2[1] = new int[] { 1, 2 }; // 列数を 2 確保し、1, 2 を代入
		int[] work = { 3, 4, 5 }; // int 型配列 work に行数を 3 確保し、3, 4, 5 を代入
		data2[2] = work; // 一次元配列 work の行を二次元配列 data2 の列として代入

		for (int i = 0; i < data2.length; i++) { // 出力ループ
			for (int j = 0; j < data2[i].length; j++) {
				System.out.print(data2[i][j] + " "); // 二次元配列 data2 の出力
			}
			System.out.println(); // 改行
		}
	}
}

/*
【実行結果】
101 102 103 104 105
201 202
301 302 303

0 0 0 0 0
1 2
3 4 5
*/