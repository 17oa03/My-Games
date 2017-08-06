/*
【プログラム概要】
整数を入力し、その階乗を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int Factorial(int); /* 階乗関数 */

int main(void) /* メインルーチン */
{
	int input, answer; /* 入力値と階乗処理後の値を格納する変数 */

	printf("整数 ==> ");
	scanf("%d", &input); /* 入力 */

	answer = Factorial(input); /* 階乗処理 */

	printf("%d の 階乗は、%d です。\n", input, answer); /* 出力 */

	return 0;
}

int Factorial(int input) /* サブルーチン、仮引数は「入力値」 */
{
	int answer; /* 階乗処理後の値を格納する変数 */

	if (input == 0) { /* 入力値が「0」の場合 */

		answer = 1; /* 「0」の階乗は「1」 */
	}
	else /* それ以外の場合 */
	{

		answer = input * Factorial(input - 1); /* 入力値の階乗処理 */
	}

	return answer; /* 階乗結果 */
}

/*
【実行結果1】
整数 ==> 5
5 の 階乗は、120 です。

【実行結果2】
整数 ==> 1
1 の 階乗は、1 です。

【実行結果3】
整数 ==> 0
0 の 階乗は、1 です。

【実行結果4】
整数 ==> 12
12 の 階乗は、479001600 です。
*/