/*
【プログラム概要】
ポインタ変数を使って標準入力よりデータを入力する。
その後、各々の変数のアドレス、サイズ、値を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>


int main(void)
{
	/* ローカル変数の定義 */
	char a;
	int b;
	float c;
	double d;

	/* ポインタ変数の定義 */
	char *p_a;
	int *p_b;
	float *p_c;
	double *p_d;

	/* アドレスセット */
	p_a = &a;
	p_b = &b;
	p_c = &c;
	p_d = &d;

	/* 入力の処理 */
	printf("Please input a ==> ");
	scanf("%c", p_a);

	printf("Please input b ==> ");
	scanf("%d", p_b);

	printf("Please input c ==> ");
	scanf("%f", p_c);

	printf("Please input d ==> ");
	scanf("%lf", p_d);

	printf("\n変数 アドレス サイズ       値\n");
	printf("---- -------- ------ --------\n");

	/* ローカル変数の情報 */
	printf("a    %p %6d %8c\n", &a, sizeof a, a);
	printf("b    %p %6d %8d\n", &b, sizeof b, b);
	printf("c    %p %6d %8.3f\n", &c, sizeof c, c);
	printf("d    %p %6d %8.3f\n", &d, sizeof d, d);

	/* ポインタ変数の情報 */
	printf("p_a  %p %6d %p\n", &p_a, sizeof p_a, p_a);
	printf("p_b  %p %6d %p\n", &p_b, sizeof p_b, p_b);
	printf("p_c  %p %6d %p\n", &p_c, sizeof p_c, p_c);
	printf("p_d  %p %6d %p\n", &p_d, sizeof p_d, p_d);

	return 0;
}

/*
【実行結果】
Please input a ==> k
Please input b ==> 10000
Please input c ==> 123.456
Please input d ==> 1000.123

変数 アドレス サイズ       値
---- -------- ------ --------
a    0093FD87      1        k
b    0093FD78      4    10000
c    0093FD6C      4  123.456
d    0093FD5C      8 1000.123
p_a  0093FD50      4 0093FD87
p_b  0093FD44      4 0093FD78
p_c  0093FD38      4 0093FD6C
p_d  0093FD2C      4 0093FD5C
*/

/*
【メモ】
アドレス演算子「&」はオペランドのアドレスを与える、
間接演算子「*」はポインタを介して値を間接的にアクセスする。
オペランドとは、
式を構成する要素の内、
演算子でない方の要素、
つまり、式に登場する数値や変数などのことです。
*/