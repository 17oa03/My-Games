/*
【概要】
標準入力より 3 種類の商品の商品名、単価、数量を入力し、
標準出力に商品の売上一覧表を出力する。
売上一覧表には、商品名、単価、数量、金額を出力し、
最終行に金額の合計を出力する。
 */

// 【プログラム】
package jkadai03;

import java.util.Scanner;

public class Kadai0305 {
	public static void main(String[] args) {
		final int LOOP = 3; // ループ回数

		Scanner scanner = new Scanner(System.in);
		Earnings[] earnings = new Earnings[LOOP]; // インスタンス配列の宣言

		for (int i = 0; i < earnings.length; i++) { // 入力ループ
			System.out.print("商品名 ==> ");
			String name = scanner.nextLine(); // 商品名の入力

			System.out.print("単価 ==> ");
			// scanner.nextInt()だと次の入力で改行を読込んでしまうので、対策として文字列を数値に変換してから代入している
			int unitPrice = Integer.parseInt(scanner.nextLine()); // 単価の入力

			System.out.print("数量 ==> ");
			int quantity = Integer.parseInt(scanner.nextLine()); // 数量の入力

			earnings[i] = new Earnings(name, unitPrice, quantity); // インスタンス配列に生成したインスタンスを代入
		}

		for (int i = 0; i < earnings.length; i++) { // 出力ループ
			earnings[i].dispDetails(); // 明細行の出力
		}

		Earnings.dispTotal(); // 売上合計の出力
	}
}

/*
【実行結果1】
商品名 ==> みかん
単価 ==> 80
数量 ==> 5
商品名 ==> りんご
単価 ==> 150
数量 ==> 3
商品名 ==> もも
単価 ==> 200
数量 ==> 6
商品名:みかん,単価:80 円,数量:5,金額:400 円
商品名:りんご,単価:150 円,数量:3,金額:450 円
商品名:もも,単価:200 円,数量:6,金額:1200 円
売上合計:2050 円

【実行結果2】
商品名 ==> ばなな
単価 ==> 200
数量 ==> 8
商品名 ==> もも
単価 ==> 250
数量 ==> 5
商品名 ==> メロン
単価 ==> 1000
数量 ==> 3
商品名:ばなな,単価:200 円,数量:8,金額:1600 円
商品名:もも,単価:250 円,数量:5,金額:1250 円
商品名:メロン,単価:1000 円,数量:3,金額:3000 円
売上合計:5850 円
*/