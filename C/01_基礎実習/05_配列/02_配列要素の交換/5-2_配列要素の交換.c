/*
【プログラム概要】
2つの初期化されている配列の各要素を交換する。
確認のため交換前と交換後の配列の要素を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define ELEMENT 10 /* 文字列「ELEMENT」を文字列「10」にマクロ置換 */

int main(void)
{
	int array1[ELEMENT] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }; /* 配列の初期化 */
	int array2[ELEMENT] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };

	int tmp[ELEMENT]; /* 一時的にデータを保存する配列 */

	int i; /* カウンタ変数 */

	printf("*** 交換前 ***\n");
	printf("array1 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", array1[i]); /* 配列「array1」の交換前の出力 */
		tmp[i] = array1[i]; /* 配列「array1」のデータを別の配列「tmp」に代入 */
	}

	printf("\n");
	printf("array2 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", array2[i]); /* 配列「array2」の交換前の出力 */
		array1[i] = array2[i]; /* 配列「array2」のデータを配列「array1」に代入 */
	}

	printf("\n");
	printf("*** 交換後 ***\n");
	printf("array1 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", array1[i]); /* 配列「array1」の交換後の出力 */
	}

	printf("\n");
	printf("array2 = ");

	for (i = 0; i < ELEMENT; i++) {

		array2[i] = tmp[i]; /* 配列「tmp」のデータを配列「array2」に代入 */
		printf("%3d", array2[i]); /* 配列「array2」の交換後の出力 */
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