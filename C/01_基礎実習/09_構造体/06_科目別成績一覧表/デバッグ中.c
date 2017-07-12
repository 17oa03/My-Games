/*
【プログラム概要】
成績データをリダイレクション入力し、
構造体配列に格納する。
格納した構造体配列から、
3科目の成績一覧表を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define STUDENT 5 /* 人数 */
#define TYPE 3    /* 科目の種類 */

/* 構造体の宣言 */
typedef struct record {
	int  no;            /* 番号 */
	char name[11];      /* 氏名 */
	int  score[TYPE];   /* 点数 */
	int  rank;          /* 順位 */
	char subject[TYPE]; /* 科目 */

}Recode; /* 構造体の定義 */

/* 科目名の種類 */
Recode subject[5] = { "国語", "数学", "英語", };

/* 関数一覧 */
void in_data(Recode *, int);
void sort_data(Recode *, int);
void ranking_data(Recode *, int);
void out_data(Recode *, int, int);

int main(void)
{
	/* Record型配列の定義 */
	Recode data[STUDENT];

	/* カウンタ変数 */
	int i;
	
	/* 入力 */
	in_data(data, TYPE);

	for (i = 0; i < TYPE; i++) {

		/* ソート */
		sort_data(data, STUDENT);

		/* 順位付け */
		ranking_data(data, STUDENT);

		/* 出力 */
		out_data(data, i, STUDENT);
	}

	return 0;
}

/* 入力関数 */
void in_data(Recode *p_data1, int n)
{
	Recode *p_data2, *p_data3;

	/* scanf関数の戻り値を代入する変数 */
	int end_flag;

	/* リダイレクション */
	for (p_data2 = p_data1;
		(end_flag =
			scanf("%d %s", p_data2->no, p_data2->name)) != EOF;
		p_data2++) {

		for (p_data3 = p_data2; p_data3 < p_data1 + n; p_data3) {

			scanf("%d", p_data3->score);
		}
	}

	return;
}

/* ソート関数 */
void sort_data(Recode *p_data1, int n)
{
	Recode *p_data2, *p_data3, *work;

	int sort_flag;

	for (p_data2 = p_data1; p_data2 < p_data1 + n - 1; p_data2++) {
		for (p_data3 = p_data2 + 1; p_data3 + n; p_data3++) {

			if (p_data2->score < p_data3->score) {

				sort_flag++;
			}
			else if (p_data2->score < p_data3->score &&
				p_data2->no > p_data3->no) {

				sort_flag++;
			}

			if (sort_flag != 0) {

				work = p_data3;
				p_data3 = p_data2;
				p_data2 = work;

				sort_flag = 0;
			}
		}
	}

	return;
}

/* 順位付け関数 */
void ranking_data(Recode *p_data1, int n)
{

	Recode *p_data2, *p_data3;

	for (p_data2 = p_data1; p_data2 < p_data1 + n; p_data2++) {

		p_data2->rank = 1;
		for (p_data3 = p_data1; p_data3 < p_data1 + n; p_data3++) {

			if (p_data2->score < p_data3->score) {

				p_data2->rank++;

			}
		}
	}
	
	return;
}

/* 出力関数 */
void out_data(Recode *p_data1, int k, int n)
{
	Recode *p_data2;

	/* 成績一覧表の出力 */
	printf("*** 成績一覧表 (%4s) ***\n", p_data1->subject[k]);
	printf(" No 氏    名   %4s 順位\n", p_data1->subject[k]);
	printf("--- ---------- ---- ----\n");

	for (p_data2 = p_data1; p_data2 < p_data1 + n; p_data2++) {

		printf("%3d %-10s %4d %4d\n", p_data2->no, p_data2->name, p_data2->score, p_data2);
	}

	return;
}


/*
【実行結果】
*/

/*
【考察】
*/