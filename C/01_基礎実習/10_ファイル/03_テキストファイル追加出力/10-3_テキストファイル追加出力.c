/*
【プログラム概要】
商品コード、商品名、単価を入力し、
商品マスタに追加出力する。
1回の実行で1レコードのみ出力する。
*/

/*【プログラム】*/
#include <stdio.h>
#include <stdlib.h> /* exit関数, EXIT_FAILURE, EXIT_SUCCESS */
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
	FILE *fp_in;

	/* ファイル名 */
	char *fname = "syohin.mst";
	
	printf("商品マスタに1レコード追加します。\n");

	/* 入力 */
	printf("商品コード ==> ");
	scanf("%d", &data.no);

	printf("    商品名 ==> ");
	scanf("%s", data.name);

	printf("      単価 ==> ");
	scanf("%d", &data.unit_price);

	/* 読込みモードでファイルオープン */
	if ((fp_in = fopen("syohin.mst", "a")) == NULL) {

		printf("入力ファイル(%s)が、存在しません。\n", fname);

		/* 5000ms(5秒)待機 */
		Sleep(5000);

		/* プログラム異常終了(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	/* ファイル書込み */
	fprintf(fp_in, "%d %-10s %4d\n",
		data.no,
		data.name,
		data.unit_price);

	printf("商品マスタに1レコード追加しました。\n");

	/* メモリの解放 */
	fclose(fp_in);

	/* 5000ms(5秒)待機 */
	Sleep(5000);

	/* プログラム正常終了(EXIT_SUCCESS = 0) */
	return EXIT_SUCCESS;
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
カレントディレクトリに
「syohin.mst」が新規作成される。
*/