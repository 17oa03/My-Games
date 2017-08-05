/*
【プログラム概要】
標準入力より最大10文字(10 byte)の文字列を入力し、
その文字列を標準出力に出力する。
10文字を超える場合と0文字入力の場合は、
エラーメッセージを出力する。
*/

/*【プログラム】*/
#include <stdio.h>

#define ELEMENT 11 /* 最大文字数 */

int  Input (char *, int); /* 文字列を入力する関数 */
void Output(char *, int); /* 文字列を出力する関数 */

int main(void)
{
	char str[ELEMENT]; /* 文字配列の宣言 */

	int out_flag; /* 出力フラグ */
	
	out_flag = Input(str, ELEMENT - 1); /* 文字列の入力 */

	if (out_flag == 0) /* 「0」の場合 */
	{

		printf("入力がありません。\n");
	}
	else if(out_flag == EOF) /* 「EOF」の場合 */
	{

		printf("%d バイトを超えています。\n", ELEMENT - 1);
	}
	else /* それ以外の場合 */
	{

		Output(str, ELEMENT - 1); /* 文字列の出力 */
	}

	return 0;
}

int Input(char *p_str, int n) /* 文字列を入力する関数 */
{
	int i = 0; /* カウンタ変数 */

	int answer = 1; /* 戻り値 */

	printf("*** 文字列入出力 (最大 %d バイト) ***\n", n);
	printf("入力 ==> ");

	for (i = 0; (*(p_str + i) = getchar()) != '\n' && answer == 1; i++) /* 改行までループ */
	{

		if(i >= n) /* 10 バイトを超える場合 */
		{

			answer = EOF;

			p_str--; /* for分の再初期化式によってメモリ領域外にアクセスすることを防止 */
		}
	}
	
	if (i == 0) { /* 0文字入力の場合 */

		answer = i;
	}
		
	*(p_str + i) = '\0'; /* ヌル文字を付加 */

	return answer;
}

void Output(char *p_str, int n) /* 文字列を出力する関数 */
{
	int i; /* カウンタ変数 */

	printf("出力 ==> ");

	for (i = 0; *(p_str + i) != '\0'; i++) { /* 改行までループ */

		putchar(*(p_str + i)); /* 出力 */
	}

	putchar('\n'); /* 改行 */

	return;
}


/*
【実行結果1】
*** 文字列入出力 (最大 10 バイト) ***
入力 ==> abcde
出力 ==> abcde

【実行結果2】
*** 文字列入出力 (最大 10 バイト) ***
入力 ==> a
出力 ==> a

【実行結果3】
*** 文字列入出力 (最大 10 バイト) ***
入力 ==> abcdefghij
出力 ==> abcdefghij

【実行結果4】
*** 文字列入出力 (最大 10 バイト) ***
入力 ==> abcdefghijk
10 バイトを超えています。

【実行結果5】
*** 文字列入出力 (最大 10 バイト) ***
入力 ==>
入力がありません。

*/

/*
【考察】
putchar関数は、
標準出力に引数で指定された文字を
unsigned char型に変換して書き込み、
書き込み失敗時は「EOF」を返す。
*/