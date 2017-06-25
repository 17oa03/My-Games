/*
【プログラム概要】
標準入力より整数を5個入力し、
入力順とは逆に標準出力に出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

/* マクロ定数の定義 */
#define YOUSO 5

int main(void)
{
	/* ローカル変数の定義 */
	int array[YOUSO];
	int i;

	/* ポインタ変数の定義 */
	int *p_array;

	/* アドレスセット */
	p_array = array; /* array = &array[0] */

	/* ポインタ配列のデータを出力 */
	for (i = 0; i < YOUSO; i++) {
		printf("整数 ==> ");
		scanf("%d", p_array + i);
	}

	printf("---逆順出力---\n");

	/* 逆順出力 */
	for (i--; i >= 0; i--) {
		printf("%9d\n", *(p_array + i));
	}

	return 0;
}

/*
【実行結果】
整数 ==> 34
整数 ==> -5
整数 ==> 123
整数 ==> 0
整数 ==> -21
---逆順出力---
      -21
        0
      123
       -5
       34
*/