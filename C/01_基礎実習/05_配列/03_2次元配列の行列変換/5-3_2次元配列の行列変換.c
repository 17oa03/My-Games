/*
【プログラム概要】
初期化済の2次元配列の行と列を変換し、
別の2次元配列で出力。

※変換前と変換後の要素を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define ROW 3    /* 行の要素数 */
#define COLUMN 5 /* 列の要素数 */

int main(void)
{
	int array1[ROW][COLUMN] = { /* 2次元配列の初期化 */
		{  1,  2,  3,  4,  5 },
		{  6,  7,  8,  9, 10 },
		{ 11, 12, 13, 14, 15 },
	};

	int array2[COLUMN][ROW]; /* 配列「array1」と逆の要素数をもつ2次元配列 */

	int i, j; /* カウンタ変数 */

	printf("*** 変換前 array1[%d][%d] ***\n", ROW, COLUMN); /* マクロ定数をprintf関数で出力 */

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COLUMN; j++) { /* [0][0]→[0][1]→[0][2]とループ、2次元配列の要素を全て参照できる */

			printf("%3d", array1[i][j]); /* 行列変換前の出力 */

			array2[j][i] = array1[i][j]; /* 行列変換処理 */
		}

		printf("\n");
	}

	printf("\n");
	printf("*** 変換後 array2[%d][%d] ***\n", COLUMN, ROW);

	for (i = 0; i < COLUMN; i++) {
		for (j = 0; j < ROW; j++) {

			printf("%3d", array2[i][j]); /* 行列変換後の出力 */
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