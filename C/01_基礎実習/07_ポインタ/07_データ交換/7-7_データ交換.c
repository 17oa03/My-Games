/*
【プログラム概要】
2個の整数を入力し、
データを交換し出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

/* データ交換する関数 */
void swap(int *, int *);

int main(void)
{
	/* ローカル変数と配列の定義 */
	int input1, input2;

	/* 入力処理 */
	printf("整数1 ==> ");
	scanf("%d", &input1);

	printf("整数2 ==> ");
	scanf("%d", &input2);

	/* 実引数 : &input1, &input2 | 戻り値 : なし*/
	swap(&input1, &input2);

	printf("\n交換後\n");
	printf("整数 = %d\n", input1);
	printf("整数 = %d\n", input2);

	return 0;
}

/* 仮引数 : int *p_input1, int *p_input2 */
void swap(int *p_input1, int *p_input2) 
{
	int temp;

	/* データ交換の処理 */
	temp = *p_input1;
	*p_input1 = *p_input2;
	*p_input2 = temp;

	/* 戻り値 : なし */
	return;
}

/*
【実行結果】
整数1 ==> 300
整数2 ==> 700

交換後
整数 = 700
整数 = 300
*/

/*
【メモ】
実引数ではアドレス演算子、
仮引数では間接演算子を使用している。
*/