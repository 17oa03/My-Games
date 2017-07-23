/*
【プログラム概要】
売上データより、
売上一覧表を出力する。
*/

/*【プログラム】*/
#include <stdio.h>
#include <stdlib.h>  /* exit関数, EXIT_FAILURE, EXIT_SUCCESS */
#include <windows.h> /* Sleep関数 */

/* 売上データの件数 */
#define ITEMS 12

#ifndef TRUE   /* TRUE が定義されていなかったら */
#define TRUE 1 /* TRUE を 1 と定義する */
#endif         /* 疑似命令の終了 */

#ifndef FALSE   /* FALSE が定義されていなかったら */
#define FALSE 0 /* FALSE を 0 と定義する */
#endif          /* 疑似命令の終了 */

/* 構造体の宣言 */
typedef struct prodact {
	int  check;       /* 伝票 */
	int  code;        /* 商品コード */
	char name[11];    /* 商品名 */
	int  unit_price;  /* 単価 */
	int  quantity;    /* 数量 */
	int  price;       /* 金額(単価 × 数量) */
}Prodact; /* 構造体の定義 */

int main(void)
{
	/* Prodact型配列の定義 */
	Prodact data[ITEMS];

	/* ストリームポインタ宣言 */
	FILE *fp;

	/* ファイル名 */
	char *fname = "uriage.dat";

	/* 商品計と総合計 */
	int sub_price = 0;
	int total_price = 0;

	/* 商品計フラグ */
	int sub_price_flag = FALSE; /* FALSE = OFF, TRUE = ON */

	/* カウンタ変数 */
	int i, j;

	/* 読込みモードでファイルオープン */
	if ((fp = fopen("uriage.dat", "r")) == NULL) {

		printf("商品マスタ(%s)が、みつかりません。\n", fname);

		/* 5000ms(5秒)待機 */
		Sleep(5000);

		/* プログラム異常終了(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	/* ファイル読込み */
	for (i = 0;
		(fscanf(fp, "%d %d %s %d %d",
			&data[i].check,
			&data[i].code,
			data[i].name,
			&data[i].unit_price,
			&data[i].quantity))
		!= EOF;
		i++) {

		/* 金額の計算 */
		data[i].price = data[i].unit_price * data[i].quantity;
	}

	printf("          *** 売上一覧表 ***\n");
	printf("伝票 コード 商  品  名 単価 数量   金額\n");
	printf("---- ------ ---------- ---- ---- ------\n");

	/* 出力ループ */
	for (j = 0; j < i; j++) {

		/* 次レコードが同じ商品コードか判定 */
		if (data[j].code != data[j + 1].code) {

			/* 商品計フラグ ON */
			sub_price_flag = TRUE;
		}

		/* 出力 */
		printf("%4d %6d %-10s %4d %4d %6d\n",
			data[j].check,
			data[j].code,
			data[j].name,
			data[j].unit_price,
			data[j].quantity,
			data[j].price);

		/* 商品計の計算 */
		sub_price += data[j].price;

		/* 総合計の計算 */
		total_price += data[j].price;

		/* 商品計の出力判定 */
		if (sub_price_flag == TRUE) {

			printf("                  *** 商品計 *** %6d\n", sub_price);

			/* 商品計のリセット */
			sub_price = 0;

			/* 商品計フラグ OFF */
			sub_price_flag = FALSE;
		}
	}

	printf("                  *** 総合計 *** %6d\n", total_price);

	/* 入力ファイルをクローズ */
	fclose(fp);

	/* 10000ms(10秒)待機 */
	Sleep(10000);

	/* プログラム正常終了(EXIT_SUCCESS = 0) */
	return EXIT_SUCCESS;
}

/*
【実行結果1】
*** 売上一覧表 ***
伝票 コード 商  品  名 単価 数量   金額
---- ------ ---------- ---- ---- ------
1001     16 鉛筆         30   50   1500
1002     16 鉛筆         30  120   3600
1003     16 鉛筆         30    6    180
*** 商品計 ***   5280
1004     21 ノート      100   15   1500
1005     21 ノート      100   66   6600
1006     21 ノート      100  108  10800
1007     21 ノート      100    3    300
*** 商品計 ***  19200
1008     37 定規        150   20   3000
1009     37 定規        150  200  30000
*** 商品計 ***  33000
1010     40 消しゴム     50   30   1500
1011     40 消しゴム     50  150   7500
1012     40 消しゴム     50    8    400
                  *** 商品計 ***   9400
                  *** 総合計 ***  66880
*/

/*
【考察】
「9-5_売上一覧表」の応用、
判定とフラグの使い方が重要になる。

fscanf関数で構造体配列にファイルを読込む際に、
アドレス演算子と、
カウンタ変数を使った添字の指定を
忘れないように注意、
不定値が出力された場合、
添字の指定間違いの可能性がある。
*/