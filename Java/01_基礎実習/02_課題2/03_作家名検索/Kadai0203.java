/*
【概要】
標準入力より作品名(文字列)を入力し、
該当する作品の作家名を検索して標準出力に出力する。
*/

// 【プログラム】
package com.github.jkadai02;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Kadai0203 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		Map<String, String> map = new HashMap<String, String>() { // マップの初期化
			{
				put("坊っちゃん", "夏目漱石");
				put("武蔵野", "国木田独歩");
				put("たけくらべ", "樋口一葉");
				put("一握の砂", "石川啄木");
				put("舞姫", "森鴎外");
				put("羅生門", "芥川龍之介");
			}
		};

		System.out.print("作品名入力 ==> ");
		String input = scanner.nextLine(); // 入力

		if (map.containsKey(input)) // 特定のキーが格納されているかを判定
			System.out.println(map.get(input)); // 出力
		else // キーが見つからなかった場合
			System.out.println("見つかりません。"); // 出力

		/* C like ver
		Scanner scanner = new Scanner(System.in);

		String[] novel = {
				"坊っちゃん",
				"武蔵野",
				"たけくらべ",
				"一握の砂",
				"舞姫",
				"羅生門",
		};

		String[] novelist = {
				"夏目漱石",
				"国木田独歩",
				"樋口一葉",
				"石川啄木",
				"森鴎外",
				"芥川龍之介",
		};

		System.out.print("作品名入力 ==> ");
		String input = scanner.nextLine(); // 入力

		int i; // カウンタ変数
		boolean hitFlag = false; // 一致フラグ

		for (i = 0; i < novel.length && hitFlag != true; i++) { // 検索ループ
			if (novel[i].equals(input)) // 一致判定
				hitFlag = true; // 一致フラグ ON
		}

		if (hitFlag == true) // 一致している場合
			System.out.println(novelist[i - 1]); // 出力
		else // 一致していない場合
			System.out.println("見つかりません。"); // 出力
		*/
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