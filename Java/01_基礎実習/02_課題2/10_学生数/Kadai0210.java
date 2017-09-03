/*
【概要】
標準入力より各クラスの人数を入力し、
標準入力に学校全体の一覧表を出力する。
*/

// 【プログラム】
package com.github.jkadai02;

import java.util.Scanner;

public class Kadai0210 {
	public static void main(String[] args) {

		int[][] student = new int[3][];
		StringBuilder sb = new StringBuilder(); // メモリ領域(バッファ)の確保

		input(student); // 入力
		output(student, sb); // 出力
	}

	public static void input(int[][] student) {

		Scanner scanner = new Scanner(System.in);

		for (int i = 0; i < student.length; i++) { // クラス数の入力ループ

			System.out.printf("%d 年生のクラス数 ==> ", i + 1);
			student[i] = new int[scanner.nextInt()]; // クラス数の入力

			if (student[i].length > 9 || student[i].length < 0) { // 最大、最小クラス数の判定
				System.out.println("各学年のクラス数は最低 1 クラスから最高 9 クラスです。");
				System.exit(1); // プログラム異常終了
			}

			for (int j = 0; j < student[i].length; j++) { // 人数の入力ループ
				System.out.printf("%d 年 %d 組の人数 ==> ", i + 1, j + 1);
				student[i][j] = scanner.nextInt(); // 人数の入力
			}
		}

		return;
	}

	public static void output(int[][] student, StringBuilder sb) {

		int classMax = 0; // 最大クラス数

		for (int i = 0; i < student.length; i++) // 最大クラス数の判定ループ
			classMax = Math.max(classMax, student[i].length); // 最大値の比較
		int[] total = new int[classMax]; // 学年合計人数

		sb.append("\n*** クラス人数一覧表 ***\n   ");
		for (int i = 0; i < classMax; i++) // クラス人数追加ループ
			sb.append(String.format("%2d組", i + 1)); // クラス人数の追加

		for (int i = 0; i < student.length; i++) { // 合計ループ
			for (int j = 0; j < student[i].length; j++) {
				total[i] += student[i][j]; // 学年合計人数の計算
			}
		}
		sb.append(" 合計\n"); // 合計の追加

		for (int i = 0; i < student.length; i++) { // 追加ループ
			sb.append(String.format("%d年", i + 1)); // 学年の追加

			for (int j = 0; j < student[i].length; j++) // クラス人数の追加ループ
				sb.append(String.format("%4d", student[i][j])); // クラス人数の追加
			for (int j = 0; j < classMax - student[i].length; j++) // 空白追加ループ
				sb.append("    "); // 空白の追加
			sb.append(String.format("%5d\n", total[i])); // 合計の追加
		}

		int totalAll = 0; // 総合計人数
		for (int i : total) // 総合計人数の計算ループ
			totalAll += i; // 総合計人数の計算

		sb.append("    "); // 空白の追加
		for (int i = 0; i < classMax - 1; i++) // 空白追加ループ
			sb.append("    "); // 空白の追加
		sb.append(String.format("総計%4d", totalAll)); // 総合計人数の追加

		System.out.println(sb.toString()); // 標準出力

		return;
	}
}

/*
【実行結果1】
1 年生のクラス数 ==> 3
1 年 1 組の人数 ==> 40
1 年 2 組の人数 ==> 50
1 年 3 組の人数 ==> 40
2 年生のクラス数 ==> 5
2 年 1 組の人数 ==> 30
2 年 2 組の人数 ==> 35
2 年 3 組の人数 ==> 40
2 年 4 組の人数 ==> 35
2 年 5 組の人数 ==> 30
3 年生のクラス数 ==> 1
3 年 1 組の人数 ==> 60

*** クラス人数一覧表 ***
    1組 2組 3組 4組 5組 合計
1年  40  50  40          130
2年  30  35  40  35  30  170
3年  60                   60
                    総計 360
【実行結果2】
1 年生のクラス数 ==> 9
1 年 1 組の人数 ==> 90
1 年 2 組の人数 ==> 80
1 年 3 組の人数 ==> 70
1 年 4 組の人数 ==> 60
1 年 5 組の人数 ==> 50
1 年 6 組の人数 ==> 40
1 年 7 組の人数 ==> 30
1 年 8 組の人数 ==> 20
1 年 9 組の人数 ==> 10
2 年生のクラス数 ==> 1
2 年 1 組の人数 ==> 50
3 年生のクラス数 ==> 4
3 年 1 組の人数 ==> 40
3 年 2 組の人数 ==> 30
3 年 3 組の人数 ==> 20
3 年 4 組の人数 ==> 10

*** クラス人数一覧表 ***
    1組 2組 3組 4組 5組 6組 7組 8組 9組 合計
1年  90  80  70  60  50  40  30  20  10  450
2年  50                                   50
3年  40  30  20  10                      100
                                    総計 600
*/
