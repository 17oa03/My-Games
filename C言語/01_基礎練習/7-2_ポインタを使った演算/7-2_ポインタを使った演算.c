/*
【プログラム概要】
2つの整数を入力し、
ポインタ変数を使用して和を計算、
計算結果を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	/* ローカル変数の定義 */
	int input1, input2, answer;

	/* ポインタ変数の定義 */
	int *p_input1, *p_input2, *p_answer;

	/* アドレスセット */
	p_input1 = &input1;
	p_input2 = &input2;
	p_answer = &answer;

	printf("1つ目の整数を入力してください ==> ");
	scanf("%d", p_input1);

	printf("2つ目の整数を入力してください ==> ");
	scanf("%d", p_input2);
	
	/* 間接演算子でアクセス先の値を参照して計算する */
	*p_answer = *p_input1 + *p_input2;

	printf("%d + %d = %d\n", *p_input1, *p_input2, *p_answer);

	return 0;
}

/*
【実行結果】
1つ目の整数を入力してください ==> 30
2つ目の整数を入力してください ==> 20
30 + 20 = 50
*/

/*
【不具合履歴】
演算式にて、
間接演算子の記述が無かった為、
不定の値が表示された、
「*」を記述して修正しました。
*/