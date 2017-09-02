/*
【概要】
2次元配列に初期化された成績データを元に、
各個人と各科目の平均と合計を求め、
成績一覧表を標準出力に出力する。
*/

// 【プログラム】
package com.github.jkadai02;

public class Kadai0206 {
	public static void main(String[] args) {

		int[][] data1 = {
				{ 25, 50, 73, 80 },
				{ 42, 62, 95, 70 },
				{ 52, 39, 42, 52 },
		};

		String[] subject1 = { "英語", "数学", "国語", "理科" };
		String[] name1 = { "阿部", "菊池", "瀬戸" };

		int[][] data2 = {
				{ 25, 50, 73, 80, 52 },
				{ 42, 62, 95, 70, 43 },
				{ 52, 39, 42, 52, 63 },
				{ 77, 58, 73, 82, 80 },
		};

		String[] subject2 = { "英語", "数学", "国語", "理科", "社会" };
		String[] name2 = { "阿部", "菊池", "瀬戸", "戸川" };

		output(data1, subject1, name1); // 成績データ1の出力
		output(data2, subject2, name2); // 成績データ2の出力
	}

	public static void output(int[][] data, String[] subject, String[] name) {

		int i = 0; // 人数
		int j = 0; // 科目数

		StringBuilder sb = new StringBuilder(); // メモリ領域(バッファ)の確保

		sb.append(String.format("%33s\n", "*** 成  績  一  覧  表 ***")).append("名前 | ");

		for(String s : subject) // 科目名追加ループ
			sb.append(s).append("  | "); // 科目名の追加
		sb.append("合計 |  平均\n");

		lule(subject, sb); // 罫線の追加

		for (i = 0; i < name.length; i++) { // 名前追加ループ

			int nameTotal = 0; // 個人の合計点

			sb.append(name[i]).append(" | "); // 名前の追加

			for (j = 0; j < subject.length; j++) { // 点数追加ループ

				sb.append(String.format("%4d", data[i][j])).append("  | "); // 点数の追加

				nameTotal += data[i][j]; // 合計点の計算
			}

			sb.append(" ").append(nameTotal).append(" |  ") // 合計点の追加
				.append(String.format("%.1f", (double)nameTotal / j)).append("\n"); // 平均の追加
		}

		lule(subject, sb); // 罫線の追加

		int[] subjectTotal = new int[j]; // 各科目の合計と平均

		for (i = 0; i < name.length; i++) { // 各科目の合計計算ループ
			for (j = 0; j < subject.length; j++) {
				subjectTotal[j] += data[i][j]; // 各科目の合計の計算
			}
		}

		sb.append("合計 |");
		for (int k : subjectTotal) // 各科目の合計追加ループ
			sb.append(String.format("%5d", k)).append("  |"); // 各科目の合計の追加
		sb.append("\n"); // 改行

		sb.append("平均 |");
		for (int k : subjectTotal) // 各科目の平均追加ループ
			sb.append(String.format("%7.1f", (double)k / i)).append("|"); // 各科目の平均の追加
		sb.append("\n"); // 改行

		System.out.println(sb.toString()); // バッファを標準出力
	}

	public static void lule(String[] subject, StringBuilder sb) { // 罫線を追加するメソッド

		sb.append("-----");
		for (int i = 0; i < subject.length; i++)
			sb.append("+-------"); // 科目数に合わせて罫線を追加
		sb.append("+------+------\n");
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
