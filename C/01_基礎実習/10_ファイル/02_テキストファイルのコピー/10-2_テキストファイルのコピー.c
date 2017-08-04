/*
【プログラム概要】
入出力ファイル名を入力し、
入力ファイルのデータを
出力ファイルにコピーする。
コピー後にコピーしたレコード数を出力する。
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

	FILE *fp_in, *fp_out; /* ストリームポインタ宣言 */

	char fname_in[FILENAME_MAX]; /* ファイル名を格納する文字配列 */
	char fname_out[FILENAME_MAX];
	
	int count = 0; /* カウンタ変数 */

	printf("入力ファイル名 ==> ");
	scanf("%s", fname_in); /* 入力 */

	if ((fp_in = fopen(fname_in, "r")) == NULL) { /* 読込みモードでファイルオープン */

		printf("入力ファイル(%s)が、存在しません。\n", fname_in);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	printf("出力ファイル名 ==> ");
	scanf("%s", fname_out); /* 入力 */

	if ((fp_out = fopen(fname_out, "w")) == NULL){ /* 書込みモードでファイルオープン */

		printf("出力ファイル(%s)は、作成できません。\n", fname_out);

		fclose(fp_in); /* 入力ファイルをクローズ */

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	printf("\n***ファイルコピー開始***\n");

	while ((fscanf(fp_in, "%d %s %d", /* ファイル読込み */
			&data.no,
			 data.name,
			&data.unit_price))
			!= EOF){

		fprintf(fp_out, "%d %-10s %4d\n", /* ファイル書込み */
			data.no,
			data.name,
			data.unit_price);

		count++;
	}

	printf("%d レコードをコピーしました。\n", count);
	printf("***ファイルコピー終了***\n");

	fclose(fp_in); /* 入力ファイルのクローズ */
	fclose(fp_out); /* 出力ファイルのクローズ */

	return EXIT_SUCCESS; /* プログラム正常終了(EXIT_SUCCESS = 0) */
}

/*
【実行結果1】
入力ファイル名 ==> syohin.mst
出力ファイル名 ==> syohin.bak

***ファイルコピー開始***
5 レコードをコピーしました。
***ファイルコピー終了***
【実行結果2】
入力ファイル名 ==> uriage.mst
入力ファイル(uriage.mst)が、存在しません。
【実行結果3】
入力ファイル名 ==> syohin.mst
出力ファイル名 ==> /
出力ファイル(/)は、作成できません。
*/

/*
【考察】
fopen関数のモードを書込み("w")で使用、
fscanf関数でファイル終端(EOF)まで読込み、
fprintf関数でファイル出力している。
*/