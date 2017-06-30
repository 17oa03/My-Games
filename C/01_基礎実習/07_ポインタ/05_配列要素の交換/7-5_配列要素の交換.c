/*
【プログラム概要】
2つの初期化されている配列の各要素を
ポインタ変数を使用して交換する。
*/

/*
【プログラム】
*/
#include <stdio.h>

/* マクロ定数の定義 */
#define YOUSO 10

int main(void)
{
	/* ローカル変数と配列の定義 */
	int array1[YOUSO] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int array2[YOUSO] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
	int temp[YOUSO];
	int i;

	/* ポインタ変数の定義 */
	int *p_array1;
	int *p_array2;
	int *p_temp;

	/* アドレスセット */
	p_array1 = array1; /* 配列の先頭アドレスをセットしています。 */
	p_array2 = array2;
	p_temp = temp;

	printf("*** 交換前 ***\n");
	printf("array1 = ");

	/* 交換前の配列array1の出力と、配列tempへの代入 */
	for (i = 0; i < YOUSO; i++) {

		printf("%3d", *(p_array1 + i));
		*(p_temp + i) = *(p_array1 + i);
	}

	printf("\n");
	printf("array2 = ");

	/* 交換前の配列array2の出力と、配列array1への代入 */
	for (i = 0; i < YOUSO; i++) {

		printf("%3d", *(p_array2 + i));
		*(p_array1 + i) = *(p_array2 + i);
	}
	
	printf("\n*** 交換後 ***\n");
	printf("array1 = ");

	/* 交換後の配列array1の出力 */
	for (i = 0; i < YOUSO; i++) {

		printf("%3d", *(p_array1 + i));
	}

	printf("\n");
	printf("array2 = ");

	/* 交換後に配列array2の出力 */
	for (i = 0; i < YOUSO; i++) {

		*(p_array2 + i) = *(p_temp + i);
		printf("%3d", *(p_array2 + i));
	}
	
	printf("\n");

	return 0;
}

/*
【実行結果】
*** 交換前 ***
array1 =   2  4  6  8 10 12 14 16 18 20
array2 =   3  6  9 12 15 18 21 24 27 30
*** 交換後 ***
array1 =   3  6  9 12 15 18 21 24 27 30
array2 =   2  4  6  8 10 12 14 16 18 20
*/

/*
【メモ】
「i」と「1」を間違えやすいので注意！
*/