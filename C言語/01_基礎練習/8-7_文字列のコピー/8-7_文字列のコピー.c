/*
【プログラム概要】
標準入力よりパスワード(文字列)を入力し、
別の文字列にコピーする。

※strcpy関数を必ず使用する。
*/

/*
【プログラム】
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* 文字配列の定義 */
	char input1[256];
	char input2[256];

	/* 入力 */
	printf("コピー元文字列 ==> ");
	scanf("%s", input1);

	/* 文字列のコピー */
	strcpy(input2, input1);

	/* 出力 */
	printf("コピー元文字列  :  %s\n", input1);
	printf("コピー先文字列  :  %s\n", input2);

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

/*
【Memo】
*/