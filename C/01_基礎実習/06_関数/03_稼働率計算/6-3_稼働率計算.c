/*
【プログラム概要】
平均故障間隔(MTBF)と平均修理時間(MTTR)を整数で入力し、
稼働率(%)を小数点以下第1位まで出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

/* プロトタイプ宣言 */
float Utilization(int, int);

/* メインルーチン */
int main(void)
{
	int mtbf, mttr;
	float answer;

	/* 平均故障間隔(MTBF)の入力 */
	printf("MTBF ==> ");
	scanf("%d", &mtbf);

	/* 平均修理時間(MTTR)の入力 */
	printf("MTTR ==> ");
	scanf("%d", &mttr);

	answer = Utilization(mtbf, mttr);  /* 実引数は「mtbf, mttr」、戻り値は「answer」 */

	printf("             MTBF\n");
	printf("稼働率 = ------------- = %.1f %%\n", answer);
	printf("          MTBF + MTTR\n");

	return 0;
}

/* サブルーチン */
float Utilization(int mtbf, int mttr) /* 仮引数は「mtbf, mttr」 */
{
	float answer;

	/* 稼働率 = 平均故障間隔 ÷ (平均故障間隔 + 平均修理時間) × 100 */
	answer = (float)mtbf / (mtbf + mttr) * 100;

	/* 戻り値は「answer」 */
	return answer;
}


/*
【実行結果1】
MTBF ==> 80
MTTR ==> 20
MTBF
稼働率 = ------------- = 80.0 %
MTBF + MTTR

【実行結果2】
MTBF ==> 90
MTTR ==> 15
MTBF
稼働率 = ------------- = 85.7 %
MTBF + MTTR
*/

/*
【考察】
メインプログラムにて、
サブルーチンを呼び出す際に、
実引数が2つ渡されている。

実引数の数が増えると、
プロトタイプ宣言の引数の型の記述と、
サブルーチンの仮引数の記述が変わるので注意する、
引数の数が一致しないと
コンパイルエラーが発生する。
*/