// 【プログラム】
package com.github.java.test;

import java.util.Scanner;

public class Sprit {
	public static void main(String[] args) {

		String str;
		String[] strArray;

		Scanner scanner = new Scanner(System.in);

		System.out.print("文字列 ==> ");
		str = scanner.nextLine(); // 標準入力

		strArray = str.split(","); // split メソッドが str 配列の文字列をカンマの位置で区切って取得

		System.out.println("---カンマ区切り出力---");
		for (String s : strArray) { // strArray[0] = "aaa"; strArray[1] = "bbbbb"; strArray[2] = "333";
			System.out.println(s);
		}

	}
}

/*
【実行結果】
文字列 ==> aaa,bbbbb,333
---カンマ区切り出力---
aaa
bbbbb
333
*/