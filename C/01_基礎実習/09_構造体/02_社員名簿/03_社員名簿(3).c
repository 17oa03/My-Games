/*
【プログラム概要】
社員名簿(5名分)の構造体配列を初期化し、
年齢の降順に出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define ELEMENT 5 /* 人数 */

int main(void)
{
	/* 構造体の型枠の宣言 */
	struct ymd {
		int y; /* 年 */
		int m; /* 月 */
		int d; /* 日 */
	};

	struct employee {
		int    no;           /* 社員番号 */
		char   name[11];     /* 氏名 */
		struct ymd entrance; /* 入社年月日 */
		struct ymd birth;    /* 生年月日 */
	};

	/* カウンタ変数 */
	int i, j;

	/* 生年月日を8桁の整数で比較する為の配列と変数 */
	int comparison[ELEMENT];
	int temp_1;

	/* 構造体変数の定義と初期化 */
	struct employee data[ELEMENT] = {
		{ 1212, "sato",      { 2002,  4,  1 },{ 1982,  6, 23 } }, /* 1人目 */
		{ 2353, "suzuki",    { 2001,  4,  1 },{ 1984,  9, 30 } }, /* 2人目 */
		{ 3147, "takahashi", { 2001, 10,  1 },{ 1986, 10, 11 } }, /* 3人目 */
		{ 5206, "tanaka",    { 1995,  4, 20 },{ 1986, 10, 10 } }, /* 4人目 */
		{ 6447, "watanabe",  { 1988,  3, 25 },{ 1985,  4, 20 } }, /* 5人目 */
	};

	struct employee temp_2;

	/* 生年月日を8桁の整数に変換して配列に代入 */
	for (i = 0; i < ELEMENT; i++) {
		comparison[i] = comparison[i] + (data[i].birth.y * 10000);
		comparison[i] = comparison[i] + (data[i].birth.m * 100);
		comparison[i] = comparison[i] + (data[i].birth.d);
	}

	/* 年齢の降順にソートする */
	for (i = 0; i < ELEMENT - 1; i++) {
		for (j = i + 1; j < ELEMENT; j++) {

			if (comparison[i] > comparison[j]) {

				temp_2 = data[i];
				data[i] = data[j];
				data[j] = temp_2;

				temp_1 = comparison[i];
				comparison[i] = comparison[j];
				comparison[j] = temp_1;
			}
		}
	}

	/* 出力 */
	printf("社員番号 氏    名   入社年月日  生年月日 \n");
	printf("-------- ---------- ---------- ----------\n");

	for (i = 0; i < ELEMENT; i++) {
		printf("%8d ", data[i].no);
		printf("%-11s", data[i].name);
		printf("%4d/%2d/%2d ", data[i].entrance);
		printf("%4d/%2d/%2d\n", data[i].birth);
	}

	return 0;
}

/*
【実行結果】
社員番号 氏    名   入社年月日  生年月日
-------- ---------- ---------- ----------
    1212 sato       2002/ 4/ 1 1982/ 6/23
    2353 suzuki     2001/ 4/ 1 1984/ 9/30
    6447 watanabe   1988/ 3/25 1985/ 4/20
    5206 tanaka     1995/ 4/20 1986/10/10
    3147 takahashi  2001/10/ 1 1986/10/11
*/

/*
【考察】
社員名簿(2)から、
さらに可読性を上げた。

生年月日を8桁の整数に変換することにより、
ソートを判定するif分の条件式が簡単になった。

注意点としては、
判定に使用した配列も交換する処理が必要になる。
*/