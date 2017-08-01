/*
【プログラム概要】
整数を入力し、その階乗を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int input;

	int total = 1; /* 「0」で初期化すると階乗が計算できない */

	int i; /* カウンタ変数 */

	printf("整数 ==> ");
	scanf("%d", &input); /* 入力 */

	for(i = input; i >= 1; i--) {
	
		total *= i; /* 「total = total * i;」と同じ */
	}

	printf("%d の階乗は %d です。\n", input, total);

	return 0;
}

/*
【実行結果1】
整数 ==> 5
5 の階乗は 120 です。

【実行結果2】
整数 ==> 1
1 の階乗は 1 です。

【実行結果3】
整数 ==> 0
0 の階乗は 1 です。

【実行結果4】
整数 ==> 12
12 の階乗は 479001600 です。
*/