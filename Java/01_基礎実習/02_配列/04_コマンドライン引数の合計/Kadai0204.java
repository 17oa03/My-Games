/*
【概要】
コマンドライン引数より 0 個以上の整数を入力し、
合計を計算し標準入力に出力する。
*/

// 【プログラム】
package com.github.jkadai02; // package 文

public class Kadai0204 { // クラスの宣言
	public static void main(String[] args) { // main メソッドの宣言

		int total = 0; // 合計

		for (String s : args) // 合計ループ
			total += Integer.parseInt(s); //  // 文字列を整数に変換して合計に加算
		System.out.println("合計 = " + total); // 出力
	}
}

/*
【実行結果1】
合計 = 100
※コマンドライン引数(30, 50, 20)
【実行結果2】
合計 = 579
※コマンドライン引数(123, 456)
【実行結果3】
合計 = 0
※コマンドライン引数なし
*/