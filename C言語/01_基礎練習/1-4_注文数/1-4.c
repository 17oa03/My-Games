/*
【プログラム概要】
必要数量を入力し、何ケースと個別に何個注文すれば良いかを出力する。なおケースは24個入りとする。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	int quantity, box, number;

	printf("必要数量 ==> ");
	scanf("%d", &quantity);

	box = quantity / 24;
	number = quantity % 24;

	printf("%dケースと、%d個注文する。\n", box, number);

	return 0;
}

/*
【実行結果】
必要数量 ==> 80
3ケースと、8個注文する。
*/