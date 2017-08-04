/*
【プログラム概要】
商品コード、商品名、単価を入力し、
商品マスタに追加出力する。
1回の実行で1レコードのみ出力する。
*/

/*【プログラム】*/
#include <stdio.h>
#include <stdlib.h> /* データ変換処理関数 */

/* 構造体の宣言 */
typedef struct prodact {
	int  no;         /* 商品コード */
	char name[11];   /* 商品名 */
	int  unit_price; /* 単価 */
}Prodact; /* 構造体の定義 */

int main(void)
{
	Prodact data; /* Prodact型変数の定義 */

	FILE *fp_in; /* ストリームポインタ宣言 */

	char *fname = "syohin.mst"; /* ファイル名 */
	
	printf("商品マスタに1レコード追加します。\n");

	printf("商品コード ==> ");
	scanf("%d", &data.no); /* 入力 */

	printf("    商品名 ==> ");
	scanf("%s", data.name); /* 入力 */

	printf("      単価 ==> ");
	scanf("%d", &data.unit_price); /* 入力 */

	if ((fp_in = fopen("syohin.mst", "a")) == NULL) { /* ファイルオープン(a)とエラー処理 */

		printf("入力ファイル(%s)が、存在しません。\n", fname);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	fprintf(fp_in, "%d %-10s %4d\n", /* ファイル追加書込み */
		data.no,
		data.name,
		data.unit_price);

	printf("商品マスタに1レコード追加しました。\n");

	fclose(fp_in); /* ファイルクローズ */

	return EXIT_SUCCESS; /* プログラム正常終了(EXIT_SUCCESS = 0) */
}

/*
【実行結果1】
商品マスタに1レコード追加します。
商品コード ==> 74
商品名 ==> 分度器
単価 ==> 370
商品マスタに1レコード追加しました。
【実行結果2】
商品マスタに1レコード追加します。
商品コード ==> 85
商品名 ==> コンパス
単価 ==> 230
商品マスタに1レコード追加しました。
*/

/*
【考察】
fopen関数のモードを追加書込み("a")で使用、
fprintf関数で入力されたデータを
「syohin.mst」にファイル書込みしている。

「syohin.mst」が存在しない場合、
「syohin.mst」が新規作成される。
*/