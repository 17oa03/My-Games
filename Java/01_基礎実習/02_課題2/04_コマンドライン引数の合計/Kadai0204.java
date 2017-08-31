package com.github.jkadai02;

public class Kadai0204 {
	public static void main(String[] args) {

		int total = 0;

		for (String s : args)
			total += Integer.parseInt(s); // 合計計算
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