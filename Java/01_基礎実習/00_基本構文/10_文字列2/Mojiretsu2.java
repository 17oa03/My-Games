// 【プログラム】
package com.github.java.test;

public class Mojiretsu2 {
	public static void main(String[] args) {

		String str1 = "Java";
		String str2 = str1;

		if (str1 == str2) // if文の条件式を評価した結果、true に置き換わるので、「A」を表示する
			System.out.println("A");
		else
			System.out.println("B");

		if (str1.equals(str2)) // equals メソッドは true を返し、「C」を表示する
			System.out.println("C");
		else
			System.out.println("D");

		String str3 = new String(str1); // String クラスのインスタンスを「str3」変数に代入

		if (str1 == str3) // str3 クラス型変数のオブジェクト内には実際の値が格納されているメモリのアドレスを保持しているから false に置き換わり、「F」を表示する
			System.out.println("E");
		else
			System.out.println("F");

		if (str1.equals(str3)) // equals メソッドがオブジェクトの参照値を比較して true を返し、「G」を表示する
			System.out.println("G");
		else
			System.out.println("H");
	}

}

/*
【実行結果】
A
C
F
G
*/