/*
【プログラム概要】
整数を入力し、if文を使って奇数か偶数かを判定し結果を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	int seisu;
	int amari;

	printf("整数 ==> ");
	scanf("%d", &seisu);

	amari = seisu % 2;

	if (amari == 1) { /* 条件式の「=」と「==」を間違えやすい。 */
		printf("%dは、奇数です。\n", seisu);
	}
	else
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