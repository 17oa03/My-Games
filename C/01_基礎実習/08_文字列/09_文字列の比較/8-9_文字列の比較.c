/*
【プログラム概要】
標準入力より２つの文字列を入力し、
文字列を比較する。
比較した結果を不等号を付けて出力する。

※strcmp関数を必ず使用する。
*/

/*【プログラム】*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char input1[256]; /* 文字配列の宣言 */
	char input2[256];

	char inequality = '='; /* 「8-4_文字列の比較」より「藤岡式」 */

	printf("1つ目の文字列 ==> ");
	scanf("%s", input1); /* 入力 */

	printf("2つ目の文字列 ==> ");
	scanf("%s", input2); /* 入力 */

	inequality += strcmp(input1, input2); /* 文字数を比較 */
	
	printf("%s %c %s\n", input1, inequality, input2); /* 出力 */

	return 0;
}

/*
【実行結果1】
1つ目の文字列 ==> abc
2つ目の文字列 ==> abbc
abc > abbc

【実行結果2】
1つ目の文字列 ==> abcde
2つ目の文字列 ==> abd
abcde < abd

【実行結果3】
1つ目の文字列 ==> abc
2つ目の文字列 ==> abc
abc = abc

【実行結果4】
1つ目の文字列 ==> 1234
2つ目の文字列 ==> 123
1234 > 123

【実行結果5】
1つ目の文字列 ==> #$%&
2つ目の文字列 ==> #$%&
#$%& = #$%&
*/

/*
【考察】
strcmp関数の戻り値は、

input1 = input2ならば0、
input1 > input2ならば正の値、
input1 < input2ならば負の値を返す。

「正の値」と「負の値」は、
コンパイラによって変動する可能性があるので注意。
*/