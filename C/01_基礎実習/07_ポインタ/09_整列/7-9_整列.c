/*
【プログラム概要】
要素数5個の整数型配列に、
5個の整数を入力し、
昇順にソートする。
入力関数、ソート関数、出力関数の3つの関数を作成する。
*/

/*【プログラム】*/
#include <stdio.h>

#define ELEMENT 5 /* 要素数 */

void Input(int *);  /* 入力関数 */
void Sort(int *);   /* ソート関数 */
void Output(int *); /* 出力関数 */

int main(void) 
{
	int data[ELEMENT]; /* 配列の宣言 */

	Input(data);  /* 入力処理 */

	printf("*** ソート前 ***\n");

	Output(data); /* 出力処理 */

	Sort(data);   /* ソート処理 */

	printf("*** ソート後 ***\n");

	Output(data); /* 出力処理 */

	return 0;
}

void Input(int *p_data)
{
	int i; /* カウンタ変数 */

	for (i = 0; i < ELEMENT; i++) { /* 入力ループ */

		printf("整数 ==> ");
		scanf("%d", (p_data + i)); /* 入力 */
	}

	return;
}

void Sort(int *p_data)
{
	int i, j; /* カウンタ変数 */

	int tmp; /* 一時的にデータを保管する変数 */

	for (i = 0; i < ELEMENT - 1; i++) { /* ソート処理ループ */
		for (j = i + 1; j < ELEMENT; j++) {

			if (*(p_data + i) > *(p_data + j)) { /* 比較 */

				tmp = *(p_data + j); /* データ交換 */
				*(p_data + j) = *(p_data + i);
				*(p_data + i) = tmp;
			}
		}
	}

	return;
}

void Output(int *p_data) 
{
	int i; /* カウンタ変数 */

	for (i = 0; i < ELEMENT; i++) { /* 比較ループ */

		printf("%5d", *(p_data + i)); /* 出力 */
	}

	printf("\n");

	return;
}

/*
【実行結果1】
整数 ==> 65
整数 ==> 20
整数 ==> 88
整数 ==> 17
整数 ==> 41
*** ソート前 ***
65   20   88   17   41
*** ソート後 ***
17   20   41   65   88

【実行結果2】
整数 ==> 50
整数 ==> 40
整数 ==> 30
整数 ==> 20
整数 ==> 10
*** ソート前 ***
50   40   30   20   10
*** ソート後 ***
10   20   30   40   50
*/