/*
※※※※※【まだ、デバッグが完了していません！】※※※※※
*/

/*【プログラム】*/
#include <stdio.h>

/* 構造体配列の要素数 */
#define ELEMENT 10

/* 構造体の宣言 */
struct record {
	int    no;	 /* 番号 */
	char   name[11]; /* 名前 */
	int    english;  /* 英語の点数 */
	int    math;     /* 数学の点数 */
	int    language; /* 国語の点数 */
	int    total;    /* 合計点 */
	double average;  /* 平均点 */
	int    rank;     /* 順位 */
};

int main(void)
{
	/* 構造体変数の定義 */
	struct record data[ELEMENT];

	/* カウンタ変数 */
	int i, j, k;

	/* データの読み込み終了フラグ */
	int end_flag = 0;

	/* 入力、合計、平均、順位の処理と読み込みのカウント */
	for (k = 0; end_flag != EOF; k++) {

		scanf("%d %s %d %d %d",
			&data[k].no, data[k].name, &data[k].english, &data[k].math, &data[k].language);

		data[k].total = data[k].english + data[k].math + data[k].language;
		data[k].average = (double) data[k].total / 3;
		data[k].rank = 1;
	}

	/* 順位を決める処理 */
	for (i = 0; i < k - 1; i++) {
		for (j = i + 1; j < k; j++) {

			if (data[i].total < data[j].total) {

				data[i].rank++;
			}
		}
	}

	/* 出力 */
	printf(" NO 氏    名   英語 数学 国語 合計  平均 順位\n");
	printf("--- ---------- ---- ---- ---- ---- ----- ----\n");

	for (i = 0; i < k; i++) {

		printf("%3d ", data[i].no);
		printf("%-11s", data[i].name);
		printf("%4d ", data[i].english);
		printf("%4d ", data[i].math);
		printf("%4d ", data[i].language);
		printf("%4d ", data[i].total);
		printf("%4.1lf ", data[i].average);
		printf("%4d", data[i].rank);
	}

	return 0;
}

/*
【実行結果】
*/

/*
【考察】
*/