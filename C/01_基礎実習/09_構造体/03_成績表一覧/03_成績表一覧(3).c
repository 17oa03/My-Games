/*
【プログラム概要】
成績データをリダイレクション入力し、
構造体配列に格納する。
全て格納後に成績一覧表を出力する。
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
	int i, j;

	/* データの読み込み終了フラグ */
	int end_flag = 0;

	/* リダイレクト回数のカウンタ変数 */
	int count;

	/* リダイレクション入力 */
	for (i = 0; 
		(end_flag = scanf("%d %s %d %d %d",
			&data[i].no, data[i].name,
			&data[i].english, &data[i].math,
			&data[i].language) != EOF);
		i++) {

		data[i].total = 
			data[i].english + data[i].math + data[i].language;

		data[i].average = 
			(double)data[i].total / 3;

		data[i].rank = 1;
	}

	count = i;

	/* 順位を決める処理 */
	for (i = 0; i < count - 1; i++) {
		for (j = 0; j < count; j++) {

			if (data[i].total < data[j].total) {

				data[i].rank++;
			}
		}
	}

	/* 出力 */
	printf(" NO 氏    名   英語 数学 国語 合計  平均 順位\n");
	printf("--- ---------- ---- ---- ---- ---- ----- ----\n");

	for (i = 0; i < count; i++) {

		printf("%3d ",    data[i].no);
		printf("%-11s",   data[i].name);
		printf("%4d ",    data[i].english);
		printf("%4d ",    data[i].math);
		printf("%4d ",    data[i].language);
		printf("%4d ",    data[i].total);
		printf("%5.1lf ", data[i].average);
		printf("%4d\n",   data[i].rank);
	}

	return 0;
}

/*
【実行結果】
 NO 氏    名   英語 数学 国語 合計  平均 順位
--- ---------- ---- ---- ---- ---- ----- ----
312 sato         60   82   74  216  72.0    5
553 suzuki       70   92   74  236  78.7    2
147 takahashi    81   66   74  221  73.7    3
206 tanaka       81   66   70  217  72.3    4
447 watanabe     65   88   90  243  81.0    1
*/

/*
【考察】
for文の条件式に関数を記述する方法です。

条件文が長くなる場合は、
自作関数を作成し、
短く記述する方法もある。
*/