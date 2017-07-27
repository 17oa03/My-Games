/*
【プログラム概要】
売上データをリダイレクション入力し、
該当する商品の商品名、
単価を検索して売上一覧表を
コマンドプロンプトとファイルに出力する。
*/

/*【プログラム】*/
#include <stdio.h>  /* コンソール入出力 */
#include <stdlib.h> /* データ変換処理関数 */

#define ITEMS 5 /* 商品数 */

typedef struct { /* 構造体の宣言 */
	int  code;       /* 商品コード */
	char name[11];   /* 商品名 */
	int  unit_price; /* 単価 */
	int  quantity;   /* 数量 */
}Product; /* 構造体の定義 */

int Search(Product *, int); /* 探索処理をする関数 */

int main(void)
{
	Product data[] = { /* 構造体配列の初期化 */
		{ 21, "鉛筆",      30 },
		{ 68, "ノート",   100 },
		{ 37, "定規",     150 },
		{ 40, "消しゴム",  50 },
		{ 85, "コンパス", 230 },
	};

	FILE *fp; /* ストリームポインタの宣言 */

	char *title = "       *** 売上一覧表 ***\nコード 商  品  名 単価 数量  金額\n------ ---------- ---- ---- -----\n";
	char *total = "---------------------------------\n                  合計金額";

	char *fname = "syohin.bak"; /* 出力ファイル名 */

	int price;           /* 金額(単価 × 数量) */
	int total_price = 0; /* 総合計金額 */

	int code;     /* 商品コード(リダイレクション入力) */
	int	quantity; /* 数量(リダイレクション入力) */

	int i; /* カウンタ変数 */

	int end_flag = 0; /* 終了フラグ */

	if ((fp = fopen(fname, "w")) == NULL) { /* ファイルオープン"w"(書込みモード)とエラー処理 */

		printf("ファイル(%s)のオープンに失敗しました。\n", fname);

		if (fclose(fp)) { /* ファイルクローズとエラー処理 */

			printf("ファイルクローズに失敗しました。\n");
		}
		
		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	printf("%s", title);      /* 表題の出力 */
	fprintf(fp, "%s", title); /* 表題のファイル書込み */

	while ((end_flag = scanf("%d %d", &code, &quantity)) != EOF) { /*「EOF」までファイル読込み */

		i = Search(data, code); /* 探索処理 */

		if (i < ITEMS) { /* カウンタ変数の値が商品数より小さい場合(商品コードが一致した場合) */

			data[i].quantity = quantity; /* 数量の代入 */

			price = data[i].unit_price * quantity; /* 金額(単価 × 数量)の代入 */

			total_price += price; /* 総合計の計算と代入 */

			printf("%6d %-10s %4d %4d %5d\n", /* 画面出力 */
				data[i].code,
				data[i].name,
				data[i].unit_price,
				data[i].quantity,
				price);

			fprintf(fp, "%6d %-10s %4d %4d %5d\n", /* ファイル出力 */
				data[i].code,
				data[i].name,
				data[i].unit_price,
				data[i].quantity,
				price);
		}
		else /* それ以外の場合(商品コードが一致しなかった場合) */
		{
			printf("商品コード(%d)は、存在しません。\n", code);
			fprintf(fp, "商品コード(%d)は、存在しません。\n", code);
		}
	}
	
	printf("%s %6d\n", total, total_price);      /* 総合計金額の出力 */
	fprintf(fp, "%s %6d\n", total, total_price); /* 総合計金額のファイル書込み */

	if (fclose(fp)) { /* ファイルクローズとエラー処理 */

		printf("ファイルクローズに失敗しました。\n");

		exit(EXIT_FAILURE); /* プログラム異常終了(EXIT_FAILURE = 1) */
	}

	return EXIT_SUCCESS; /* プログラム正常終了(EXIT_SUCCESS = 0) */
}

int Search(Product *p_data, int code)
{
	int i; /* カウンタ変数 */

	for (i = 0; i < ITEMS && code != (p_data + i)->code; i++); /* 探索処理 */
	
	return i; /* カウンタ変数の値を返す */
}

/*
【実行結果】
C:\Users\uesr>test < uriage.dat
*** 売上一覧表 ***
コード 商  品  名 単価 数量  金額
------ ---------- ---- ---- -----
    68 ノート      100   30  3000
商品コード(77)は、存在しません。
    85 コンパス    230   11  2530
    21 鉛筆         30  120  3600
商品コード(66)は、存在しません。
    40 消しゴム     50   22  1100
    37 定規        150   18  2700
商品コード(22)は、存在しません。
---------------------------------
                  合計金額  12930

【uriage.dat】
68  30
77  62
85  11
21 120
66  20
40  22
37  18
22  92

【syohin.bak】
コード 商  品  名 単価 数量  金額
------ ---------- ---- ---- -----
    68 ノート      100   30  3000
商品コード(77)は、存在しません。
    85 コンパス    230   11  2530
    21 鉛筆         30  120  3600
商品コード(66)は、存在しません。
    40 消しゴム     50   22  1100
    37 定規        150   18  2700
商品コード(22)は、存在しません。
---------------------------------
合計金額  12930
*/

/*
【情報】
構造体の宣言と定義が必要、
入力はリダイレクション、
出力はコマンドプロンプトとファイルに出力、
商品コード不一致のエラー処理が必要。

また、
探索処理を関数にする可能性がある。
*/