/*
【プログラム概要】
リダイレクトによりファイルを出力し、
BMIを計算して№、身長、体重、BMIの一覧表を
標準出力へ出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int num;

	double sintyo, taiju, bmi;

	int end_flag; /* ファイル終端 */

	printf("NO 身長 体重  BMI \n");
	printf("-- ---- ---- -----\n");

	end_flag = scanf("%d %lf %lf", &num, &sintyo, &taiju); /* 入力 */

	while (end_flag != EOF) { /* ファイル終端までループ */

		bmi = taiju / (sintyo * sintyo); /* BMIの計算 */

		printf(" %d %.2f %.1f %.2f\n", num, sintyo, taiju, bmi);

		end_flag = scanf("%d %lf %lf", &num, &sintyo, &taiju); /* 入力 */
	}

	return 0;
}

/*
【実行結果】
NO 身長 体重  BMI
-- ---- ---- -----
 1 1.72 65.8 22.24
 2 1.80 55.5 17.13
 3 1.51 46.2 20.26
 4 1.65 75.1 27.58
 5 1.69 60.7 21.25
*/