/*
【概要】
標準入力より整数を 5 個入力し、
入力順とは逆に標準出力に出力する。
 */

// 【プログラム】
package com.github.jkadai02;

import java.util.Scanner; // import文によって、FQCN(完全限定クラス名)を毎回指定する必要が無くなります。

public class Kadai0201 { // クラスの宣言
	public static void main(String[] args) { // main メソッドの宣言

		final int LOOP = 5; // 入力回数の定数
		int[] intAry = new int[LOOP]; // 配列の宣言

		Scanner scanner = new Scanner(System.in); // インスタンスを生成し、参照型変数にインスタンスの参照値を代入

		for (int i = 0; i < intAry.length; i++) { // 入力ループ
			System.out.print("整数 ==> ");
			intAry[i] = scanner.nextInt(); // 入力
		}

		System.out.println("---逆順出力---");
		for (int i = intAry.length - 1; i >= 0; i-- ) // 逆順出力ループ(最後の要素から順に出力する)
			System.out.printf("%9d\n", intAry[i]); // 出力
	}
}

/*
【実行結果】
整数 ==> 34
整数 ==> -5
整数 ==> 123
整数 ==> 0
整数 ==> -21
---逆順出力---
      -21
        0
      123
       -5
       34
*/