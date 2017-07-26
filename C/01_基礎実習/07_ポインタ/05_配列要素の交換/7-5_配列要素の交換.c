/*
【プログラム概要】
2つの初期化されている配列の各要素を
ポインタ変数を使用して交換する。
*/

/*【プログラム】*/
#include <stdio.h>

#define ELEMENT 10 /* マクロ定数の定義 */

int main(void)
{
	int data1[ELEMENT] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }; /* 配列変数の定義と初期化 */
	int data2[ELEMENT] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
	int tmp[ELEMENT];

	int i; /* カウンタ変数の定義 */

	int *p_data1; /* ポインタ変数の宣言 */
	int *p_data2;
	int *p_tmp;

	p_data1 = data1; /* 配列変数の先頭アドレスをセット */
	p_data2 = data2;
	p_tmp = tmp;

	printf("*** 交換前 ***\n");
	printf("data1 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", *(p_data1 + i)); /* 交換前の「p_data1」の参照する値を出力 */
		*(p_tmp + i) = *(p_data1 + i); /* 「p_data1」の参照する値を「p_tmp」の参照先に代入 */
	}

	printf("\n");
	printf("data2 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", *(p_data2 + i)); /* 交換前の「p_data2」の参照する値を出力 */
		*(p_data1 + i) = *(p_data2 + i); /* 「p_data2」の参照する値を「p_data1」の参照先に代入 */
	}

	printf("\n*** 交換後 ***\n");
	printf("data1 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", *(p_data1 + i)); /* 交換後の「p_data1」の参照する値を出力 */
	}

	printf("\n");
	printf("data2 = ");

	for (i = 0; i < ELEMENT; i++) {

		*(p_data2 + i) = *(p_tmp + i); /* 「p_tmp」の参照する値を「p_data2」の参照先に代入 */
		printf("%3d", *(p_data2 + i)); /* 交換後の「p_data2」の参照する値を出力 */
	}

	printf("\n");

	return 0;
}

/*
【実行結果】
*** 交換前 ***
data1 =   2  4  6  8 10 12 14 16 18 20
data2 =   3  6  9 12 15 18 21 24 27 30
*** 交換後 ***
data1 =   3  6  9 12 15 18 21 24 27 30
data2 =   2  4  6  8 10 12 14 16 18 20
*/

/*
【考察】
ポインタ変数を使ったデータ交換になる、
for文の処理で、
「間接演算子(ポインタ変数 + カウンタ変数)」を記述し、
参照先である配列変数の値を交換しながらループをさせる。
*/