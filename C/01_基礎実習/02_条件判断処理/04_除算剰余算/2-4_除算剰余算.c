/*
【プログラム概要】
整数型の変数を2つ用意、
それぞれに整数入力し、
1つ目の整数(被除数)を2つ目の整数(除数)で割った商と余りを出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int seisu1, seisu2, syo, amari;

	printf("被除数 ==> ");
	scanf("%d", &seisu1);

	printf("除数 ==> ");
	scanf("%d", &seisu2);

	if (seisu2 == 0) { /* もし除数が「0」だった場合 */
		printf("%dで割ることはできません。\n", seisu2);
	}
	else
	{
		syo = seisu1 / seisu2;   /* 商の計算 */
		amari = seisu1 % seisu2; /* 余りの計算 */

		if (amari == 0) { /* もし余りが「0」だった場合 */
			printf("%d / %d = %d\n", seisu1, seisu2, syo);
		}
		else /* それ以外の場合 */
		{
			printf("%d / %d = %d ... %d\n", seisu1, seisu2, syo, amari);
		}
	}

	return 0;
}

/*
【実行結果1】
被除数 ==> 7
除数 ==> 2
7 / 2 = 3 ... 1

【実行結果2】
被除数 ==> 6
除数 ==> 2
6 / 2 = 3

【実行結果3】
被除数 ==> 5
除数 ==> 0
0で割ることはできません。

【実行結果4】
被除数 ==> 0
除数 ==> 3
0 / 3 = 0
*/