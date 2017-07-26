/*
【プログラム概要】
身長と体重を入力し、
ポインタ変数を使用して、
BMIを小数点以下2桁まで出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	double height, body_weight, bmi; /* 変数の定義 */

	double *p_height, *p_body_weight, *p_bmi; /* ポインタ変数の宣言 */

	p_height = &height; /* アドレスセット */
	p_body_weight = &body_weight;
	p_bmi = &bmi;

	printf("身長(m) ==> "); /* 身長の入力 */
	scanf("%lf", p_height);

	printf("体重(kg) ==> "); /* 体重の入力 */
	scanf("%lf", p_body_weight);
	
	*p_bmi = *p_body_weight / (*p_height * *p_height); /* 間接演算子でアクセス先の値を参照して計算する */

	printf("BMIは %.2f です。\n", *p_bmi); /* BMIの出力 */

	return 0;
}

/*
【実行結果1】
身長(m) ==> 1.72
体重(kg) ==> 65.8
BMIは 22.24 です。

【実行結果2】
身長(m) ==> 1.8
体重(kg) ==> 55.5
BMIは 17.13 です。
*/

/*
【考察】
「7-2_ポインタを使った演算」の応用になる。
*/