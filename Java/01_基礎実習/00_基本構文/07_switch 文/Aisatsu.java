// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Aisatsu {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in); // 「Scanner」クラスのインスタンスを「scanner」変数に代入

		System.out.print("言語 ==> ");
		String gengo = scanner.next(); // 標準入力

		switch (gengo) { // switch文、式の値と一致するラベルが無かった場合は何も実行せずにswitch文は終了する
			case "英語":
				System.out.println("グッドモーニング Good morning");
				break;
			case "フランス語":
				System.out.println("ボンジュール Bonjour");
				break;
			case "ドイツ語":
				System.out.println("グーテンモルゲン Guten Morgen");
				break;
			case "スペイン語":
				System.out.println("ブエノス・ディアス Buenos dias");
				break;
			case "イタリア語":
				System.out.println("ブォンジョルノ Buon giorno");
				break;
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