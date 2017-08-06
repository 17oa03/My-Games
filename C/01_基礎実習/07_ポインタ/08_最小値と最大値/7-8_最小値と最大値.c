/*
【プログラム概要】
整数を5個入力し配列に代入し、
その最大値と最小値を探し、出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define ELEMENT 5 /* 要素数 */

int Maximum(int *); /* 最大値探索関数 */
int Minimum(int *); /* 最小値探索関数 */

int main(void) 
{
	int data[ELEMENT]; /* 配列の宣言 */

	int max, min; /* 最大値と最小値の変数定義 */

	int i; /* カウンタ変数 */

	for (i = 0; i < ELEMENT; i++) { /* 入力ループ */

		printf("整数 ==> ");
		scanf("%d", &data[i]); /* 入力 */
	}

	max = Maximum(data); /* 最大値探索処理 */
	min = Minimum(data); /* 最小値探索処理 */

	printf("最大値 = %d\n", max); /* 最大値の出力 */
	printf("最小値 = %d\n", min); /* 最小値の出力 */

	return 0;
}

int Maximum(int *p_data)
{
	int i = 0; /* カウンタ変数 */
	
	int max = *(p_data + i); /* 配列の先頭データを代入 */

	for (i++; i < ELEMENT; i++) { /* 比較ループ */

		if (max < *(p_data + i)) { /* 最大値の場合 */

			max = *(p_data + i); /* 最大値の代入 */
		}
	}

	return max; /* 最大値を返す */
}

int Minimum(int *p_data) 
{
	int i = 0; /* カウンタ変数 */

	int min = *(p_data + i); /* 配列の先頭データを代入 */

	for (i++; i < ELEMENT; i++) { /* 比較ループ */

		if (min > *(p_data + i)) { /* 最小値の場合 */

			min = *(p_data + i); /* 最小値の代入 */
		}
	}

	return min; /* 最小値を返す */
}

/*
【実行結果1】
整数 ==> 5
整数 ==> -100
整数 ==> -70
整数 ==> 200
整数 ==> 60
最大値 = 200
最小値 = -100

【実行結果2】
整数 ==> -80
整数 ==> -3
整数 ==> 0
整数 ==> 230
整数 ==> 500
最大値 = 500
最小値 = -80

【実行結果3】
整数 ==> 70
整数 ==> 60
整数 ==> 50
整数 ==> 40
整数 ==> 30
最大値 = 70
最小値 = 30
*/