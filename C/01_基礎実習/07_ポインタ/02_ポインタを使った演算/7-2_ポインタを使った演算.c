/*
【プログラム概要】
2つの整数を入力し、
ポインタ変数を使用して和を計算、
計算結果を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int input1, input2, answer;/* 変数の定義 */

	int *p_input1, *p_input2, *p_answer; /* ポインタ変数の宣言 */

	p_input1 = &input1; /* アドレスセット */
	p_input2 = &input2;
	p_answer = &answer;

	printf("1つ目の整数を入力してください ==> ");
	scanf("%d", p_input1); /* ポインタ変数の参照先に入力 */

	printf("2つ目の整数を入力してください ==> ");
	scanf("%d", p_input2); /* ポインタ変数の参照先に入力 */

	*p_answer = *p_input1 + *p_input2; /* 間接演算子でアクセス先の値を参照し、演算結果を代入 */

	printf("%d + %d = %d\n", *p_input1, *p_input2, *p_answer); /* 参照先の値を出力する */

	return 0;
}

/*
【実行結果】
1つ目の整数を入力してください ==> 30
2つ目の整数を入力してください ==> 20
30 + 20 = 50
*/

/*
【考察】
ポインタ変数と間接演算子を使って演算し、
結果を別のポインタ変数に代入することができる。
*/