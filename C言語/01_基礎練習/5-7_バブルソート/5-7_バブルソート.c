/*
【プログラム概要】
リダイレクション入力により配列にデータを格納し、
配列の要素を照準に並べ替える。

※並び替える前と後を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

#define YOUSO 10

int main(void)
{
	int array[YOUSO];
	int temp;
	int i, j;
	int input;
	int input_count = 0;
	int end_flag;
	int sort_flag = 1;

	printf("*** ソート前 ***\n");

	end_flag = scanf("%d", &input);

	for (i = 0; end_flag != EOF; i++) {

		array[i] = input;
		printf("%4d", array[i]);
		end_flag = scanf("%d", &input);
		input_count += 1;
	}

	printf("\n");

	/* バブルソート */
	for (i = 0; i < input_count && sort_flag == 1; i++) {

		sort_flag = 0;

		/* 後ろから1つ前の要素を比較していきます。 */
		for (j = input_count - 2; j >= i; j--) {

			if (array[j] > array[j + 1]) {

				/* 入れ換え処理 */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* 入れ換えが発生した場合は、フラグをONにします。 */
				sort_flag = 1;
			}
		}
	}

	printf("*** ソート後 ***\n");

	for (i = 0; i < input_count; i++) {

		printf("%4d", array[i]);
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

/*
【メモ】
バブルソートの理解には、
焦らずゆっくりと時間をかけてトレースすると良い。
*/