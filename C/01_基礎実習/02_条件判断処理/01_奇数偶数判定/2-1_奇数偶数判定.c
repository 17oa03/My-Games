/*
【プログラム概要】
整数を入力し、if文を使って奇数か偶数かを判定し結果を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int seisu, amari;

	printf("整数 ==> ");
	scanf("%d", &seisu);

	amari = seisu % 2;

	if (amari == 1) { /* 「amari」が「1」だった場合 */

		printf("%dは、奇数です。\n", seisu);
	}
	else /* それ以外の場合 */
	{

		printf("%dは、偶数です。\n", seisu);
	}

	return 0;
}

/*
【実行結果1】
整数 ==> 5
5は、奇数です。

【実行結果2】
整数 ==> 10000
10000は、偶数です。
*/