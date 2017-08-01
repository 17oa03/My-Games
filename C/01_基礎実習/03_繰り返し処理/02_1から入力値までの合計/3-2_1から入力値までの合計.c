/*
【プログラム概要】
1から入力した整数までの合計を計算し、
while文を用いて合計を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int seisu1, seisu2;
	int gokei = 0;

	printf("整数 ==> ");
	scanf("%d", &seisu1); /* 入力 */

	seisu2 = seisu1; /* 代入 */

	while (seisu2 != 0) { /* seisu2 が 0 になるまでループ */

		gokei += seisu2; /* 「gokei = gokei + seisu2;」と同じ */

		seisu2--; /* seisu2 をデクリメント(-1) */
	}

	printf("1 から %d までの合計は %d です。\n", seisu1, gokei);

	return 0;
}

/*
【実行結果1】
整数 ==> 1
1 から 1 までの合計は 1 です。

【実行結果2】
整数 ==> 25
1 から 25 までの合計は 325 です。

【実行結果3】
整数 ==> 65535
1 から 65535 までの合計は 2147450880 です。
*/