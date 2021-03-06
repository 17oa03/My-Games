// 【プログラム】
package com.github.java.test;

public class Array1 {
	public static void main(String[] args) {

		int i; // カウンタ変数
		int[] seisu1; // int 型配列 seisu1 の宣言(未使用)
		int[] seisu2 = new int[3]; // int 型配列 seisu2 の宣言(全て 0 が格納される)
		int[] seisu3 = new int[] { 10, 20, 30, 40 }; // int 型配列 seisu3 の宣言
		int[] seisu4 = { 50, 60, 70, 80, 90 }; // int 型配列 seisu4 の宣言

		System.out.println("配列 2 の要素数 = " + seisu2.length); // length メソッドが配列 seisu2 の要素数を取得
		System.out.println("配列 3 の要素数 = " + seisu3.length); // length メソッドが配列 seisu3 の要素数を取得
		System.out.println("配列 4 の要素数 = " + seisu4.length); // length メソッドが配列 seisu4 の要素数を取得

		System.out.print("配列 2 = "); // 出力
		for (i = 0; i < 3; i++) // 出力ループ
			System.out.print(seisu2[i] + " "); // 出力
		System.out.println(); // 改行

		System.out.print("配列 3 = "); // 出力
		for (int j = 0; j < seisu3.length; j++) // 出力ループ
			System.out.print(seisu3[j] + " "); // 出力
		System.out.println(); // 改行

		System.out.print("配列 4 = "); // 出力
		for (int s : seisu4) { // 拡張for文(for-each文)、for (データ型 変数名 : コレクション(ArrayList)) { 処理 }
			System.out.print(s + " "); // 出力
		}
		System.out.println(); // 改行
	}
}

/*
【実行結果】
配列 2 の要素数 = 3
配列 3 の要素数 = 4
配列 4 の要素数 = 5
配列 2 = 0 0 0
配列 3 = 10 20 30 40
配列 4 = 50 60 70 80 90
 */

/*
【考察】
拡張for文(for-each文)の処理の流れは、

 1) 配列から要素に含まれる値(50)を 1 つ取り出し変数 s に代入
 2) 変数 s を出力
 3) 配列から要素に含まれる値(60)を 1 つ取り出し変数 s に代入
 4) 変数 s を出力
 5) 配列から要素に含まれる値(70)を 1 つ取り出し変数 s に代入
 6) 変数 s を出力
 7) 配列から要素に含まれる値(80)を 1 つ取り出し変数 s に代入
 8) 変数 s を出力
 9) 配列から要素に含まれる値(90)を 1 つ取り出し変数 s に代入
10) 変数 s を出力
11) 配列から全ての値を取り出したので繰り返しを終了
*/