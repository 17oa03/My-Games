/*
【概要】
標準入力よりパスワード(文字列)を二度入力し、
標準出力に1回目に入力したパスワードと、
2回目に入力したパスワードが一致しているか否か出力する。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Scanner;

public class Kadai0111 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		while (true) {

			System.out.print("パスワード(1回目) ==> ");
			String passWord1 = scanner.nextLine();

			if (!("cancel".equals(passWord1))) { // 文字列が"cancel"でない場合

				System.out.print("パスワード(2回目) ==> ");
				String passWord2 = scanner.nextLine();

				if ("cancel".equals(passWord2)) { // 文字列が"cancel"の場合
					System.out.println("キャンセルしました。");
					break;
				}
				else if (!(passWord1.equals(passWord2))) // 2つの文字列が等価でない場合
					System.out.println("1回目と2回目が異なります。");
				else { // それ以外の場合
					System.out.println("1回目と2回目が一致しました。");
					break;
				}
			} else {// それ以外の場合
				System.out.println("キャンセルしました。");
				break;
			}
		}
	}
}

/*
【実行結果1】
パスワード(1回目) ==> passWord
パスワード(2回目) ==> passWord
1回目と2回目が一致しました。

【実行結果2】
パスワード(1回目) ==> pass
パスワード(2回目) ==> passWord
1回目と2回目が異なります。
パスワード(1回目) ==> abcde
パスワード(2回目) ==> abcde
1回目と2回目が一致しました。

【実行結果3】
パスワード(1回目) ==> aaaaa
パスワード(2回目) ==> bbbbb
1回目と2回目が異なります。
パスワード(1回目) ==> cancel
キャンセルしました。

【実行結果4】
パスワード(1回目) ==> ccccc
パスワード(2回目) ==> cancel
キャンセルしました。
*/