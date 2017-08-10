// 【プログラム】
package com.github.java.test;

public class Mojiretsu4 {

	public static void main(String[] args) {

		String str1 = "12a4bc78";
		int len = str1.length(); // length メソッドは変数に格納されている文字列の長さ(文字数)を返す

		System.out.println(str1 + " の長さ = " + len);

		for (int i = 0; i < str1.length(); i++) {
			if (Character.isDigit(str1.charAt(i))) { // charAt メソッドは文字列からn番目の文字列を抜き出す
													  // isDigit メソッドは文字が 10 進数の数字かどうかを判定、true を返す
				System.out.print("N");
			}else {
				System.out.print(" ");
			}
		}
		System.out.println();

		String str2 = str1.substring(4); // substring メソッドは元の文字列から一部分を取り出して新しい文字列を作成する
		System.out.println(str1 + " の 5 文字目から最後まで = " + str2);

		String str3 = str1.substring(4); // public String substring(int beginIndex, int endIndex)
		System.out.println(str1 + " の 3 文字目から 6 文字目まで = " + str3);

		String str4 = "abbz";
		String str5 = "abc";

		if (str4.compareTo(str5) > 0) { // compareTo メソッドはオブジェクト同士の大小を比較する
			System.out.println(str4 + " > " + str5);
		}else if (str4.compareTo(str5) < 0) {  // compareTo メソッドの戻り値は str4 が str5 より小さいと負の値、一致は 0、それ以外は正の値
			System.out.println(str4 + " < " + str5);
		}else {
			System.out.println(str4 + " = " + str5);
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