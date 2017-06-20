/*
【プログラム概要】
西暦を入力し、閏年か否かを出力する。
ただし複数のif文を使用し、論理演算子(&&,||)は使用不可とする。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	int seireki1, seireki2;

	printf("西暦4桁 ==> ");
	scanf("%d", &seireki1);

	seireki2 = seireki1 % 400;

	if (seireki2 == 0) {
		printf("%d年は、閏年です。\n", seireki1);
	}
	else
	{
		seireki2 = seireki1 % 4;
		if (seireki2 == 0) {

			seireki2 = seireki1 % 100;

			if (seireki2 == 0) {
				printf("%d年は、閏年ではありません。\n", seireki1);
			}
			else
			{
				printf("%d年は、閏年です。\n", seireki1);
			}
		}
		else
		{
			printf("%d年は、閏年ではありません。\n", seireki1);
		}
	}

	return 0;
}

/*
【実行結果1】
西暦4桁 ==> 2020
2020年は、閏年です。

【実行結果2】
西暦4桁 ==> 2019
2019年は、閏年ではありません。

【実行結果3】
西暦4桁 ==> 2100
2100年は、閏年ではありません。

【実行結果4】
西暦4桁 ==> 2400
2400年は、閏年です。
*/