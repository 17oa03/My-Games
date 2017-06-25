/*
【プログラム概要】
平均故障間隔(MTBF)と平均修理時間(MTTR)を整数で入力し、
稼働率(%)を小数点以下第1位まで出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

/* 稼働率を計算する関数 */
float Operation(int mtbf, int mttr);

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

	answer = Operation(mtbf, mttr);

	printf("             MTBF\n");
	printf("稼働率 = ------------- = %.1f %%\n", answer);
	printf("          MTBF + MTTR\n");

	return 0;
}

/* 仮引数 : mtbf, mttr */
float Operation(int mtbf, int mttr)
{
	float answer;

	/* 稼働率を求める計算 */
	answer = (float)mtbf / (mtbf + mttr) * 100;

	/* 戻り値 : answer */
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
【不具合履歴】
関数の定義にて、
float Operation(int mtbf, int mttr);
と記述しており、
「；」が余計に記述されていたため、
関数が宣言がされていない状態となっていた、
「；」を削除して修正した。
*/