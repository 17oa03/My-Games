/*
【プログラム概要】
初期化されている配列の要素を
ポインタ変数を使用して降順に並べ替える。
*/

/*
【プログラム】
*/
#include <stdio.h>

/* マクロ定数の定義 */
#define YOUSO 5

int main(void)
{
	/* ローカル変数と配列の定義 */
	double data[YOUSO] = { 160.7, 162.8, 155.5, 168.3, 160.1 };
	double temp;
	int i, j;

	/* ポインタ変数の定義 */
	double *p_data;

	printf("*** ソート前 ***\n");

	/* ソート前の配列の出力 */
	for (p_data = data; p_data < data + YOUSO; p_data++) {

		printf(" %3.1f", *p_data);
	}
	
	printf("\n");

	/* 配列の要素を比較する為のfor文 */
	for (i = 0, p_data = p_data - YOUSO; i < YOUSO - 1; i++) {
		for (j = i + 1; j < YOUSO; j++) {

			/* 2つの要素の比較 */
			if (*(p_data + j) > *(p_data + i)) {

				/* ソート処理 */
				temp = *(p_data + j);
				*(p_data + j) = *(p_data + i);
				*(p_data + i) = temp;

			}
		}
	}

	printf("*** ソート後 ***\n");

	/* ソート後の配列の出力 */
	for (p_data = data; p_data < data + YOUSO; p_data++) {

		printf(" %3.1f", *p_data);
	}

	printf("\n");

	return 0;
}

/*
【実行結果】
*** ソート前 ***
160.7 162.8 155.5 168.3 160.1
*** ソート後 ***
168.3 162.8 160.7 160.1 155.5
*/

/*
【メモ】
ループが思い通りに処理されない時は、
printf関数を使用したデバッグライトが有効的、
気になるループ処理の前後にprintf関数の出力を挟むと、
どのような処理がされているか把握しやすい。
*/