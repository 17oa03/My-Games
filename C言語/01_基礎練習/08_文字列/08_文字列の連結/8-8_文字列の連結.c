/*
【プログラム概要】
標準入力より２つの文字列を入力し、
文字列を数える。
1つ目に入力した文字列の後ろに、
2つ目の文字列を連結する。
2つの文字列合計文字数が20文字を超える場合は連結しない。

※strlen, strcat関数を必ず使用する。
*/

/*
【プログラム】
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* 文字配列とカウンタ変数の定義 */
	char input1[256];
	char input2[256];
	int i, j;

	/* 入力 */
	printf("コピー元文字列 ==> ");
	scanf("%s", input1);

	printf("コピー元文字列 ==> ");
	scanf("%s", input2);

	/* 文字数を数える */
	i = strlen(input1);
	j = strlen(input2);

	/* 連結の有無と出力 */
	if (i + j <= 20) {

		strcat(input1, input2);
		printf("連結後の1つ目の文字列  :  %s\n", input1);
	}
	else
	{
		printf("合計で20文字を超えたので連結しません。\n");
	}

	return 0;
}

/*
【実行結果1】
コピー元文字列 ==> abcdefg
コピー元文字列 ==> hijklmn
連結後の1つ目の文字列  :  abcdefghijklmn

【実行結果2】
コピー元文字列 ==> abcdefghj
コピー元文字列 ==> jklmnopqrst
連結後の1つ目の文字列  :  abcdefghjjklmnopqrst

【実行結果3】
コピー元文字列 ==> abcdefghijklm
コピー元文字列 ==> opqrstuvwxyz
合計で20文字を超えたので連結しません。
*/

/*
【Memo】
*/