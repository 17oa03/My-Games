/*
【概要】
標準入力よりパスワード(文字列)を入力し、
初期化したパスワード(文字列)と比較し、
一致した場合は"パスワード一致"、
一致しない場合は"パスワード不一致"と標準入力に出力する。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Scanner;

public class Kadai0103 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		System.out.print("パスワードを入力して下さい ==> ");

		if ("Tokyo".equals(scanner.nextLine())) // 入力値を等価判定
			System.out.println("パスワード一致");
		else
			System.out.println("パスワード不一致");
	}
}

/*
【実行結果1】
パスワードを入力して下さい ==> Tokyo
パスワード一致

【実行結果2】
パスワードを入力して下さい ==> Fukuoka
パスワード不一致

【実行結果3】
パスワードを入力して下さい ==> Kyoto
パスワード不一致

【実行結果4】
パスワードを入力して下さい ==> tokyo
パスワード不一致
 */