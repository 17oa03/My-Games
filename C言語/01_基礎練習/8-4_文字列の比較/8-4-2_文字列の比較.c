/*
【プログラム概要】
標準入力より文字列を入力し、
文字列を比較する。
比較した結果は不等号を使用して出力する。

※strcmp関数は使用禁止。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	/* 文字配列と変数定義 */
	char input1[256];
	char input2[256];
	char inequality = '=';
	int i;

	/* 入力 */
	printf("1つ目の文字列 ==> ");
	scanf("%s", input1);

	printf("2つ目の文字列 ==> ");
	scanf("%s", input2);

	/* 比較する2つの文字配列の要素を探索する処理 */
	for (i = 0; input1[i] == input2[i] && !(input1[i] == '\0' || input2[i] == '\0'); i++);

	/* 判定('='は、+1で'>'、-1で'<'になる。) */
	if (input1[i] > input2[i]) {inequality += 1;}
	if (input1[i] < input2[i]) {inequality -= 1;}

	/* 出力 */
	printf("%s %c %s\n", input1, inequality, input2);

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
【Memo】
アスキーコードを
上手く活用したトリッキーな文字列の比較。
*/