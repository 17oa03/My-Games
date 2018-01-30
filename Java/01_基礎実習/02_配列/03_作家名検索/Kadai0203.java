/*
【概要】
標準入力より作品名(文字列)を入力し、
該当する作品の作家名を検索して標準出力に出力する。
*/

// 【プログラム】
package com.github.jkadai02; // package 文

import java.util.Scanner; // import 文

public class Kadai0203 { // クラスの宣言
	public static void main(String[] args) { // main メソッドの宣言

		Scanner scanner = new Scanner(System.in); // インスタンスを生成し、代入

		String[] novel = { // String 配列の初期化
				"坊っちゃん",
				"武蔵野",
				"たけくらべ",
				"一握の砂",
				"舞姫",
				"羅生門",
		};

		String[] novelist = { // String 配列の初期化
				"夏目漱石",
				"国木田独歩",
				"樋口一葉",
				"石川啄木",
				"森鴎外",
				"芥川龍之介",
		};

		int i; // カウンタ変数
		boolean hitFlag = false; // 一致フラグ OFF

		System.out.print("作品名入力 ==> ");
		String input = scanner.nextLine(); // キーボードから 1 行の入力を受け付ける

		for (i = 0; i < novel.length && hitFlag != true; i++) { // 検索ループ
			if (novel[i].equals(input)) // 一致判定
				hitFlag = true; // 一致フラグ ON
		}

		if (hitFlag == true) // 一致している場合
			System.out.println(novelist[i - 1]); // 出力
		else // 一致していない場合
			System.out.println("見つかりません。"); // 出力
	}
}

/*
【実行結果1】
作品名入力 ==> 坊っちゃん
夏目漱石
【実行結果2】
作品名入力 ==> 武蔵野
国木田独歩
【実行結果3】
作品名入力 ==> たけくらべ
樋口一葉
【実行結果4】
作品名入力 ==> 一握の砂
石川啄木
【実行結果5】
作品名入力 ==> 舞姫
森鴎外
【実行結果6】
作品名入力 ==> 羅生門
芥川龍之介
【実行結果7】
作品名入力 ==> Java の基礎
見つかりません。
*/