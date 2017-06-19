/*
【プログラム概要】
int型の整数を4個用意し、次の計算をして計算結果を出力する。
1つ目の整数 - 2つ目の整数 ÷ 3つ目の整数
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	int seisu1 = 10; /* 変数の定義と初期化 */
	int seisu2 = 6;
	int seisu3 = 3;
	int kotae;

	kotae = seisu1 - seisu2 / seisu3; /* 演算結果を「kotae」に代入する */

	printf("%d - %d / %d = %d\n", seisu1, seisu2, seisu3, kotae); /* 演算結果の出力 */

	return 0;
}

/*
【実行例】
10 - 6 / 3 = 8
*/