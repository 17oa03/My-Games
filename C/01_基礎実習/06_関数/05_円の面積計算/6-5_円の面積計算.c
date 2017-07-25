/*
【プログラム概要】
半径を入力し、
面の面積を小数点以下第2位まで出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

/* プロトタイプ宣言 */
int    Input(void);         /* 半径入力 */
double Calculate(int);      /* 面積計算 */
void   Output(int, double); /* 半径と面積の出力 */

int main(void)
{
	/* 半径 */
	int radius;

	/* 面積 */
	double area;

	radius = Input(); /* 実引数は「無し」、戻り値は「radius」 */

	area = Calculate(radius); /* 実引数は「radius」、戻り値は「area」 */

	Output(radius, area); /* 実引数は「radius, area」、戻り値は「無し」 */

	return 0;
}

/* サブルーチン */
int Input(void) /* 仮引数は「無し」 */
{
	/* 半径 */
	int radius;

	printf("半径 ==> ");
	scanf("%d", &radius);

	return radius; /* 戻り値は「radius」 */
}

/* サブルーチン */
double Calculate(int radius) /* 仮引数は「radius」 */
{
	/* 面積 */
	double area;

	/* 面積の計算 */
	area = (double)radius * radius * 3.14;

	return area; /* 戻り値は「area」 */
}

/* サブルーチン */
void Output(int radius, double area) /* 仮引数は「area」 */
{
	printf("半径 %d の円の面積は %.2f です。\n", radius, area);

	return; /* 戻り値は「無し」 */
}

/*
【実行結果1】
半径 ==> 12
半径 12 の円の面積は 452.16 です。

【実行結果2】
半径 ==> 10
半径 10 の円の面積は 314.00 です。
*/

/*
【考察】
今回は、
引数と戻り値のデータ型に注意しながら
プログラムを記述する必要があった。

戻り値が無い
関数のプログラムに関して、
「return;」の記述が無くても
プログラムは動作するが、
「制御を戻す」という意味で
文法的には記述が必要になる。

また、
「return;」の記述が無い場合は、
サブルーチンが動作したままに
なってしまうという理由で、
記述は必要になる。
*/