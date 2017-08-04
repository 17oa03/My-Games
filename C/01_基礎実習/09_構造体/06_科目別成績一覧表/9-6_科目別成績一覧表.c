/*
【プログラム概要】
成績データをリダイレクション入力し、
構造体配列に格納する。
格納した構造体配列から、
3科目の成績一覧表を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define STUDENT 5 /* 生徒の人数 */

struct record { /* 構造体の宣言 */
	int  no;       /* 番号 */
	char name[11]; /* 氏名 */
	int  english;  /* 英語の点数 */
	int  math;     /* 数学の点数 */
	int  language; /* 国語の点数 */

	struct rank { /* 構造体のネスト */
		int r_english;  /* 英語の順位 */
		int r_math;     /* 数学の順位 */
		int r_language; /* 国語の順位 */
	}Rank;

}data[STUDENT], tmp; /* 構造体配列と変数の定義 */

int main(void)
{
	int i, j; /* カウンタ変数 */

	int end_flag; /* 終了フラグ */

	int count = 0; /* リダイレクト回数 */

	for (i = 0;
		(end_flag = scanf("%d %s %d %d %d", /* ファイル終端までループ */
			&data[i].no,
			 data[i].name,
			&data[i].english,
			&data[i].math,
			&data[i].language)) != EOF;
		i++) {

		data[i].Rank.r_english = 1; /* 順位に「1」を代入 */
		data[i].Rank.r_math = 1;
		data[i].Rank.r_language = 1;
	}

	count = i; /* リダイレクト回数を代入 */

	for (i = 0; i < count - 1; i++) { /* 英語の点数を比較 */
		for (j = i + 1; j < count; j++) {

			if (data[i].english < data[j].english) {

				tmp     = data[j]; /* データ交換 */
				data[j] = data[i];
				data[i] = tmp;
			}
			else if (data[i].english == data[j].english &&
				data[i].no > data[j].no) {

				tmp     = data[j]; /* データ交換 */
				data[j] = data[i];
				data[i] = tmp;
			}
		}
	}

	for (i = 0; i < count; i++) { /* 順位付け */
		for (j = 0; j < count; j++) {

			if (data[i].english < data[j].english) {

				data[i].Rank.r_english++;
			}
		}
	}

	printf("*** 成績一覧表 (英語) ***\n");
	printf(" No 氏    名   英語 順位\n");
	printf("--- ---------- ---- ----\n");

	for (i = 0; i < count; i++) {

		printf("%3d %-10s %4d %4d\n", /* 結果出力 */
			data[i].no,
			data[i].name,
			data[i].english,
			data[i].Rank.r_english);
	}

	for (i = 0; i < count - 1; i++) { /* 数学の点数を比較 */
		for (j = i + 1; j < count; j++) {

			if (data[i].math < data[j].math) {

				tmp     = data[j]; /* データ交換 */
				data[j] = data[i];
				data[i] = tmp;
			}
			else if (data[i].math == data[j].math &&
				data[i].no > data[j].no) {

				tmp     = data[j]; /* データ交換 */
				data[j] = data[i];
				data[i] = tmp;
			}
		}
	}

	for (i = 0; i < count; i++) { /* 順位付け */
		for (j = 0; j < count; j++) {

			if (data[i].math < data[j].math) {

				data[i].Rank.r_math++;
			}
		}
	}

	printf("\n*** 成績一覧表 (数学) ***\n");
	printf(" No 氏    名   数学 順位\n");
	printf("--- ---------- ---- ----\n");

	for (i = 0; i < count; i++) {

		printf("%3d %-10s %4d %4d\n", /* 結果出力 */
			data[i].no,
			data[i].name,
			data[i].math,
			data[i].Rank.r_math);
	}

	for (i = 0; i < count - 1; i++) { /* 国語の点数を比較 */
		for (j = i + 1; j < count; j++) {

			if (data[i].language < data[j].language) {

				tmp     = data[j]; /* データ交換 */
				data[j] = data[i];
				data[i] = tmp;
			}
			else if (data[i].language == data[j].language &&
				data[i].no > data[j].no) {

				tmp     = data[j]; /* データ交換 */
				data[j] = data[i];
				data[i] = tmp;
			}
		}
	}

	for (i = 0; i < count; i++) { /* 順位付け */
		for (j = 0; j < count; j++) {

			if (data[i].language < data[j].language) {

				data[i].Rank.r_language++;
			}
		}
	}

	printf("\n*** 成績一覧表 (国語) ***\n");
	printf(" No 氏    名   国語 順位\n");
	printf("--- ---------- ---- ----\n");

	for (i = 0; i < count; i++) {

		printf("%3d %-10s %4d %4d\n", /* 結果出力 */
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