/*
【プログラム概要】
初期化されている配列の要素を
ポインタ変数を使用して降順に並べ替える。
*/

/*【プログラム】*/
#include <stdio.h>

#define ELEMENT 5 /* マクロ定数の定義 */

int main(void)
{
	double data[ELEMENT] = { 160.7, 162.8, 155.5, 168.3, 160.1 }; /* 配列の定義と初期化 */

	double temp; /* 一時的にデータを保存する変数 */

	int i, j; /* カウンタ変数 */

	double *p_data; /* ポインタ変数の定義 */

	printf("*** ソート前 ***\n");

	for (p_data = data; p_data < data + ELEMENT; p_data++) { /* ソート前の出力 */

		printf(" %3.1f", *p_data);
	}

	printf("\n");

	for (i = 0, p_data = p_data - ELEMENT; i < ELEMENT - 1; i++) { /* ソート処理 */
		for (j = i + 1; j < ELEMENT; j++) {

			if (*(p_data + j) > *(p_data + i)) { /* 要素の比較 */

				temp = *(p_data + j); /* データ交換 */
				*(p_data + j) = *(p_data + i);
				*(p_data + i) = temp;
			}
		}
	}

	printf("*** ソート後 ***\n");

	for (p_data = data; p_data < data + ELEMENT; p_data++) { /* ソート後の出力 */

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
【考察】
「7-5_配列要素の交換」の応用になる。
*/