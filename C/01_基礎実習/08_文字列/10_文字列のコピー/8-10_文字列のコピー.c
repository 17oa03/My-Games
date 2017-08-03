/*
【プログラム概要】
標準入力より文字列を入力し、
別の文字列をコピーする。

※strcpy関数を自作する。
*/

/*【プログラム】*/
#include <stdio.h>

void str_copy(char *, char *); /* 文字列をコピーする関数 */

int main(void)
{
	char input[256]; /* 文字配列の宣言 */
	char copy_to[256];

	printf("コピー元文字列 ==> ");
	scanf("%s", input); /* 入力 */

	str_copy(input, copy_to); /* 文字列のコピー */
	
	printf("コピー元文字列  :  %s\n", input); /* 出力 */
	printf("コピー先文字列  :  %s\n", copy_to);

	return 0;
}

void str_copy(char *p_input, char *p_copy_to)
{
	while (*p_input != '\0') { /* ヌル文字までループ */

		*p_copy_to++ = *p_input++; /* 文字列のコピー */
	}

	*p_copy_to = '\0'; /* 文字列のコピー後は、ヌル文字を代入する */

	return;
}

/*
【実行結果1】
コピー元文字列 ==> abcdefg
コピー元文字列  :  abcdefg
コピー先文字列  :  abcdefg

【実行結果2】
コピー元文字列 ==> 123XYZ#$%
コピー元文字列  :  123XYZ#$%
コピー先文字列  :  123XYZ#$%

【実行結果3】
コピー元文字列 ==> a
コピー元文字列  :  a
コピー先文字列  :  a
*/