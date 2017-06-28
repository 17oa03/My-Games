/*
【プログラム概要】
月(1月～12月)を入力し、季節(春、夏、秋、冬)を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	int month;

	printf("月 ==> ");
	scanf("%d", &month);

	switch (month) {

	case 3: case 4: case 5:
		printf("%d月は、春です。\n", month);
		break;
	case 6: case 7: case 8:
		printf("%d月は、夏です。\n", month);
		break;
	case 9: case 10: case 11:
		printf("%d月は、秋です。\n", month);
		break;
	case 12: case 1: case 2:
		printf("%d月は、冬です。\n", month);
		break;
	default:
		printf("1から12を入力して下さい。\n");
		break;
	}

	return 0;
}

/*
【実行結果1】
月 ==> 3
3月は、春です。

【実行結果2】
月 ==> 6
6月は、夏です。

【実行結果3】
月 ==> 11
11月は、秋です。

【実行結果4】
月 ==> 2
2月は、冬です。

【実行結果5】
月 ==> 13
1から12を入力して下さい。
*/