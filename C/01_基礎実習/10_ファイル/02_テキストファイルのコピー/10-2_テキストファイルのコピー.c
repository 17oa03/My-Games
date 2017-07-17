/*
【プログラム概要】
入出力ファイル名を入力し、
入力ファイルのデータを
出力ファイルにコピーする。
コピー後にコピーしたレコード数を出力する。
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
	FILE *fp_in, *fp_out;

	/* ファイル名 */
	char fname_in[FILENAME_MAX];
	char fname_out[FILENAME_MAX];
	
	/* カウンタ変数 */
	int count = 0;

	printf("入力ファイル名 ==> ");
	scanf("%s", fname_in);

	/* 読込みモードでファイルオープン */
	if ((fp_in = fopen(fname_in, "r")) == NULL) {

		printf("入力ファイル(%s)が、存在しません。\n", fname_in);

		/* 5000ms(5秒)待機 */
		Sleep(5000);

		/* プログラム異常終了(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	printf("出力ファイル名 ==> ");
	scanf("%s", fname_out);

	/* 書込みモードでファイルオープン */
	if ((fp_out = fopen(fname_out, "w")) == NULL){

		printf("出力ファイル(%s)は、作成できません。\n", fname_out);

		/* 入力ファイルをクローズ */
		fclose(fp_in);

		/* 5000ms(5秒)待機 */
		Sleep(5000);

		/* プログラム異常終了(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	printf("\n***ファイルコピー開始***\n");

	/* ファイル読込み */
	while ((fscanf(fp_in, "%d %s %d",
			&data.no,
			 data.name,
			&data.unit_price))
			!= EOF){

		/* ファイル書込み */
		fprintf(fp_out, "%d %-10s %4d\n",
			data.no,
			data.name,
			data.unit_price);

		count++;
	}

	printf("%d レコードをコピーしました。\n", count);
	printf("***ファイルコピー終了***\n");

	/* 入力ファイルをクローズ */
	fclose(fp_in);

	/* 出力ファイルをクローズ */
	fclose(fp_out);

	/* 5000ms(5秒)待機 */
	Sleep(5000);

	/* プログラム正常終了(EXIT_SUCCESS = 0) */
	return EXIT_SUCCESS;
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

Sleep関数に関しては、
実行ファイルを開いた際に、
実行結果を確認する為に使っている。

60行目で入力ファイルをクローズ、
これは出力ファイルだけクローズされて、
入力ファイルのメモリの解放がされないのを
防ぐ為になる。
*/