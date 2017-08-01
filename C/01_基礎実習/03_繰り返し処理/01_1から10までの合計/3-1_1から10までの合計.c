/*
【プログラム概要】
1から10までの合計をfor文を用いて、
合計を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int gokei = 0;

	int i; /* カウンタ変数 */

	for (i = 0; i <= 10; ++i) /* for (初期化式; 条件式; 再初期化式){ 処理 } */
	{
		gokei += i; /* 「gokei = gokei + i」と同じ */
	}

	printf("1から10までの合計は%dです。\n", gokei);

	return 0;
}

/*
【実行結果】
1から10までの合計は55です。
*/
