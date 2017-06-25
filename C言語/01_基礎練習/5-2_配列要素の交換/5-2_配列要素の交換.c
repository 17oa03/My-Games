/*
【プログラム概要】
2つの初期化されている配列の各要素を交換する。
確認のため交換前と交換後の配列の要素を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

#define YOUSO 10 /* 文字列「YOUSO」を文字列「10」に置き換えます。 */

int main(void)
{
	int array1[YOUSO] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int array2[YOUSO] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
	int temp[YOUSO];
	int i;

	printf("*** 交換前 ***\n");
	printf("array1 = ");

	for (i = 0; i < YOUSO; i++) {

		printf("%3d", array1[i]); /* 配列ary1の交換前の出力 */
		temp[i] = array1[i]; /* 配列ary1のデータを別の配列tmpに一時的に保存する。 */
	}

	printf("\n");
	printf("array2 = ");

	for (i = 0; i < YOUSO; i++) {

		printf("%3d", array2[i]); /* 配列ary2の交換前の出力 */
		array1[i] = array2[i]; /* 配列ary2のデータを配列ary1に代入する。*/
	}

	printf("\n");
	printf("*** 交換後 ***\n");
	printf("array1 = ");

	for (i = 0; i < YOUSO; i++) {

		printf("%3d", array1[i]); /* 配列ary1の交換後の出力 */
	}

	printf("\n");
	printf("array2 = ");

	for (i = 0; i < YOUSO; i++) {

		array2[i] = temp[i]; /* 一時的に保存していた配列ary1のデータを代入した配列tempを配列ary2に代入する。 */
		printf("%3d", array2[i]); /* 配列ary2の交換後の出力 */
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