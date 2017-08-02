/*
【プログラム概要】
標準入力より文字列を入力し、
別の文字列にコピーする。
2つの文字配列の文字数が20文字を超えた場合、
連結処理をさせない。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	char string1[256]; /* 文字配列の宣言 */
	char string2[256];

	int i, j; /* カウンタ変数 */

	printf("1つ目の文字列 ==> ");
	scanf("%s", string1); /* 文字列の入力 */

	printf("2つ目の文字列 ==> ");
	scanf("%s", string2); /* 文字列の入力 */

	for (i = 0; string1[i] != '\0'; i++); /* 文字配列の文字数をカウント */
	for (j = 0; string2[j] != '\0'; j++);

	if (i + j <= 20) { /* 文字配列の合計文字数が20文字以下の場合 */

		for (j = 0; string2[j] != '\0'; i++, j++) {

			string1[i] = string2[j]; /* 文字列の連結処理 */
		}

		string1[i] = '\0'; /* ヌル文字(\0)の代入 */

		printf("連結後の1つ目の文字列 : %s\n", string1); /* 連結後の出力 */
	}
	else /* 文字配列の合計文字数が20文字より大きい場合 */
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