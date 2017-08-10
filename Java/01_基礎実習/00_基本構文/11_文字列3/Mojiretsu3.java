// 【プログラム】
package com.github.java.test;

import java.util.Scanner; // import構文( import パッケージ名.クラス名; )

public class Mojiretsu3 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		String str1 = "abc";
		String str2;

		System.out.print("文字列 ==> ");
		str2 = scanner.nextLine(); // 標準入力

		if (str1 == str2) // str2 は参照型なので false に置き換わり、「B」を表示する
			System.out.println("A");
		else
			System.out.println("B");

		if (str1.equals(str2)) // str2 は参照値で比較しているので true に置き換わり、「C」を表示する
			System.out.println("C");
		else
			System.out.println("D");

		String str3 = "xyz";
		String str4 = "xyz";

		if (str3 == str4) // str3, str4 に代入されたオブジェクトは同じ参照値を持つので true に置き換わり、「E」を表示する
			System.out.println("E");
		else
			System.out.println("F");

		if (str3.equals(str4))  // str3, str4 は同じ文字リテラルなので true に置き換わり、「G」を表示する
			System.out.println("G");
		else
			System.out.println("H");

	}
}

/*
【実行結果】
文字列 ==> abc
B
C
E
G
*/