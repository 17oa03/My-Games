/*
【プログラム概要】
整数を入力し、
奇数か偶数かを判定し結果を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int Input_Function(void); /* プロトタイプ宣言 */
void Odd_or_Even(int);

int main(void) /* メインルーチンの定義 */
{
	int input;

	input = Input_Function(); /* 実引数は「無し」、戻り値は「input」 */

	Odd_or_Even(input);	/* 実引数は「input」、戻り値は「無し」 */

	return 0;
}

int Input_Function(void) { /* サブルーチンの定義、仮引数は「無し」 */

	int input;

	printf("整数 ==> ");
	scanf("%d", &input);

	return input; /* 戻り値は「input」 */
}

void Odd_or_Even(int input) /* サブルーチンの定義、仮引数は「input」 */
{

	if (input % 2 == 0) { /* 2で割り切れた場合 */

		printf("%d は、偶数です。\n", input);
	}
	else /* それ以外の場合 */
	{

		printf("%d は、奇数です。\n", input);
	}

	return; /* 戻り値は「無し」 */
}

/*
【実行結果1】
整数 ==> 5
5 は、奇数です。

【実行結果2】
整数 ==> 6
6 は、偶数です。
*/

/*
【考察】
メインプログラムにて、
サブルーチンを2つ呼び出して使用しているので、
サブルーチンのプロトタイプ宣言と定義も2つ記述する必要がある。

サブルーチンに引数、
戻り値が無い場合は、
データ型をvoid型にして記述をする。

Void(ボイド)は、
「何もない」という意味になる。
*/