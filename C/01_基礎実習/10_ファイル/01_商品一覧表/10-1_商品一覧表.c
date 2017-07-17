/*
【プログラム概要】
商品マスタを読み込み、
商品一覧表を出力する。
*/

/*【プログラム】*/
#include <stdio.h>
#include <stdlib.h> /* exit関数, EXIT_FAILURE, EXIT_SUCCESS */

/* 構造体の宣言 */
typedef struct prodact {
	int  no;
	char name[11];
	int  unit_price;
}Prodact;

int main(void)
{
	Prodact data;

	/* ファイルポインタ */
	FILE *fp_i;

	/* ファイル名 */
	char *fname = "syohin.mst";

	if ((fp_i = fopen("syohin.mst", "r")) == NULL){
		printf("商品マスタ(%s)が、みつかりません。\n", fname);

		/* プログラム異常終了(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	printf("\n  *** 商品一覧表 ***\n");
	printf("コード 商  品  名 単価\n");
	printf("------ ---------- ----\n");

	while ((fscanf(fp_i, "%d %s %d",
			&data.no,
			data.name,
			&data.unit_price))
			!= EOF){

		printf("%6d %-10s %4d\n",
			data.no,
			data.name,
			data.unit_price);
	}

	/* 入力ファイルをクローズ */
	fclose(fp_i);

	/* プログラム正常終了(EXIT_SUCCESS = 0) */
	return EXIT_SUCCESS;
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
ファイルのオープン、
読み込み、クローズと、
ファイルが存在しない場合の
エラー処理が出来るかの確認になる。

関数名や命令文が複雑になってきたが、
略語がどのように略されているのか把握すると、
理解がしやすい。

r        = Read(読み込む)
w        = Write(書き込む)
a        = Add(追加)
f(scanf) = File(ファイル)
(print)f = format(書式)
p        = Pointer(ポインタ)
(fp_)i   = Input(入力) 
(fp_)o   = Output(出力)
s        = string (文字列)
c        = Character(文字)

*/