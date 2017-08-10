// 【プログラム】
package com.github.java.test;

public class Array2 {
	public static void main(String[] args) {

		double[] data1 = { 10.2, 30.4, 50.6 };
		boolean[] data2 = { true, false, false, true, true };
		char[] data3 = { 'a', 'あ', '#', '漢' };
		String[] data4 = { "abc", null, "", "文字列" };

		System.out.print("配列 1 = ");
		for (int i = 0; i < data1.length; i++) {
			System.out.print(data1[i] + " "); // double 型配列の出力
		}
		System.out.println();

		System.out.print("配列 2 = ");
		for (int i = 0; i < data2.length; i++) {
			System.out.print(data2[i] + " "); // boolean 型配列の出力
		}
		System.out.println();

		System.out.print("配列 3 = ");
		for (int i = 0; i < data3.length; i++) {
			System.out.print(data3[i] + " "); // char 型配列の出力
		}
		System.out.println();

		System.out.print("配列 2 = ");
		for (int i = 0; i < data4.length; i++) {
			System.out.print("[" + data4[i] + "] "); // String クラス型配列の出力
		}
		System.out.println();
	}

}

/*
【実行結果】
配列 1 = 10.2 30.4 50.6
配列 2 = true false false true true
配列 3 = a あ # 漢
配列 2 = [abc] [null] [] [文字列]
*/