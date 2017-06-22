/*
【プログラム概要】
整数を5個入力し、その最大値と最小値を出力する。
配列は使用不可です。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	int input, max, min;
	int i;

	printf("整数 ==> ");
	scanf("%d", &input);

	max = input;
	min = input;

	for (i = 0; i < 4; i++) {

		printf("整数 ==> ");
		scanf("%d", &input);

		if (max < input) {
			max = input;
		}

		if (min > input) {
			min = input;
		}
	}

	printf("最大値 = %d\n", max);
	printf("最小値 = %d\n", min);

	return 0;
}

/*
【実行結果1】
整数 ==> 5
整数 ==> -100
整数 ==> -70
整数 ==> 200
整数 ==> 60
最大値 = 200
最小値 = -100

【実行結果2】
整数 ==> -80
整数 ==> -3
整数 ==> 0
整数 ==> 230
整数 ==> 500
最大値 = 500
最小値 = -80

【実行結果3】
整数 ==> 70
整数 ==> 60
整数 ==> 50
整数 ==> 40
整数 ==> 30
最大値 = 70
最小値 = 30
*/