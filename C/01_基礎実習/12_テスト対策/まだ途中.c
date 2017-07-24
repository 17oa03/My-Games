/*
【プログラム概要】
「9-5_売上一覧表」を
今までに学んだ知識を駆使して記述する。
*/

/*【プログラム】*/
#include <stdio.h>
#include <stdlib.h>

/* マクロ定数 */
#define ITEMS 5 /* 商品数 */

/* 疑似命令 */
#ifndef TRUE   /* もし TRUE が定義されていなかったら */
#define TRUE 1 /* TRUE を 1 と定義する */
#endif         /* #endif は処理ブロックの最後を示す */

#ifndef FALSE   /* もし FALSE が定義されていなかったら */
#define FALSE 0 /* FALSE を 0 と定義する */
#endif          /* #endif は処理ブロックの最後を示す */

/* 構造体の宣言 */
typedef struct product {
	int  code;       /* 商品コード */
	char name[11];   /* 商品名 */
	int  unit_price; /* 単価 */
	int  quantity;   /* 数量 */
	int  price;      /* 金額 */
}Product; /* 構造体の定義 */

/* 商品マスタの読込み */
void prodact_in(Product *);

/* 商品の探索 */
int product_search(Product *);

/* 売上一覧表の出力 */
void prodact_out(Product *);

/* ----------------------------------------------------------------- */
int main(void)
{
	/* 構造体配列の定義と初期化 */
	Product data;

	/* 商品コード一致フラグ */
	int match_flag = FALSE;

	/* 商品マスタの初期化 */
	prodact_in(&data);

	/* 商品の探索 */
	while ((match_flag = product_search(&data)) != EOF){

	/* 売上一覧表の出力 */
	if (match_flag) { prodact_out(&data); }

	}

	return 0;
}

/* ----------------------------------------------------------------- */
void prodact_in(Product *p_data) 
{
	/* 構造体のポインタ変数 */
	Product *tmp;

	/* ストリームポインタ宣言 */
	FILE *fp1, *fp2;

	/* ファイル名を格納する変数 */
	char fname1[FILENAME_MAX]; /* "syohin.mst" */
	char fname2[FILENAME_MAX]; /* "uriage.dat" */

	/* カウンタ変数 */
	int i, j;

	/* ファイル行数 */
	int count;

	/* ファイル名の入力 */
	printf("商品マスタ ==> ");
	scanf("%s", fname1);

	/* 商品マスタのエラーチェック */
	if ((fp1 = fopen(fname1, "r")) == NULL) {

		printf("入力ファイル(%s)が、みつかりません。\n", fname1);

		/* プログラム異常終了(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	/* ファイル名の入力 */
	printf("売上データ ==> ");
	scanf("%s", fname2);

	/* 売上データのエラーチェック */
	if ((fp2 = fopen(fname2, "r")) == NULL) {

		printf("入力ファイル(%s)が、みつかりません。\n", fname2);

		/* プログラム異常終了(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	/* "syohin.mst" 読込み */
	for (i = 0;
		(fscanf(fp1, "%d %s %d",
			&(p_data + i)->code,
			 (p_data + i)->name,
			&(p_data + i)->unit_price))
		!= EOF;
		i++);

	count = i;

	/* 昇順ソート */
	for (i = 0; i < count - 1; i++) {
		for (j = i + i; j < count; j++) {

			/* 左辺より右辺の値が大きい場合 */
			if ((p_data + i)->code > (p_data + i)->code) {

				/* 商品コードの交換 */
				tmp->code          = (p_data + i)->code;
				(p_data + i)->code = (p_data + j)->code;
				(p_data + j)->code = tmp->code;

				/* 商品名の交換 */
				strcpy(tmp->name, (p_data + i)->name);
				strcpy((p_data + i)->name, (p_data + j)->name);
				strcpy((p_data + j)->name, tmp->name);

				/* 単価の交換 */
				tmp->unit_price = (p_data + i)->unit_price;
				(p_data + i)->unit_price = (p_data + j)->unit_price;
				(p_data + j)->unit_price = tmp->unit_price;
			}
		}
	}

	return;
}

/* ----------------------------------------------------------------- */
int product_search(Product *p_data1) 
{
	/* 構造体のポインタ変数 */
	Product *p_data2;

	/* ストリームポインタ宣言 */
	FILE *fp;

	/* 商品コード(ファイル入力) */
	int code;

	/* 数量(ファイル入力) */
	int	quantity;

	/* 商品コード一致フラグ */
	int match_flag = FALSE;

	/* ファイル読込み */
	fscanf(fp, "%d %d", &code, &quantity);
	
	/* 商品の探索 */
	for (p_data2 = p_data1;
		 p_data2 < p_data1 + ITEMS && code != p_data2->code;
		 p_data2++) {

		/* 商品コードが一致している場合 */
		if (p_data2 < p_data1 + ITEMS) {

			/* 商品コード一致フラグをON */
			match_flag = TRUE;
		}
	}

	if (fp == EOF) { match_flag = EOF; }

	return match_flag;
}

void prodact_in(Product *p_data)
{



/* 総合計 */
int total_price = 0;

/* 終了フラグ */
int end_flag = 0;

/* 表題 */
printf("       *** 売上一覧表 ***\n");
printf("コード 商  品  名 単価 数量  金額\n");
printf("------ ---------- ---- ---- -----\n");

/* リダイレクション入力でEOFまで処理を繰り返す */
while ((end_flag =
	scanf("%d %d", &code, &quantity)) != EOF) {

	/* 商品コードが一致するまで繰り返す */
	for (p_data = data;
		p_data < data + ITEM && code != p_data->code;
		p_data++);

	/* 商品コードが一致した際の処理と出力 */
	if (p_data < data + ITEM) {

		/* 数量の代入 */
		p_data->quantity = quantity;

		/* 金額(単価 × 数量)の代入 */
		p_data->price = p_data->unit_price * p_data->quantity;

		/* 総合計の代入 */
		total_price += p_data->price;

		/* 出力 */
		printf("%6d %-10s %4d %4d %5d\n",
			p_data->code,
			p_data->name,
			p_data->unit_price,
			p_data->quantity,
			p_data->price);
	}
}

/* 合計金額の出力 */
printf("---------------------------------\n");
printf("                  合計金額 %6d\n", total_price);


}






/*
【実行結果】

*/

/*
【考察】

*/