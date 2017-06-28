/*
【プログラム概要】
標準入力より文字列を入力し、
別の文字列をコピーする。

※strcpy関数を自作する。
*/

/*
【プログラム】
*/
#include <stdio.h>

void str_copy(char *, char *);

int main(void)
{
	/* 文字配列と変数の定義 */
	char input[256];
	char copy_to[256];

	/* 入力 */
	printf("コピー元文字列 ==> ");
	scanf("%s", input);

	/* 文字数を比較 */
	str_copy(input, copy_to);
	
	/* 出力 */
	printf("コピー元文字列  :  %s\n", input);
	printf("コピー先文字列  :  %s\n", copy_to);

	return 0;
}

/* 文字列をコピーする関数 */
void str_copy(char *p_input, char *p_copy_to)
{
	for (; *p_input != '\0';) {

		*p_copy_to++ = *p_input++;
	}

	*p_copy_to = '\0';

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

/*
【Memo】
文字列のコピーは、
先頭アドレスにインクリメントしながらコピーする。
ループ抜け後はコピー先の文字配列に、
NULL文字を代入してあげる。
*/