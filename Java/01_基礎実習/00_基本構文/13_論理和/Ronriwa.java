// 【プログラム】
package com.github.java.test;

public class Ronriwa {
	public static void main(String[] args) {

		int x, y;

		x = 5;
		y = 10;
		if (x++ == 5 || y++ == 8) { // 「||」演算子は x と y の何れかが true の場合に true を返す
			System.out.println("true");
		} else {
			System.out.println("false");
		}
		System.out.println("x = " + x);
		System.out.println("y = " + y);
		System.out.println();

		x = 5;
		y = 10;
		if (x++ == 5 | y++ == 8) { // 「|」演算子は x と y の両方がブール型、且つ何れかが true の場合に true を返す
			System.out.println("true");
		} else {
			System.out.println("false");
		}
		System.out.println("x = " + x);
		System.out.println("y = " + y);

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