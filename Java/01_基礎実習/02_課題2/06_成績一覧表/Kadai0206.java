/*
【概要】
2次元配列に初期化された成績データを元に、
各個人と各科目の平均と合計を求め、
成績一覧表を標準出力に出力する。
*/

// 【プログラム】
package com.github.jkadai02; // package 文

public class Kadai0206 { // クラスの宣言
	public static void main(String[] args) { // main メソッドの宣言

		int[][] data1 = { // int 型配列の初期化
				{ 25, 50, 73, 80 },
				{ 42, 62, 95, 70 },
				{ 52, 39, 42, 52 },
		};

		String[] subject1 = { "英語", "数学", "国語", "理科" }; // String 型配列の初期化
		String[] name1 = { "阿部", "菊池", "瀬戸" }; // String 型配列の初期化

		int[][] data2 = { // int 型配列の初期化
				{ 25, 50, 73, 80, 52 },
				{ 42, 62, 95, 70, 43 },
				{ 52, 39, 42, 52, 63 },
				{ 77, 58, 73, 82, 80 },
		};

		String[] subject2 = { "英語", "数学", "国語", "理科", "社会" }; // String 型配列の初期化
		String[] name2 = { "阿部", "菊池", "瀬戸", "戸川" }; // String 型配列の初期化

		output(data1, subject1, name1); // 成績データ1の出力
		output(data2, subject2, name2); // 成績データ2の出力
	}

	public static void output(int[][] data, String[] subject, String[] name) { // 出力メソッド

		int i = 0; // 人数
		int j = 0; // 科目数

		System.out.println("           *** 成  績  一  覧  表 ***");

		System.out.print("名前 | ");
		for(String s : subject) // 科目名出力ループ
			System.out.printf("%s  | ", s); // 科目名の出力
		System.out.println("合計 |  平均");

		lule(subject); // 罫線の出力

		for (i = 0; i < name.length; i++) { // 出力ループ
			int nameTotal = 0; // 個人の合計点
			System.out.printf("%s | ", name[i]); // 名前の出力

			for (j = 0; j < subject.length; j++) { // 点数出力ループ
				System.out.printf("%4d  | ", data[i][j]); // 点数の出力
				nameTotal += data[i][j]; // 個人の合計点の計算
			}

			System.out.printf(" %d |  %.1f\n", nameTotal, (double)nameTotal / j); // 合計と平均の出力
		}

		lule(subject); // 罫線の出力

		int[] subjectTotal = new int[j]; // 各科目の合計と平均

		for (i = 0; i < name.length; i++) { // 各科目の合計ループ
			for (j = 0; j < subject.length; j++)
				subjectTotal[j] += data[i][j]; // 各科目の合計を計算
		}

		System.out.print("合計 |");
		for (int k : subjectTotal) // 各科目の合計ループ
			System.out.printf("%5d  |", k); // 各科目の合計を出力
		System.out.println(); // 改行

		System.out.print("平均 |");
		for (int k : subjectTotal) // 各科目の平均出力ループ
			System.out.printf("%7.1f|", (double)k / i); // 各科目の平均を出力
		System.out.printf("\n\n"); // 改行
	}

	public static void lule(String[] subject) { // 罫線出力メソッド

		System.out.print("-----");
		for (int i = 0; i < subject.length; i++) // 罫線出力ループ
			System.out.print("+-------"); // 科目数に合わせて罫線を出力
		System.out.println("+------+------");
	}
}

/*
【実行結果】
            *** 成  績  一  覧  表 ***
名前 | 英語  | 数学  | 国語  | 理科  | 合計 |  平均
-----+-------+-------+-------+-------+------+------
阿部 |   25  |   50  |   73  |   80  |  228 |  57.0
菊池 |   42  |   62  |   95  |   70  |  269 |  67.3
瀬戸 |   52  |   39  |   42  |   52  |  185 |  46.3
-----+-------+-------+-------+-------+------+------
合計 |  119  |  151  |  210  |  202  |
平均 |   39.7|   50.3|   70.0|   67.3|

            *** 成  績  一  覧  表 ***
名前 | 英語  | 数学  | 国語  | 理科  | 社会  | 合計 |  平均
-----+-------+-------+-------+-------+-------+------+------
阿部 |   25  |   50  |   73  |   80  |   52  |  280 |  56.0
菊池 |   42  |   62  |   95  |   70  |   43  |  312 |  62.4
瀬戸 |   52  |   39  |   42  |   52  |   63  |  248 |  49.6
戸川 |   77  |   58  |   73  |   82  |   80  |  370 |  74.0
-----+-------+-------+-------+-------+-------+------+------
合計 |  196  |  209  |  283  |  284  |  238  |
平均 |   49.0|   52.3|   70.8|   71.0|   59.5|
*/
