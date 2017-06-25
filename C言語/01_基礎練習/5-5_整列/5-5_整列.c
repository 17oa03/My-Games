/*
【プログラム概要】
初期化されている配列の要素を降順に並び替える。

※並び替える前と後を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

#define YOUSO 5

int main(void)
{
	double date[YOUSO] = { 160.7, 162.7, 155.5, 168.3, 160.1 };
	double temp;
	int i, j;

	printf("*** ソート前 ***\n");

	for (i = 0; i < YOUSO; i++) {

		printf("  %.1f", date[i]);
	}

	printf("\n");

	for (i = 0; i < YOUSO - 1; i++) { /* 並び替えには「交換法」を用います。*/
		for (j = i + 1; j < YOUSO; j++) { /* 配列の要素を先頭から2個ずつ指定します。 */

			if (date[i] < date[j]) { /* あとは、比較して配列のデータを入れ替えるだけです。 */

				temp = date[j];
				date[j] = date[i];
				date[i] = temp;
			}
		}
	}

	printf("*** ソート後 ***\n");
	
	for (i = 0; i < YOUSO; i++) {

		printf("  %.1f", date[i]);
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