/*
【プログラム概要】
試験の点数を整数で入力し、評価(A,B,C,D)を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	int tensu;

	printf("点数 ==> ");
	scanf("%d", &tensu);

	if (tensu > 100 || tensu < 0) {
		printf("正しい値を入力して下さい。\n");
	}
	else if (tensu >= 80) {
		printf("%d点、評価は「A」です。\n", tensu);
	}
	else if (tensu >= 70) {
		printf("%d点、評価は「B」です。\n", tensu);
	}
	else if (tensu >= 60) {
		printf("%d点、評価は「C」です。\n", tensu);
	}
	else if (tensu >= 0) {
		printf("%d点、評価は「D」です。\n", tensu);
	}

	return 0;
}

/*
【実行結果1】
点数 ==> 100
100点、評価は「A」です。

【実行結果2】
点数 ==> 80
80点、評価は「A」です。

【実行結果3】
点数 ==> 70
70点、評価は「B」です。

【実行結果4】
点数 ==> 60
60点、評価は「C」です。

【実行結果5】
点数 ==> 0
0点、評価は「D」です。

【実行結果6】
点数 ==> -1
正しい値を入力して下さい。

【実行結果7】
点数 ==> 101
正しい値を入力して下さい。

*/