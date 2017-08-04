/*
【プログラム概要】
成績データをリダイレクション入力し、
構造体配列に格納する。
全て格納後に成績一覧表を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define STUDENT 5 /* 生徒の人数 */

struct record { /* 構造体の宣言 */
	int    no;	     /* 番号 */
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
	struct record data[STUDENT]; /* 構造体配列の定義 */

	int i, j; /* カウンタ変数 */

	int end_flag = 0; /* 終了フラグ */

	int count;/* リダイレクト回数 */

	for (i = 0;
		(end_flag = scanf("%d %s %d %d %d", /* リダイレクション入力 */
			&data[i].no, 
			 data[i].name,
			&data[i].english, 
			&data[i].math,
			&data[i].language) != EOF);
		i++) {

		data[i].total = data[i].english + data[i].math + data[i].language; /* 合計の計算 */

		data[i].average = (double)data[i].total / 3; /* 平均の計算 */

		data[i].rank = 1; /* 順位に「1」を代入 */
	}

	count = i; /* リダイレクト回数を代入 */

	for (i = 0; i < count - 1; i++) { /* 順位付け */
		for (j = 0; j < count; j++) {

			if (data[i].total < data[j].total) { /* 自分より相手の合計点が大きい場合 */

				data[i].rank++; /* 順位を下げる(順位に +1) */
			}
		}
	}

	printf(" NO 氏    名   英語 数学 国語 合計  平均 順位\n");
	printf("--- ---------- ---- ---- ---- ---- ----- ----\n");

	for (i = 0; i < count; i++) { /* 出力ループ */

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
for文の条件文内に、
リダイレクション入力を書くことができる。

順位付けは、
for文の2重ループで比較しながら、
自分よりも相手が大きい場合、
順位を下げる(順位に +1)。

注意点として、
内側ループのカウンタ変数は、
「0」にしないと
他の生徒と比較されない。

例えば、
「j = i + 1」にすると、
2人目は1人目と比較されない為、
順位付けがおかしくなる。

また、
順位を予め代入してしまった場合、
同じ合計点の生徒と順位が同じにならない。
*/