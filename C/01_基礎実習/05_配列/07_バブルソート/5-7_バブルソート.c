/*
【プログラム概要】
リダイレクション入力により配列にデータを格納し、
配列の要素を照準に並べ替える。

※並び替える前と後を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define ELEMENT 10 /* 文字列「ELEMENT」を文字列「10」にマクロ置換 */

int main(void)
{
	int array[ELEMENT]; /* 配列の宣言 */

	int temp; /* 一時的にデータを保存する変数 */

	int i, j; /* カウンタ変数 */

	int input; /* 入力値 */

	int input_count = 0; /* 入力回数 */

	int end_flag;  /* 終了フラグ */
	int sort_flag; /* ソートフラグ(OFF = 0, ON = 1) */

	printf("*** ソート前 ***\n");

	end_flag = scanf("%d", &input); /* リダイレクション入力 */

	for (i = 0; end_flag != EOF; i++) {

		array[i] = input; /* 配列に入力値を格納 */

		printf("%4d", array[i]); /* ソート前の出力 */

		end_flag = scanf("%d", &input); /* リダイレクション入力 */

		input_count++; /* 入力回数をインクリメント */
	}

	printf("\n");

	for (i = 0; i < input_count && sort_flag == 1; i++) { /* バブルソート */

		sort_flag = 0; /* ソートフラグOFF */

		for (j = input_count - 2; j >= i; j--) {　/* 後ろから1つ前の要素を比較 */

			if (array[j] > array[j + 1]) {

				temp     = array[j]; /* データ交換 */
				array[j] = array[j + 1];
				array[j + 1] = temp;

				sort_flag = 1; /* ソートフラグON */
			}
		}
	}

	printf("*** ソート後 ***\n");

	for (i = 0; i < input_count; i++) {

		printf("%4d", array[i]); /* ソート後の出力 */
	}

	printf("\n");

	return 0;
}

/*
【実行結果】
*** ソート前 ***
50  22  65  10  90  33  45  51  80  74
*** ソート後 ***
10  22  33  45  50  51  65  74  80  90
*/