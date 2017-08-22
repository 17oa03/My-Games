// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Aisatsu {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in); // Scanner クラスのインスタンスを変数 scanner に代入

		System.out.print("言語 ==> ");
		String gengo = scanner.next(); // 標準入力

		switch (gengo) { // switch 文、式の値と一致するラベルが無かった場合は何も実行せずに switch 文は終了
			case "英語": // 入力値が"英語"の場合
				System.out.println("グッドモーニング Good morning"); // 出力
				break; // break文、ブロックを抜けて次の処理へ移る
			case "フランス語": // 入力値が"フランス語"の場合
				System.out.println("ボンジュール Bonjour"); // 出力
				break; // break文、ブロックを抜けて次の処理へ移る
			case "ドイツ語": // 入力値が"ドイツ語"の場合
				System.out.println("グーテンモルゲン Guten Morgen"); // 出力
				break; // break文、ブロックを抜けて次の処理へ移る
			case "スペイン語": // 入力値が"スペイン語"の場合
				System.out.println("ブエノス・ディアス Buenos dias"); // 出力
				break; // break文、ブロックを抜けて次の処理へ移る
			case "イタリア語": // 入力値が"イタリア語"の場合
				System.out.println("ブォンジョルノ Buon giorno"); // 出力
				break; // break文、ブロックを抜けて次の処理へ移る
		}
	}
}

/*
【実行結果1】
言語 ==> フランス語
ボンジュール Bonjour

【実行結果2】
言語 ==> アメリカ語
*/