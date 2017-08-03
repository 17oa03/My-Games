/*
【プログラム概要】
標準入力より文字列を入力し、
文字列を比較する。
比較した結果は不等号を使用して出力する。

※strcmp関数は使用禁止。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	char input1[256]; /* 文字配列の宣言 */
	char input2[256];

	char inequality = '='; /* 「=」は、+1で「>」、-1で「<」 */

	int i; /* カウンタ変数 */

	printf("1つ目の文字列 ==> ");
	scanf("%s", input1); /* 入力 */

	printf("2つ目の文字列 ==> ");
	scanf("%s", input2); /* 入力 */

	for (i = 0; input1[i] == input2[i] && !(input1[i] == '\0' || input2[i] == '\0'); i++); /* 文字列の比較 */

	if (input1[i] > input2[i]) {inequality += 1;} /* 文字列の終端を比較 */
	if (input1[i] < input2[i]) {inequality -= 1;}

	printf("%s %c %s\n", input1, inequality, input2); /* 出力 */

	return 0;
}


/*
【実行結果1】
1つ目の文字列 ==> abc
2つ目の文字列 ==> abbc
abc > abbc

【実行結果2】
1つ目の文字列 ==> abc
2つ目の文字列 ==> abd
abc < abd

【実行結果3】
1つ目の文字列 ==> abc
2つ目の文字列 ==> abc
abc = abc

【実行結果4】
1つ目の文字列 ==> abc
2つ目の文字列 ==> adc
abc < adc

【実行結果5】
1つ目の文字列 ==> abcdef
2つ目の文字列 ==> abc
abcdef > abc

【実行結果6】
1つ目の文字列 ==> a
2つ目の文字列 ==> a
a = a
*/

/*
【考察】
とある「藤岡さん」が考えた記述方法で、
char型の変数に'='を代入し、
その変数に対して「1」を加算(>)・減算(<)することにより、
不等号を簡単に出力できる方法です。

上記内容を「藤岡式」と勝手に呼んでいます。
*/