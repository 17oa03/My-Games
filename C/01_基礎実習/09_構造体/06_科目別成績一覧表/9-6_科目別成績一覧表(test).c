/*
【プログラム概要】
成績データをリダイレクション入力し、
構造体配列に格納する。
格納した構造体配列から、
3科目の成績一覧表を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

/* 生徒の人数 */
#define STUDENT 5

/* 構造体の宣言 */
struct record {
	int  no;       /* 番号 */
	char name[11]; /* 氏名 */
	int  english;  /* 英語の点数 */
	int  math;     /* 数学の点数 */
	int  language; /* 国語の点数 */

	struct rank {
		int r_english;  /* 英語の順位 */
		int r_math;     /* 数学の順位 */
		int r_language; /* 国語の順位 */
	}Rank;

}data[STUDENT], tmp; /* 構造体の定義 */

int main(void)
{
	/* カウンタ変数 */
	int i, j;

	/* scanf関数の戻り値を代入する変数 */
	int end_flag;

	/* リダイレクトの回数を代入する変数 */
	int count = 0;

	/* リダイレクション */
	for (i = 0;
		(end_flag =
			scanf("%d %s %d %d %d",
				&data[i].no,
				 data[i].name,
				&data[i].english,
				&data[i].math,
				&data[i].language))
		!= EOF;
		i++) {

		/* 順位に「1」を代入 */
		data[i].Rank.r_english = 1;
		data[i].Rank.r_math = 1;
		data[i].Rank.r_language = 1;
	}

	/* リダイレクト回数を代入 */
	count = i;

	/*英語の点数を比較*/
	for (i = 0; i < count - 1; i++) {
		for (j = i + 1; j < count; j++) {

			if (data[i].english < data[j].english) {

				/* 入れ換え */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
			else if (data[i].english == data[j].english &&
				data[i].no > data[j].no) {

				/* 入れ換え */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
		}
	}

	/* 順位付け */
	for (i = 0; i < count; i++) {
		for (j = 0; j < count; j++) {

			if (data[i].english < data[j].english) {

				data[i].Rank.r_english++;
			}
		}
	}

	/* 英語の成績一覧表 */
	printf("*** 成績一覧表 (英語) ***\n");
	printf(" No 氏    名   英語 順位\n");
	printf("--- ---------- ---- ----\n");

	for (i = 0; i < count; i++) {

		printf("%3d %-10s %4d %4d\n",
			data[i].no,
			data[i].name,
			data[i].english,
			data[i].Rank.r_english);
	}

	/*数学の点数を比較*/
	for (i = 0; i < count - 1; i++) {
		for (j = i + 1; j < count; j++) {

			if (data[i].math < data[j].math) {

				/* 入れ換え */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
			else if (data[i].math == data[j].math &&
				data[i].no > data[j].no) {

				/* 入れ換え */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
		}
	}

	/* 順位付け */
	for (i = 0; i < count; i++) {
		for (j = 0; j < count; j++) {

			if (data[i].math < data[j].math) {

				data[i].Rank.r_math++;
			}
		}
	}

	/* 数学の成績一覧表 */
	printf("\n*** 成績一覧表 (数学) ***\n");
	printf(" No 氏    名   数学 順位\n");
	printf("--- ---------- ---- ----\n");

	for (i = 0; i < count; i++) {

		printf("%3d %-10s %4d %4d\n",
			data[i].no,
			data[i].name,
			data[i].math,
			data[i].Rank.r_math);
	}

	/*国語の点数を比較*/
	for (i = 0; i < count - 1; i++) {
		for (j = i + 1; j < count; j++) {

			if (data[i].language < data[j].language) {

				/* 入れ換え */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
			else if (data[i].language == data[j].language &&
				data[i].no > data[j].no) {

				/* 入れ換え */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
		}
	}

	/* 順位付け */
	for (i = 0; i < count; i++) {
		for (j = 0; j < count; j++) {

			if (data[i].language < data[j].language) {

				data[i].Rank.r_language++;
			}
		}
	}

	/* 国語の成績一覧表 */
	printf("\n*** 成績一覧表 (国語) ***\n");
	printf(" No 氏    名   国語 順位\n");
	printf("--- ---------- ---- ----\n");

	for (i = 0; i < count; i++) {

		printf("%3d %-10s %4d %4d\n",
			data[i].no,
			data[i].name,
			data[i].language,
			data[i].Rank.r_language);
	}

	return 0;
}

/*
【実行結果】
*** 成績一覧表 (英語) ***
No 氏    名   英語 順位
--- ---------- ---- ----
147 takahashi    81    1
206 tanaka       81    1
553 suzuki       70    3
447 watanabe     65    4
312 sato         60    5

*** 成績一覧表 (数学) ***
No 氏    名   数学 順位
--- ---------- ---- ----
553 suzuki       92    1
447 watanabe     88    2
312 sato         82    3
147 takahashi    66    4
206 tanaka       66    4

*** 成績一覧表 (国語) ***
No 氏    名   国語 順位
--- ---------- ---- ----
447 watanabe     90    1
147 takahashi    74    2
312 sato         74    2
553 suzuki       74    2
206 tanaka       70    5
*/

/*
【考察】
「9-2_社員名簿」と、
「9-3_成績表一覧」の応用、
ソースコードは長くなるが、
わかりやすいように
科目毎にソートと順位付けの処理を
書いた。
*/