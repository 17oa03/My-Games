/*
【プログラム概要】
商品マスタを読み込み、
商品一覧表を出力する。
*/

/*【プログラム】*/
#include <stdio.h>
#include <stdlib.h> /* データ変換処理関数 */

typedef struct prodact { /* 構造体の宣言 */
	int  no;         /* 商品コード */
	char name[11];   /* 商品名 */
	int  unit_price; /* 単価 */
}Prodact; /* 構造体の定義 */

int main(void)
{
	Prodact data; /* Prodact型変数の定義 */

	FILE *fp_i; /* ストリームポインタ宣言 */

	char *fname = "syohin.mst"; /* ファイル名 */

	if ((fp_i = fopen("syohin.mst", "r")) == NULL){ /* ファイルオープン(r)とエラー処理 */

		printf("商品マスタ(%s)が、みつかりません。\n", fname);

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	printf("\n  *** 商品一覧表 ***\n");
	printf("コード 商  品  名 単価\n");
	printf("------ ---------- ----\n");

	while ((fscanf(fp_i, "%d %s %d", /* ファイル読込み */
			&data.no,
			 data.name,
			&data.unit_price))
			!= EOF){

		printf("%6d %-10s %4d\n",
			data.no,
			data.name,
			data.unit_price);
	}

	fclose(fp_i); /* ファイルクローズ */

	return EXIT_SUCCESS; /* プログラム正常終了(EXIT_SUCCESS = 0) */
}

/*
【実行結果】

*** 商品一覧表 ***
コード 商  品  名 単価
------ ---------- ----
    16 鉛筆         30
    21 ノート      100
    37 定規        150
    40 消しゴム     50
    63 ボールペン   80
*/

/*
【考察】
ファイルのオープン、読み込み、クローズと、
エラー処理が出来るかといった内容になる。。

関数名や命令文が複雑になってきたが、
略語がどのように略されているのか把握すると、
理解がしやすい。

r        = read(読み込む)
w        = write(書き込む)
a        = append(付加する)
f(scanf) = file(ファイル)
(print)f = format(書式)
p        = pointer(ポインタ)
(fp_)i   = input(入力) 
(fp_)o   = output(出力)
s        = string (文字列)
c        = character(文字)

*/