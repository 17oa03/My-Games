/*
【プログラム概要】
半径を入力し、
面の面積を小数点以下第2位まで出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int    Input(void);         /* 半径入力 */
double Calculate(int);      /* 面積計算 */
void   Output(int, double); /* 半径と面積の出力 */

int main(void)
{
	int radius; /* 半径 */

	double area; /* 面積 */

	radius = Input(); /* 実引数は「無し」、戻り値は「radius」 */

	area = Calculate(radius); /* 実引数は「radius」、戻り値は「area」 */

	Output(radius, area); /* 実引数は「radius, area」、戻り値は「無し」 */

	return 0;
}

int Input(void) /* サブルーチン 、仮引数は「無し」 */
{
	int radius; /* 半径 */

	printf("半径 ==> ");
	scanf("%d", &radius); /* 半径入力 */

	return radius; /* 戻り値は「radius」 */
}

double Calculate(int radius) /* サブルーチンの定義、仮引数は「radius」 */
{
	double area; /* 面積 */

	area = (double)radius * radius * 3.14; /* 面積の計算 */

	return area; /* 戻り値は「area」 */
}

void Output(int radius, double area) /* サブルーチンの定義、仮引数は「area」 */
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
引数と戻り値のデータ型に注意しながら
プログラムを記述する必要がある。

戻り値が無い関数のプログラムに関して、
「return;(プログラムの終了コード)」の記述が無くても
プログラムは動作するが、
「制御を戻す」という意味で
文法的には記述が必要になる。

また、
「return;(プログラムの終了コード)」の記述が無い場合は、
サブルーチンが動作したままになってしまうという理由で、
記述は必要になる。
*/