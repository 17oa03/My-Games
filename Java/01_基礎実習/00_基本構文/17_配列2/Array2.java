// 【プログラム】
package com.github.java.test;

public class Array2 {
	public static void main(String[] args) {

		double[] data1 = { 10.2, 30.4, 50.6 }; // double 型配列 data1 の定義
		boolean[] data2 = { true, false, false, true, true }; // boolean 型配列 data2 の定義
		char[] data3 = { 'a', 'あ', '#', '漢' }; // char 型配列 data3 の定義
		String[] data4 = { "abc", null, "", "文字列" }; // String 型配列 data4 の定義

		System.out.print("配列 1 = "); // 出力
		for (int i = 0; i < data1.length; i++) { // 出力ループ
			System.out.print(data1[i] + " "); // double 型配列 data1 の出力
		}
		System.out.println(); // 改行

		System.out.print("配列 2 = "); // 出力
		for (int i = 0; i < data2.length; i++) { // 出力ループ
			System.out.print(data2[i] + " "); // boolean 型配列 data2 の出力
		}
		System.out.println(); // 改行

		System.out.print("配列 3 = "); // 出力
		for (int i = 0; i < data3.length; i++) { // 出力ループ
			System.out.print(data3[i] + " "); // char 型配列 data3 の出力
		}
		System.out.println();

		System.out.print("配列 2 = "); // 出力
		for (int i = 0; i < data4.length; i++) { // 出力ループ
			System.out.print("[" + data4[i] + "] "); // String 型配列 data4 の出力
		}
		System.out.println(); // 改行
	}

}

/*
【実行結果】
配列 1 = 10.2 30.4 50.6
配列 2 = true false false true true
配列 3 = a あ # 漢
配列 2 = [abc] [null] [] [文字列]
*/