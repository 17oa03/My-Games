/*
【プログラム概要】
商品コードを入力し、
該当する商品の商品名、
単価を検索して出力する。
繰り返し検索可能で、
商品コードに99が入力されたら終了する。
*/

/*【プログラム】*/
#include <stdio.h>
#include <stdlib.h>  /* exit関数, EXIT_FAILURE, EXIT_SUCCESS */
#include <windows.h> /* Sleep関数 */

/* 構造体の宣言 */
typedef struct prodact {
	int  no;
	char name[11];
	int  unit_price;
}Prodact; /* 構造体の定義 */

int main(void)
{
	/* Prodact型変数の定義 */
	Prodact data;

	/* ストリームポインタ宣言 */
	FILE *fp;

	/* ファイル名 */
	char *fname = "syohin.mst";

	/* 入力コード */
	int code = 0;

	/* 商品コード一致フラグ */
	int match_flag = FALSE; /* FALSE = OFF, TRUE = ON */

	/* 読込みモードでファイルオープン */
	if ((fp = fopen("syohin.mst", "r")) == NULL) {

		printf("商品マスタ(%s)が、みつかりません。\n", fname);

		/* 5000ms(5秒)待機 */
		Sleep(5000);

		/* プログラム異常終了(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	while (code != 99) {

		/* 入力 */
		printf("商品コード ==> ");
		scanf("%d", &code);

		if (code != 99) {

			/* 読込みモードでファイルオープン */
			fp = fopen("syohin.mst", "r");

			/* ファイル読込み */
			while ((fscanf(fp, "%d %s %d",
						&data.no,
						data.name,
						&data.unit_price))
					!= EOF && 
					match_flag == FALSE){

				/* 商品コード一致判定 */
				if (code == data.no) {

					/* 出力 */
					printf("商品名 : %s\n", data.name);
					printf("単  価 : %d\n", data.unit_price);

					/* フラグ ON */
					match_flag = TRUE;
				}
			}

			/* 商品コード不一致判定 */
			if (match_flag == FALSE) {

				/* 出力 */
				printf("該当する商品はありません。\n");

				/* フラグ OFF */
				match_flag = FALSE;
			}
		}

		/* フラグ OFF */
		match_flag = FALSE;
	}

	/* 入力ファイルをクローズ */
	fclose(fp);

	/* プログラム正常終了(EXIT_SUCCESS = 0) */
	return EXIT_SUCCESS;
}

/*
【実行結果1】
商品コード ==> 85
商品名 : コンパス
単  価 : 230
商品コード ==> 43
該当する商品はありません。
商品コード ==> 21
商品名 : ノート
単  価 : 100
商品コード ==> 99
【実行結果2】
商品コード ==> 99
*/

/*
【考察】
58行目を削除すると、
fscanf関数でファイル読込み後、
同じ商品コードを入力すると、
該当する商品がないという結果が出た。

つまり、ファイルオープンをせずに
再度ファイル読込みを行うと、
データが正しく読込まれないようです。