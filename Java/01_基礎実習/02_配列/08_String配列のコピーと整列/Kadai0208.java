/*
【概要】
初期化されているString配列をコピーし、
コピー先のString配列の要素を辞書順ソートする。
*/

// 【プログラム】
package com.github.jkadai02; // package 文

public class Kadai0208 { // クラスの宣言
	public static void main(String[] args) { // main メソッドの宣言

		String[] str1 = { "C", "Java", "DataBase", "HTML", "JSP", "Servlet" }; // String 配列の初期化
		String[] str2 = new String[str1.length]; // str1 と同じ領域を確保

		System.out.printf("*** コピー元 ***\nstr1 =");
		for (String i : str1) { // 出力ループ
			int k = 0; // 比較カウンタ
			System.out.printf(" %s", i); // str1 の出力

			for (String j : str1) // 比較ループ
				if (i.compareToIgnoreCase(j) > 0) { k++; } // compareToIgnoreCase メソッドは大文字・小文字を区別しないで辞書順に比較する
			str2[k] = i; // 比較カウンタの値で添字を指定して代入
		}

		System.out.printf("\n*** コピー先 ***\nstr2 =");
		for (String i : str2) // 出力ループ
			System.out.printf(" %s", i); // str2 を出力
	}
}

/*
【実行結果】
*** コピー元 ***
str1 = C Java DataBase HTML JSP Servlet
*** コピー先 ***
str2 = C DataBase HTML Java JSP Servlet
*/