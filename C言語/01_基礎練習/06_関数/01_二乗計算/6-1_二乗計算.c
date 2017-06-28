/*
【プログラム概要】
整数を入力し、
入力した数値の二乗を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

/* 入力された数値を二乗する関数 */
int Square(int);

int main(void)
{
	int input, answer;

	printf("整数 ==> ");
	scanf("%d", &input);

	/* 実引数 : input | 戻り値 : answer */
	answer = Square(input);

	printf("%d の二乗は、%d です。\n", input, answer);

	return 0;
}
/* 仮引数 : input */
int Square(int input)
{
	int answer;

	answer = input * input;

	/* 戻り値 : answer */
	return answer;
}


/*
【実行結果1】
整数 ==> 5
5 の二乗は、25 です。

【実行結果2】
整数 ==> 100
100 の二乗は、10000 です。

【実行結果3】
整数 ==> 1
1 の二乗は、1 です。

【実行結果4】
整数 ==> 0
0 の二乗は、0 です。
*/

/*
【不具合履歴】
関数のプロトタイプ宣言にて、
名前の頭文字を大文字で記述していたが、
関数本体の名前を小文字で記述していた為、
ビルドエラーが発生した、
関数本体の名前の頭文字を大文字に記述し、
不具合を修正しました。
*/