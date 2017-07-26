/*
【プログラム概要】
ポインタ変数を使って標準入力よりデータを入力する。
その後、各々の変数のアドレス、サイズ、値を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	char   a;
	int    b;
	float  c;
	double d;

	char   *p_a; /* ポインタ変数の宣言 */
	int    *p_b;
	float  *p_c;
	double *p_d;

	p_a = &a; /* アドレスセット */
	p_b = &b;
	p_c = &c;
	p_d = &d;

	printf("Please input a ==> ");
	scanf("%c", p_a); /* ポインタ変数の参照先に入力 */

	printf("Please input b ==> ");
	scanf("%d", p_b); /* ポインタ変数の参照先に入力 */

	printf("Please input c ==> ");
	scanf("%f", p_c); /* ポインタ変数の参照先に入力 */

	printf("Please input d ==> ");
	scanf("%lf", p_d); /* ポインタ変数の参照先に入力 */

	printf("\n変数 アドレス サイズ       値\n"); /* タイトル */
	printf("---- -------- ------ --------\n");

	printf("a    %p %6d %8c\n",   &a, sizeof a, a); /* 変数の名前、アドレス、サイズ、値を出力 */
	printf("b    %p %6d %8d\n",   &b, sizeof b, b);
	printf("c    %p %6d %8.3f\n", &c, sizeof c, c);
	printf("d    %p %6d %8.3f\n", &d, sizeof d, d);

	printf("p_a  %p %6d %p\n", &p_a, sizeof p_a, p_a); /* ポインタ変数の名前、アドレス、サイズ、値を出力 */
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
アドレスセットとは、
ポインタ変数にアドレスを代入すること。

「&(アドレス演算子)」は、
オペランド(被演算子)のアドレスを与える。

「*(間接演算子)」は、
ポインタを介して値に間接的にアクセスできる。

オペランド(被演算子)とは、
式を構成する要素のうち、
演算子でない方の要素のこと、

if (foo == 10){}

上記の場合では、
「foo」と「10」が
オペランド(被演算子)になる。

ポインタ変数の参照先に値を入力する場合、
scanf関数では、

-------------------------------------------
scanf("入力変換指定子", ポインタ変数);
-------------------------------------------

アドレス演算子(&)の記述が必要無い事に注意する。

printf関数の出力変換指定子「%p」は、
ポインタのアドレス値を16進数で表す、
出力変換指定子「%x」は、
unsigned int(符号なし整数型)を16進数で表す、
ポインタのアドレス値を出力する際は、
前者で記述した方が正しい。
*/