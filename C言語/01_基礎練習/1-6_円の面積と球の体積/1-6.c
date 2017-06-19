/*
【プログラム概要】
半径を入力し、円の面積と球の体積を小数点以下1桁まで出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	int radius;
	double area, volume;

	printf("半径 ==> ");
	scanf("%d", &radius);

	area = radius * radius * 3.14;
	volume = (4.0 / 3) * radius * radius * radius * 3.14;

	printf("半径%dの円の面積は%3.1fです。\n", radius, area);
	printf("半径%dの球の面積は%4.1fです。\n", radius, volume);

	return 0;
}

/*
【実行例】
半径 ==> 5
半径5の円の面積は78.5です。
半径5の球の面積は523.3です。
*/