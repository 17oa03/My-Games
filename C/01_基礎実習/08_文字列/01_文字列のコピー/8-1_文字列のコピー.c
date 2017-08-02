/*
【プログラム概要】
標準入力より文字列を入力し、
別の文字列にコピーする。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	char string1[256]; /* 文字配列の宣言 */
	char string2[256];

	int i; /* カウンタ変数 */

	printf("コピー元文字列 ==> ");
	scanf("%s", string1); /* 文字列の入力 */

	for (i = 0; string1[i] != '\0'; i++) { /* 文字列のコピー処理 */

		string2[i] = string1[i]; /* 1文字ずつ代入 */
	}

	string2[i] = '\0'; /* ヌル文字(\0)を代入して文字列の終端を示す */

	printf("コピー元文字列  :  %s\n", string1); /* 文字配列の出力 */
	printf("コピー先文字列  :  %s\n", string2);
	
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