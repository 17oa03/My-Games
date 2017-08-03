/*
【プログラム概要】
標準入力よりパスワード(文字列)を入力し、
別の文字列にコピーする。

※strcpy関数を必ず使用する。
*/

/*【プログラム】*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[256]; /* 文字配列の宣言 */
	char copy_to[256];

	printf("コピー元文字列 ==> ");
	scanf("%s", input); /* 入力 */

	strcpy(copy_to, input);	/* 文字列のコピー */

	printf("コピー元文字列  :  %s\n", input); /* 出力 */
	printf("コピー先文字列  :  %s\n", copy_to);

	return 0;
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
*/