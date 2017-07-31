/*
【プログラム概要】
2個の整数を入力し、
データを交換し出力する。
*/

/*【プログラム】*/
#include <stdio.h>

void swap(int *, int *); /* データ交換する関数 */

int main(void)
{
	int input1, input2;

	printf("整数1 ==> ");
	scanf("%d", &input1);

	printf("整数2 ==> ");
	scanf("%d", &input2);

	swap(&input1, &input2); /* 実引数は「&input1, &input2」、戻り値は「無し」*/

	printf("\n交換後\n");
	printf("整数 = %d\n", input1);
	printf("整数 = %d\n", input2);

	return 0;
}

void swap(int *p_input1, int *p_input2) /* 仮引数は「int *p_input1, int *p_input2」 */
{
	int temp;

	temp = *p_input1; /* データ交換の処理 */
	*p_input1 = *p_input2;
	*p_input2 = temp;

	return; /* 戻り値は「なし」 */
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
【考察】
サブルーチンにアドレスを渡し、
ポインタ変数と間接演算子を使って、
データ交換を行っている。

これにより、
戻り値が無くても、
データ交換の処理が可能となっている。
*/