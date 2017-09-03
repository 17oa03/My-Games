/*
【概要】
初期化されているString配列をコピーし、
コピー先のString配列の要素を辞書順ソートする。
*/

// 【プログラム】
package com.github.jkadai02;

public class Kadai0208 {
	public static void main(String[] args) {

		String[] str1 = { "C", "Java", "DataBase", "HTML", "JSP", "Servlet" };
		String[] str2 = new String[str1.length]; // str1と同じ領域を確保
		StringBuilder sb = new StringBuilder(); // メモリ領域(バッファ)の確保

		sb.append("*** コピー元 ***\nstr1 ="); // 追加
		for (String i : str1) { // 比較ループ
			int k = 0; // 比較カウンタ

			sb.append(String.format(" %s", i)); // str1を追加

			for (String j : str1) // 比較ループ
				if (i.compareToIgnoreCase(j) > 0) { k++; } // 比較判定
			str2[k] = i; // 文字配列の代入
		}

		sb.append("\n*** コピー先 ***\nstr2 ="); // 追加
		for (String i : str2) // 出力ループ
			sb.append(String.format(" %s", i)); // str2を追加

		System.out.println(sb.toString()); // 標準出力
	}
}

/*
【実行結果】
*** コピー元 ***
str1 = C Java DataBase HTML JSP Servlet
*** コピー先 ***
str2 = C DataBase HTML Java JSP Servlet
*/