// 【プログラム】
package com.github.java.test;

public class Ronriwa {
	public static void main(String[] args) {

		int x, y; // int 型変数 x, y

		x = 5; // 変数 x に 5 を代入
		y = 10; // 変数 y に 10 を代入
		if (x++ == 5 || y++ == 8) { // || 演算子は x と y の何れかが true の場合に true を返す
			System.out.println("true"); // 出力
		} else { // それ以外の場合
			System.out.println("false"); // 出力
		}
		System.out.println("x = " + x); // 出力
		System.out.println("y = " + y); // 出力
		System.out.println(); // 改行

		x = 5; // 変数 x に 5 を代入
		y = 10; // 変数 y に 10 を代入
		if (x++ == 5 | y++ == 8) { // | 演算子は x と y の両方がブール型、且つ何れかが true の場合に true を返す
			System.out.println("true"); // 出力
		} else { // それ以外の場合
			System.out.println("false"); // 出力
		}
		System.out.println("x = " + x); // 出力
		System.out.println("y = " + y); // 出力
	}
}

/*
【実行結果】
true
x = 6
y = 10

true
x = 6
y = 11
*/