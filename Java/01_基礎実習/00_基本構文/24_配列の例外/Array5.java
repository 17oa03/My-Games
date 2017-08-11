// 【プログラム】
package com.github.java.test;

public class Array5 {
	public static void main(String[] args) {

		int[] seisu = { 50, 60, 70, 80, 90 };

		System.out.print("配列 = ");
		for (int s : seisu) { // seisu 配列の要素に含まれる値を 1 つずつ取り出し変数 s に代入
			System.out.print(s + " "); // 出力
		}
		System.out.println(); // 改行

		System.out.println("seisu 配列の添字 5 を出力する実験");
		System.out.println(seisu[5]); // 配列のインデックスとして存在しない要素を指定して出力

	}
}

/*
【実行結果】
配列 = 50 60 70 80 90
seisu 配列の添字 5 を出力する実験
Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: 5
	at com.github.java.test.Array5.main(Array5.java:15)
*/

/*
【考察】
「java.lang.ArrayIndexOutOfBoundsException」は、
配列のインデックスとして存在しない要素を指定した場合に発生するエラーになる。
*/