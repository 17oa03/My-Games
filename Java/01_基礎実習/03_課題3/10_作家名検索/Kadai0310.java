/*
【概要】
標準入力より作品名を入力し、
該当する作品の作家名を検索して標準出力に出力する。
 */

// 【プログラム】
package jkadai03;

public class Kadai0310 {
	public static void main(String[] args) {
		BookMgt bookMgt = new BookMgt(); // ①(書籍管理クラスのインスタンス生成)

		bookMgt.input(); // ②(作品名入力メソッドの呼び出し)

		bookMgt.search(); // ③(作家名探索メソッドの呼び出し)

		bookMgt.output(); // ④(探索結果出力メソッドの呼び出し)
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