/*
【プログラム概要】
2次元配列に初期化された成績データをもとに、
各生徒の合計と平均、
及び各科目の合計と平均を求め、
成績一覧表を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define STUDENT 4 /* 生徒の数 */
#define SUBJECT 5 /* 教科の数 */

int main(void)
{
	int data[STUDENT][SUBJECT] = { /* 2次元配列の定義と初期化 */
		{ 35, 80, 85, 70, 62 },
		{ 62, 62, 95, 85, 74 },
		{ 53, 47, 55, 63, 77 },
		{ 72, 62, 79, 84, 83 },
	};

	int i, j; /* カウンタ変数 */

	int student_total = 0;      /* 生徒の合計点 */
	double student_average = 0; /* 生徒の平均点 */

	int subject_total[SUBJECT] = { 0 };      /* 各教科の合計点 */
	double subject_average[SUBJECT] = { 0 }; /* 各教科の平均点 */

	printf("             *** 成  績  一  覧  表 ***\n\n");
	printf("  No |  英  |  数  |  国  |  理  |  社  | 合計  平均\n");
	printf("----------------------------------------------------\n");

	for (i = 0; i < STUDENT; i++) { /* 生徒ループ */

		printf("%4d |", i + 1); /* 「No」の出力 */

		for (j = 0; j < SUBJECT; j++) { /* 教科ループ */

			printf("%4d  |", data[i][j]); /* 点数の出力 */

			student_total    += data[i][j]; /* 各生徒の合計点の計算 */
			subject_total[j] += data[i][j]; /* 各教科の合計点の計算 */
		}

		student_average = (double)student_total / SUBJECT; /* 各生徒の平均点の計算 */

		printf("%5d  ",   student_total);   /* 各生徒の合計点の出力 */
		printf("%3.1f\n", student_average); /* 各生徒の平均点の出力 */

		student_total   = 0; /* 生徒の合計点を初期化 */
		student_average = 0; /* 生徒の平均点を初期化 */
	}

	printf("-----+------+------+------+------+------+-----------\n");
	printf("合計 |");

	for (i = 0; i < SUBJECT; i++) { /* 出力ループ */

		printf("%4d  |", subject_total[i]); /* 各教科の合計点の出力 */

		subject_average[i] = subject_total[i]; /* 各教科の合計点を代入 */
	}

	printf("\n");
	printf("平均 |");

	for (i = 0; i < SUBJECT; i++) { /* 出力ループ */

		printf("  %2.1f|", subject_average[i] / STUDENT); /* 各教科の平均点の出力 */
	}

	printf("\n");

	return 0;
}
/*
【実行結果】
           *** 成  績  一  覧  表 ***

No |  英  |  数  |  国  |  理  |  社  | 合計  平均
----------------------------------------------------
 1 |  35  |  80  |  85  |  70  |  62  |  332  66.4
 2 |  62  |  62  |  95  |  85  |  74  |  378  75.6
 3 |  53  |  47  |  55  |  63  |  77  |  295  59.0
 4 |  72  |  62  |  79  |  84  |  83  |  380  76.0
-----+------+------+------+------+------+-----------
合計 | 222  | 251  | 314  | 302  | 296  |
平均 |  55.5|  62.8|  78.5|  75.5|  74.0|
*/