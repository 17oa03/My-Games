/*
【概要】
標準出力にJANコード(13桁 or 8桁)を入力し、
標準出力にチェックデジット正誤を出力する。
誤りの場合は正しいチェックデジットを出力する。
 */

// 【プログラム】
package com.github.jkadai01;

import java.util.Scanner;

public class Kadai0115 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);

		System.out.print("JAN コード (13桁または8桁)  ==> ");
		String janCode = scanner.nextLine(); // 標準入力

		int n = janCode.length(); // 入力文字列の文字数

		if (isNumber(janCode, n)) { // 数字以外の文字が含まれているか確認

			if (n == 13) // 文字数が 13 文字の場合
				checkJanCode(janCode, n); // 文字列の検査数字(check digit)を確認
			else if (n == 8)
				checkJanCode(janCode, n); // 文字列の検査数字(check digit)を確認
			else { // 桁数が間違っている場合
				System.out.println("桁数が " + n + "桁です。");
				System.out.println("13 桁または 8 桁を入力してください。");
			}
		}
	}

	public static boolean isNumber(String janCode, int n) { // 数字確認メソッド

		int count = 0; // 数字以外の文字数

		for (int i = 0; i < janCode.length(); i++) {
			try { // try文で例外処理
				Integer.parseInt(janCode.substring(i, i + 1)); // 文字列を解析(parse)して整数変換
			} catch(NumberFormatException e){ // 文字列の整数変換に失敗した場合
				count++; // 数字以外の文字数のカウント
			}
		}

		if (count != 0) { // 数字以外の文字数があった場合
			System.out.println("数字以外が " + count + " 文字含まれています。");
			return false;
		} else //  // 数字以外の文字数がなかった場合
			return true;
	}

	public static void checkJanCode(String janCode, int n) { // 検査数字確認メソッド

		int even = 0; // 指定桁の合計値
		int odd = 0; // 指定桁の合計値
		int checkDigit; // 検査数字(check digit)

		for (int i = 0; i < (n - 1); i++) { // 検査数字確認ループ

			if (i % 2 == 0) // 偶数の場合
				even += Integer.parseInt(janCode.substring(i, i + 1)); // 合計値の計算
			else // 奇数の場合
				odd += Integer.parseInt(janCode.substring(i, i + 1)); // 合計値の計算
		}

		if (n == 13) // 13桁の場合
			checkDigit = 10 - ((even + (odd * 3)) % 10); // 検査数字を求める
		else // 8桁の場合
			checkDigit = 10 - (((even * 3) + odd) % 10); // 検査数字を求める

		if (checkDigit == Integer.parseInt(janCode.substring((n - 1)))) // 検査数字と一致した場合
			System.out.println("JAN コードは正しいです。");
		else { // 検査数字と一致しない場合
			System.out.println("JAN コードは誤りです。");
			System.out.println("正しいチェックデジットは " + checkDigit + " です。");
		}

		return;
	}
}

/*
【実行結果1】
JAN コード (13桁または8桁)  ==> 4912345678904
JAN コードは正しいです。

【実行結果2】
JAN コード (13桁または8桁)  ==> 4912345678901
JAN コードは誤りです。
正しいチェックデジットは 4 です。

【実行結果3】
JAN コード (13桁または8桁)  ==> 49123456
JAN コードは正しいです。

【実行結果4】
JAN コード (13桁または8桁)  ==> 49123457
JAN コードは誤りです。
正しいチェックデジットは 6 です。

【実行結果5】
JAN コード (13桁または8桁)  ==> 1234567890
桁数が 10桁です。
13 桁または 8 桁を入力してください。

【実行結果6】
JAN コード (13桁または8桁)  ==> 49xyz123#$456
数字以外が 5 文字含まれています。
*/
