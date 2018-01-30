/*
【概要】
標準入力より作品名を入力し、
該当する作品の作家名を検索して標準出力に出力する。
 */

// 【プログラム】
package jkadai03;

import java.util.Scanner;

public class Kadai0309 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Book[] books = { // (1)インスタンス配列の定義
				new Book("夏目漱石",   "坊っちゃん"),
				new Book("国木田独歩", "武蔵野"),
				new Book("樋口一葉",   "たけくらべ"),
				new Book("石川啄木",   "一握の砂"),
				new Book("森鴎外",     "舞姫"),
				new Book("芥川龍之介", "羅生門"),
		};

		System.out.print("作品名 ==> ");
		String input = sc.nextLine(); // (4)文字列入力

		int i;
		boolean hitFlag = false;

		for (i = 0; i < books.length && hitFlag == false; i++) { // (3)作家名の検索
			if (books[i].getNovel().equals(input))
				hitFlag = true;
		}

		if (hitFlag == true)
			System.out.println("作品名 : " + books[i - 1].getNovelist());
		else
			System.out.println("見つかりません。"); // (3)存在しない場合のメッセージ出力
	}
}

/*
【実行結果1】
作品名 ==> 羅生門
作品名 : 芥川龍之介

【実行結果2】
作品名 ==> 坊っちゃん
作品名 : 夏目漱石

【実行結果3】
作品名 ==> Java の基礎
見つかりません。
*/