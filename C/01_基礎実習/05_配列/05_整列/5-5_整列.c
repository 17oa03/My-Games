/*
【プログラム概要】
初期化されている配列の要素を降順に並び替える。

※並び替える前と後を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define ELEMENT 5 /* 文字列「ELEMENT」を文字列「5」にマクロ置換 */

int main(void)
{
	double date[ELEMENT] = { 160.7, 162.7, 155.5, 168.3, 160.1 }; /* 配列の初期化 */

	double temp; /* 一時的にデータを保存する変数 */

	int i, j; /* カウンタ変数 */

	printf("*** ソート前 ***\n");

	for (i = 0; i < ELEMENT; i++) {

		printf("  %.1f", date[i]); /* 整列前の出力 */
	}

	printf("\n");

	for (i = 0; i < ELEMENT - 1; i++) { /* 降順ソート処理 */
		for (j = i + 1; j < ELEMENT; j++) {

			if (date[i] < date[j]) {

				temp    = date[j]; /* データ交換 */
				date[j] = date[i];
				date[i] = temp;
			}
		}
	}

	printf("*** ソート後 ***\n");

	for (i = 0; i < ELEMENT; i++) {

		printf("  %.1f", date[i]); /* 整列後の出力 */
	}

	printf("\n");

	return 0;
}

/*
【実行結果】
*** ソート前 ***
160.7  162.7  155.5  168.3  160.1
*** ソート後 ***
168.3  162.7  160.7  160.1  155.5
*/