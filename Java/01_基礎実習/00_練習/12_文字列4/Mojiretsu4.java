// 【プログラム】
package com.github.java.test;

public class Mojiretsu4 {

	public static void main(String[] args) {

		String str1 = "12a4bc78"; // String クラス型変数 str1 の定義
		int len = str1.length(); // length メソッドは変数に格納されている文字列の長さ(文字数)を返す

		System.out.println(str1 + " の長さ = " + len); // 出力

		for (int i = 0; i < str1.length(); i++) { // 出力ループ
			if (Character.isDigit(str1.charAt(i))) { // charAt メソッドが文字列からn(引数)番目の文字列を抜き出し、isDigit メソッドは文字が 10 進数の数字かどうかを判定する
				System.out.print("N"); // 出力
			}else { // それ以外の場合
				System.out.print(" "); // 出力
			}
		}
		System.out.println(); // 改行

		String str2 = str1.substring(4); // substring メソッドが文字列からn(引数)番目から最後までを抜き出し、変数 str2 に代入
		System.out.println(str1 + " の 5 文字目から最後まで = " + str2); // 出力

		String str3 = str1.substring(4); // substring メソッドが文字列からn(引数)番目から最後までを抜き出し、変数 str2 に代入
		System.out.println(str1 + " の 3 文字目から 6 文字目まで = " + str3); // 出力

		String str4 = "abbz"; // String クラス型変数 str4 の定義
		String str5 = "abc"; // String クラス型変数 str5 の定義

		if (str4.compareTo(str5) > 0) { // compareTo メソッドはオブジェクト同士の大小を比較する
			System.out.println(str4 + " > " + str5); // 出力
		}else if (str4.compareTo(str5) < 0) {  // compareTo メソッドは変数 str4 が変数 str5 より小さいと負の値、一致は 0、それ以外は正の値を返す
			System.out.println(str4 + " < " + str5); // 出力
		}else { // それ以外の場合
			System.out.println(str4 + " = " + str5); // 出力
		}
	}
}

/*
【実行結果】
12a4bc78 の長さ = 8
NN N  NN
12a4bc78 の 5 文字目から最後まで = bc78
12a4bc78 の 3 文字目から 6 文字目まで = bc78
abbz < abc
*/