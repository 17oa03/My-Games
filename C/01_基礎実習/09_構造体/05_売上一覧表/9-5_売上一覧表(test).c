/*
【プログラム概要】
売上データをリダイレクション入力し、
該当する商品の商品名、
単価を検索して売上一覧表を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

/* 商品の数 */
#define ITEM 5

/* 構造体の宣言 */
struct product {
	int  code;       /* 商品コード */
	char name[11];   /* 商品名 */
	int  unit_price; /* 単価 */
	int  quantity;   /* 数量 */
	int  price;      /* 金額(単価 × 数量) */
};

int main(void)
{
	/* 構造体配列の定義と初期化 */
	struct product data[] = {
		{ 21, "鉛筆",      30 },
		{ 68, "ノート",   100 },
		{ 37, "定規",     150 },
		{ 40, "消しゴム",  50 },
		{ 85, "コンパス", 230 },
	};

	/* 構造体のポインタ変数の宣言 */
	struct product *p_data;

	/* 商品コード(リダイレクション入力) */
	int code;

	/* 数量(リダイレクション入力) */
	int	quantity;

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

	return 0;
}

/*
【実行結果】
*** 売上一覧表 ***
コード 商  品  名 単価 数量  金額
------ ---------- ---- ---- -----
    68 ノート      100   30  3000
    85 コンパス    230   11  2530
    21 鉛筆         30  120  3600
    40 消しゴム     50   22  1100
    37 定規        150   18  2700
---------------------------------
                  合計金額  12930
*/

/*
【考察】
while文の条件文に
リダイレクションの記述ができる、
後は「9-4_商品検索(test)」と
同じような処理になる。
*/