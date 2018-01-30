// 【プログラム】
package com.github.java.test;

public class Mojiretsu2 {
	public static void main(String[] args) {

		String str1 = "Java"; // String クラス型変数 str1 の定義
		String str2 = str1;  // 代入

		if (str1 == str2) // 等値判定の結果、true の場合
			System.out.println("A"); // 出力
		else // それ以外の場合
			System.out.println("B"); // 出力

		if (str1.equals(str2)) // equals メソッドがインスタンスを等価判定し、true を返した場合
			System.out.println("C"); // 出力
		else // それ以外の場合
			System.out.println("D"); // 出力

		String str3 = new String(str1); // String クラスのインスタンスを変数 str3 に代入

		if (str1 == str3) // true の場合(変数 str3 にはアドレスが格納されているので等値判定より false に置き換わる)
			System.out.println("E"); // 出力
		else // それ以外の場合
			System.out.println("F"); // 出力

		if (str1.equals(str3)) // equals メソッドがインスタンスを等価判定し、true を返した場合
			System.out.println("G"); // 出力
		else // それ以外の場合
			System.out.println("H"); // 出力
	}
}

/*
【実行結果】
A
C
F
G
*/

/*
【考察】
if (a == b)は「等値判定」、
指し示す先が完全に同一の場合である(同じアドレスを指している)こと。

if(a.equals(b))は「等価判定」、
指し示す先が同じ内容である(同じアドレスを指していなくてもよい)こと。