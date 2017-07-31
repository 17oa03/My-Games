/*
【プログラム概要】
身長と体重を入力し、
BMIを小数点以下2桁まで出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main (void)
{
	double height, weight, bmi; /* 変数の定義 */

	printf("身長(m) ==> ");
	scanf("%lf", &height); /* scanf関数でdouble型変数に入力するときは「%lf」 */

	printf("体重(kg) ==> ");
	scanf("%lf", &weight);

	bmi = weight / (height * height);

	printf("BMIは%5.2fです。\n", bmi); /* printf関数でdouble型を出力する場合は「%f」 */

	return 0;
}

/*
【実行結果】
身長(m) ==> 1.72
体重(kg) ==> 65.8
BMIは22.24です。
*/
