/*
【プログラム概要】
標準入力より文字列を入力し、
別の文字列にコピーする。
2つの文字配列の文字数が20文字を超えた場合、
連結処理をさせない。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	/* 文字を格納する変数の定義 */
	char string1[256];
	char string2[256];

	/* カウンタ変数 */
	int i, j;

	/* 入力処理 */
	printf("1つ目の文字列 ==> ");
	scanf("%s", string1);

	printf("2つ目の文字列 ==> ");
	scanf("%s", string2);

	/* 2つの文字配列の文字数をカウントする。 */
	for (i = 0; string1[i] != '\0'; i++);
	for (j = 0; string2[j] != '\0'; j++);

	/* 2つの文字配列の文字数が20文字を超える場合 */
	if (i + j <= 20) {

		/* 1つ目の文字配列の最後から2つ目の文字配列を代入する。 */
		for (j = 0; string2[j] != '\0'; i++, j++) {

			string1[i] = string2[j];
		}

		/* 出力前のNULL文字の代入処理 */
		string1[i] = '\0';

		/* 連結後の出力 */
		printf("連結後の1つ目の文字列 : %s\n", string1);
	}
	else
	{

		printf("合計で20文字を超えたので連結しません。\n");
	}

	return 0;
}


/*
【実行結果1】
1つ目の文字列 ==> abcdefg
2つ目の文字列 ==> hijklmn
連結後の1つ目の文字列 : abcdefghijklmn

【実行結果2】
1つ目の文字列 ==> abcdefghi
2つ目の文字列 ==> jklmnopqrst
連結後の1つ目の文字列 : abcdefghijklmnopqrst

【実行結果3】
1つ目の文字列 ==> abcdefghijklmn
2つ目の文字列 ==> opqrstuvwxyz
合計で20文字を超えたので連結しません。
*/

/*
【メモ】
2つの文字配列の文字数が20文字を超えた場合、
連結処理をさせないとある、
なので、連結処理をする前に、
連結するしないの判定をする必要がある。
*/