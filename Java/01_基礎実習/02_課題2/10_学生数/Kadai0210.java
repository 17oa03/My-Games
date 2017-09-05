/*
【概要】
標準入力より各クラスの人数を入力し、
標準入力に学校全体の一覧表を出力する。
*/

// 【プログラム】
package com.github.jkadai02; // package 文

import java.util.Scanner; // import 文

public class Kadai0210 { // クラスの宣言
	public static void main(String[] args) { // main メソッドの宣言

		int[][] student = new int[3][]; // int 型配列の宣言

		input(student); // 入力
		output(student); // 出力
	}

	public static void input(int[][] student) { // 入力メソッド

		Scanner scanner = new Scanner(System.in); // インスタンスを生成し、代入

		for (int i = 0; i < student.length; i++) { // クラス数の入力ループ
			System.out.printf("%d 年生のクラス数 ==> ", i + 1);
			student[i] = new int[scanner.nextInt()]; // クラス数の入力

			if (student[i].length > 9 || student[i].length < 1) { // 最大、最小クラス数の判定
				System.out.println("各学年のクラス数は最低 1 クラスから最高 9 クラスです。");
				System.exit(1); // JVM の異常終了
			}

			for (int j = 0; j < student[i].length; j++) { // 人数の入力ループ
				System.out.printf("%d 年 %d 組の人数 ==> ", i + 1, j + 1);
				student[i][j] = scanner.nextInt(); // 人数の入力
			}
		}
	}

	public static void output(int[][] student) { // 出力メソッド

		int classMax = 0; // 最大クラス数

		for (int i = 0; i < student.length; i++) // 最大クラス数の検索ループ
			classMax = Math.max(classMax, student[i].length); // 最大値の比較
		int[] total = new int[classMax]; // 学年合計人数

		System.out.printf("\n*** クラス人数一覧表 ***\n   ");
		for (int i = 0; i < classMax; i++) // クラス人数の出力ループ
			System.out.printf("%2d組", i + 1); // クラス人数の出力

		for (int i = 0; i < student.length; i++) { // 学年合計人数の計算ループ
			for (int j = 0; j < student[i].length; j++)
				total[i] += student[i][j]; // 学年合計人数の計算
		}
		System.out.println(" 合計");

		for (int i = 0; i < student.length; i++) { // 学年の出力ループ
			System.out.printf("%d年", i + 1); // 学年の出力

			for (int j = 0; j < student[i].length; j++) // クラス人数の出力ループ
				System.out.printf("%4d", student[i][j]); // クラス人数の追加
			for (int j = 0; j < classMax - student[i].length; j++) // 空白の出力ループ
				System.out.print("    "); // 空白の出力
			System.out.printf("%5d\n", total[i]); // 合計の出力
		}

		int totalAll = 0; // 総合計人数
		for (int i : total) // 総合計人数の計算ループ
			totalAll += i; // 総合計人数の計算

		System.out.print("    "); // 空白の出力
		for (int i = 0; i < classMax - 1; i++) // 空白の出力ループ
			System.out.print("    "); // 空白の出力
		System.out.printf("総計%4d", totalAll); // 総合計人数の出力
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
