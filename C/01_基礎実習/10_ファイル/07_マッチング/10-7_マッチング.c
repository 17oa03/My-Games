/*
【プログラム概要】
商品マスタ1と商品マスタ2を入力し、
マージ処理により商品マスタ3を出力する。
また、処理レコード数を標準出力へ出力する。
*/

/*【プログラム】*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ITEMS_1 7 /* 商品マスタ1の件数 */
#define ITEMS_2 5 /* 商品マスタ2の件数 */

typedef struct prodact { /* 構造体の宣言 */
	char division[5]; /* 区分 */
	int  code;        /* 商品コード */
	char name[11];    /* 商品名 */
	int  unit_price;  /* 単価 */
}Prodact; /* 構造体の定義 */

int main(void)
{
	Prodact data1[ITEMS_1]; /* Prodact型配列の定義 */
	Prodact data2[ITEMS_2];

	FILE *fp1, *fp2, *fp3; /* ストリームポインタ宣言 */

	char *fname1 = "syohin3.mst"; /* ファイル名 */
	char *fname2 = "henko.trn";
	char *fname3 = "syohin4.mst";

	int i = 0, j = 0; /* カウンタ変数 */

	int no_count = 0; /* 変更なしのカウンタ変数 */
	int ad_count = 0; /* 追加処理のカウンタ変数 */
	int up_count = 0; /* 変更処理のカウンタ変数 */
	int dl_count = 0; /* 削除処理のカウンタ変数 */

	if ((fp1 = fopen(fname1, "r")) == NULL) { /* ファイルオープン(r)とエラー処理 */

		printf("ファイルオープン(%s)に失敗しました。\n", fname1);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	if ((fp2 = fopen(fname2, "r")) == NULL) { /* ファイルオープン(r)とエラー処理 */

		printf("ファイルオープン(%s)に失敗しました。\n", fname2);

		if (fclose(fp1)) { /* 商品マスタ3のファイルクローズ */

			printf("ファイルクローズ(%s)に失敗しました。\n", fname1);
		}

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	if ((fp3 = fopen(fname3, "a")) == NULL) { /* ファイルオープン(a)とエラー処理 */

		printf("ファイルオープン(%s)に失敗しました。\n", fname3);

		if (fclose(fp1)) { /* 商品マスタ3のファイルクローズ */

			printf("ファイルクローズ(%s)に失敗しました。\n", fname1);
		}

		if (fclose(fp2)) { /* 変更ファイルのファイルクローズ */

			printf("ファイルクローズ(%s)に失敗しました。\n", fname2);
		}

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	while ((fscanf(fp1, "%d %s %d", /* 商品マスタ3の読込み */
		&data1[i].code,
		 data1[i].name,
		&data1[i].unit_price))
		!= EOF) {

		i++;
	}

	while ((fscanf(fp2, "%s %d %s %d", /* 変更ファイルの読込み */
		 data2[j].division,
		&data2[j].code,
		 data2[j].name,
		&data2[j].unit_price))
		!= EOF) {

		j++;
	}

	i = 0; /* マージ処理の為に初期化 */
	j = 0;

	while (i != ITEMS_1 && j != ITEMS_2) /* マージ処理ループ */
	{
		if (data1[i].code < data2[j].code) { /* 変更なし判定 */

			fprintf(fp3, "%2d %-10s %3d\n", /* 商品マスタ3のデータを追加書込み */
				data1[i].code,
				data1[i].name,
				data1[i].unit_price);

			i++; /* 次の商品へ */

			no_count++; /* 変更なしのカウント */
		}
		else if(data1[i].code == data2[j].code)
		{

			if (strcmp(data2[j].division, "UP") == 0) { /* 変更処理判定 */

				fprintf(fp3, "%2d %-10s %3d\n", /* 更新ファイルのデータを追加書込み */
					data2[j].code,
					data2[j].name,
					data2[j].unit_price);

				i++; /* 次の商品へ */
				j++;

				up_count++; /* 変更処理のカウント */
			}
			else /* 削除処理判定 */
			{

				i++; /* 次の商品へ */
				j++;

				dl_count++; /* 削除処理のカウント */
			}
		}
		else /* 追加処理判定 */
		{

			fprintf(fp3, "%2d %-10s %3d\n", /* 更新ファイルのデータを追加書込み */
				data2[j].code,
				data2[j].name,
				data2[j].unit_price);

			j++; /* 次の商品へ */

			ad_count++; /* 追加処理のカウント */
		}
	}

	printf("変更なし : %3d 件\n", no_count); /* 変更なし件数出力 */
	printf("追加処理 : %3d 件\n", ad_count); /* 追加処理件数出力 */
	printf("変更処理 : %3d 件\n", up_count); /* 変更処理件数出力 */
	printf("削除処理 : %3d 件\n", dl_count); /* 削除処理件数出力 */

	if (fclose(fp1)) { /* 商品マスタ3のファイルクローズとエラー処理 */

		printf("ファイルクローズ(%s)に失敗しました。\n", fname1);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	if (fclose(fp2)) { /* 変更ファイルのファイルクローズとエラー処理 */

		printf("ファイルクローズ(%s)に失敗しました。\n", fname2);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	if (fclose(fp3)) { /* 商品マスタ4のファイルクローズとエラー処理 */

		printf("ファイルクローズ(%s)に失敗しました。\n", fname3);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	return EXIT_SUCCESS; /* プログラム正常終了(EXIT_SUCCESS = 0) */
}

/*
【実行結果】
変更なし :   4 件
追加処理 :   2 件
変更処理 :   2 件
削除処理 :   1 件

【syohin4.mst】
16 鉛筆        30
20 下敷き     110
21 ノート     120
40 消しゴム    50
53 三角定規   300
63 ボールペン  80
74 分度器     370
85 コンパス   260
*/

/*
【考察】
「10-6_マージ.c」の応用になる、
変更処理の文字列の判定には、
strcmp関数を使うと簡単になる。
*/