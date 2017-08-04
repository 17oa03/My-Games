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
#include <stdlib.h> /* データ変換処理関数 */

#ifndef TRUE   /* TRUE が定義されていなかったら */
#define TRUE 1 /* TRUE を 1 と定義する */
#endif         /* 疑似命令の終了 */

#ifndef FALSE   /* FALSE が定義されていなかったら */
#define FALSE 0 /* FALSE を 0 と定義する */
#endif          /* 疑似命令の終了 */

typedef struct prodact { /* 構造体の宣言 */
	int  no;         /* 商品コード */
	char name[11];   /* 商品名 */
	int  unit_price; /* 単価 */
}Prodact; /* 構造体の定義 */

int main(void)
{
	Prodact data; /* Prodact型変数の定義 */

	FILE *fp; /* ストリームポインタ宣言 */

	char *fname = "syohin.mst"; /* ファイル名 */

	int code = 0; /* 入力コード */

	int match_flag = FALSE; /* 一致フラグ(FALSE = OFF, TRUE = ON) */

	if ((fp = fopen("syohin.mst", "r")) == NULL) { /* ファイルオープン(r)とエラー処理 */

		printf("商品マスタ(%s)が、みつかりません。\n", fname);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	while (code != 99) {

		printf("商品コード ==> ");
		scanf("%d", &code); /* 入力 */

		if (code != 99) {

			fseek(fp, 0, SEEK_SET); /* ファイルポインタの位置を先頭に戻す */

			while ((fscanf(fp, "%d %s %d", /* ファイル読込み */
						&data.no,
						data.name,
						&data.unit_price))
						!= EOF &&
					match_flag == FALSE) {

				if (code == data.no) { /* 商品コードが一致した場合 */

					printf("商品名 : %s\n", data.name);
					printf("単  価 : %d\n", data.unit_price);

					match_flag = TRUE; /* フラグON */
				}
			}

			if (match_flag == FALSE) { /* 商品コードが一致していない場合 */

				printf("該当する商品はありません。\n");

				match_flag = FALSE; /* フラグOFF */
			}
		}

		match_flag = FALSE; /* フラグOFF */
	}

	fclose(fp); /* ファイルクローズ */

	return EXIT_SUCCESS; /* プログラム正常終了(EXIT_SUCCESS = 0) */
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
商品コードの一致判定ループ毎に、
ファイルポインタの位置を先頭に戻さないと、
一致した商品コード以前の商品コードに該当しなくなってしまう。

また、C言語では、
標準でブール値(FALSE, TRUE)は、
マクロ定数として定義されていないので、
疑似命令によってマクロ定義している。
*/