/*
【プログラム概要】
商品マスタ1と商品マスタ2を入力し、
マージ処理により商品マスタ3を出力する。
また、処理レコード数を標準出力へ出力する。
*/

/*【プログラム】*/
#include <stdio.h>
#include <stdlib.h>

#define ITEMS_1 4 /* 商品マスタ1の件数 */
#define ITEMS_2 3 /* 商品マスタ2の件数 */

typedef struct prodact { /* 構造体の宣言 */
	int  code;       /* 商品コード */
	char name[11];   /* 商品名 */
	int  unit_price; /* 単価 */
}Prodact; /* 構造体の定義 */

int main(void)
{
	Prodact data_1[ITEMS_1]; /* Prodact型配列の定義 */
	Prodact data_2[ITEMS_2];

	FILE *fp1, *fp2, *fp3; /* ストリームポインタ宣言 */

	char *fname1 = "syohin1.mst"; /* ファイル名 */
	char *fname2 = "syohin2.mst";
	char *fname3 = "syohin3.mst";

	int i = 0, j = 0; /* カウンタ変数 */

	if ((fp1 = fopen(fname1, "r")) == NULL) { /* ファイルオープン(r)とエラー処理 */

		printf("ファイルオープン(%s)に失敗しました。\n", fname1);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	if ((fp2 = fopen(fname2, "r")) == NULL) { /* ファイルオープン(r)とエラー処理 */

		printf("ファイルオープン(%s)に失敗しました。\n", fname2);

		if (fclose(fp1)) { /* 商品マスタ1のファイルクローズ */

			printf("ファイルクローズ(%s)に失敗しました。\n", fname1);
		}

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	if ((fp3 = fopen(fname3, "a")) == NULL) { /* ファイルオープン(a)とエラー処理 */

		printf("ファイルオープン(%s)に失敗しました。\n", fname3);

		if (fclose(fp1)) { /* 商品マスタ1のファイルクローズ */

			printf("ファイルクローズ(%s)に失敗しました。\n", fname1);
		}

		if (fclose(fp2)) { /* 商品マスタ2のファイルクローズ */

			printf("ファイルクローズ(%s)に失敗しました。\n", fname2);
		}

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	while ((fscanf(fp1, "%d %s %d", /* 商品マスタ1の読込み */
		&data_1[i].code,
		 data_1[i].name,
		&data_1[i].unit_price))
		!= EOF) {

		i++;
	}

	while ((fscanf(fp2, "%d %s %d", /* 商品マスタ2の読込み */
		&data_2[j].code,
		 data_2[j].name,
		&data_2[j].unit_price))
		!= EOF) {

		j++;
	}

	printf("入力ファイル(商品マスタ1) : %3d レコード\n", i); /* 入力処理レコード数出力 */
	printf("入力ファイル(商品マスタ2) : %3d レコード\n", j);

	i = 0; /* マージ処理の為に初期化 */
	j = 0;

	while (i != ITEMS_1 && j != ITEMS_2) /* マージ処理ループ */
	{
		if (data_1[i].code < data_2[j].code) { /* 商品コードの大小比較 */

			fprintf(fp3, "%2d %-10s %3d\n", /* 商品マスタ1のデータを追加書込み */
				data_1[i].code,
				data_1[i].name,
				data_1[i].unit_price);

			i++; /* 次の商品へ */
		}
		else
		{

			fprintf(fp3, "%2d %-10s %3d\n", /* 商品マスタ2のデータを追加書込み */
				data_2[j].code,
				data_2[j].name,
				data_2[j].unit_price);

			j++; /* 次の商品へ */
		}
	}

	if (i != ITEMS_1) { /* 商品マスタ1のデータが、まだ全て書き込まれていない場合 */

		while (i < ITEMS_1) { /* 追加書込みループ */

			fprintf(fp3, "%2d %-10s %3d\n", /* 商品マスタ1のデータを追加書込み */
				data_1[i].code,
				data_1[i].name,
				data_1[i].unit_price);

			i++; /* 次の商品へ */
		}
	}

	if (j != ITEMS_2) { /* 商品マスタ2のデータが、まだ全て書き込まれていない場合 */

		while (j < ITEMS_2) { /* 追加書込みループ */

			fprintf(fp3, "%2d %-10s %3d\n", /* 商品マスタ2のデータを追加書込み */
				data_2[j].code,
				data_2[j].name,
				data_2[j].unit_price);

			j++; /* 次の商品へ */
		}
	}

	printf("出力ファイル(商品マスタ3) : %3d レコード\n", i + j); /* 出力処理レコード数出力 */

	if (fclose(fp1)) { /* 商品マスタ1のファイルクローズとエラー処理 */

		printf("ファイルクローズ(%s)に失敗しました。\n", fname1);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	if (fclose(fp2)) { /* 商品マスタ2のファイルクローズとエラー処理 */

		printf("ファイルクローズ(%s)に失敗しました。\n", fname2);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	if (fclose(fp3)) { /* 商品マスタ3のファイルクローズとエラー処理 */

		printf("ファイルクローズ(%s)に失敗しました。\n", fname3);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	return EXIT_SUCCESS; /* プログラム正常終了(EXIT_SUCCESS = 0) */
}

/*
【実行結果(syohin3.mst)】
16 鉛筆       30
21 ノート    100
37 定規      150
40 消しゴム   50
63 ボールペン 80
74 分度器    370
85 コンパス  230
*/

/*
【考察】
while文の継続条件の書き間違いに注意、
不具合が発生した場合は、
カウンタ変数のトレースを試すと良い。
*/