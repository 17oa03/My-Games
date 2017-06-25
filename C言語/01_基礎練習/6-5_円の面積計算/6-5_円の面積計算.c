/*
【プログラム概要】
半径を入力し、
面の面積を小数点以下第2位まで出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

/* 入力を処理する関数 */
int Input(void);
/* 面積を計算する関数 */
double Calculate(int radius);
/* 出力を処理する関数 */
void Output(int, double);

int main(void)
{
	/* 半径 */
	int radius;
	/* 面積 */
	double area;

	/* 実引数 : なし | 戻り値 : radius */
	radius = Input();
	/* 実引数 : radius | 戻り値 : area */
	area = Calculate(radius);
	/* 実引数 : radius, area | 戻り値 : なし */
	Output(radius, area);

	return 0;
}

/* 仮引数 : なし */
int Input(void)
{

	int radius;

	printf("半径 ==> ");
	scanf("%d", &radius);

	/* 戻り値 : radius */
	return radius;
}

/* 仮引数 : radius */
double Calculate(int radius)
{

	double area;

	/* 面積の計算 */
	area = (double) radius * radius * 3.14;

	/* 戻り値 : area */
	return area;
}

/* 仮引数 : area */
void Output(int radius, double area)
{

	printf("半径 %d の円の面積は %.2f です。\n", radius, area);

	/* 戻り値 : なし */
	return;
}



/*
【実行結果1】
半径 ==> 12
半径 12 の円の面積は 452.16 です。

【実行結果2】
半径 ==> 10
半径 10 の円の面積は 314.00 です。
*/