/*
【プログラム概要】
初期化済の2次元配列の行と列を変換し、
別の2次元配列で出力。

※変換前と変換後の要素を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

#define ROW 3 /* 変換前の行(縦,y)の要素数です。 */
#define COLUMN 5 /* 変換前の列(横,x)の要素数です。 */

int main(void)
{
	int array1[ROW][COLUMN] = {
		{  1,  2,  3,  4,  5 },
		{  6,  7,  8,  9, 10 },
		{ 11, 12, 13, 14, 15 },
	};

	int array2[COLUMN][ROW];
	int i, j;

	printf("*** 変換前 array1[%d][%d] ***\n", ROW, COLUMN); /* マクロ定数もprintf関数で出力できる。 */

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COLUMN; j++) { /*[0][0]→[0][1]→[0][2]と繰り返し、2次元配列の要素を全て参照できる。 */

			printf("%3d", array1[i][j]);
			array2[j][i] = array1[i][j]; /* 2次元配列の添字を指定しているカウンタ変数を入れ換える。 */
		}

		printf("\n");
	}

	printf("\n");
	printf("*** 変換後 array2[%d][%d] ***\n", COLUMN, ROW);

	for (i = 0; i < COLUMN; i++) {
		for (j = 0; j < ROW; j++) {

			printf("%3d", array2[i][j]);
		}

		printf("\n");
	}

	return 0;
}

/*
【実行結果】
*** 変換前 array1[3][5] ***
1  2  3  4  5
6  7  8  9 10
11 12 13 14 15

*** 変換後 array2[5][3] ***
1  6 11
2  7 12
3  8 13
4  9 14
5 10 15
*/

/*
【不具合履歴】
int array2[ROW][COLUMN]と書いていた為、
配列の許される添字範囲を超えて代入していた、
上記の場合、下記のデバッグエラーが発生した。

Run-Time Check Failure #2 - Stack around the variable 'array1' was corrupted.

int array2[COLUMN][ROW]と書き直し、
不具合を修正した。
*/