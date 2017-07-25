/*
【プログラム概要】
アルファベット、記号、数字を入力する。
アルファベットの小文字なら大文字に、
大文字なら小文字に変換する。
記号、数字の場合は変換せずに出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

/* プロトタイプ宣言 */
char Conversion(char);

/* メインルーチン */
int main(void)
{
	char input, answer;

	printf("文字 ==> ");
	scanf("%c", &input);

	answer = Conversion(input); /* 実引数は「input」、戻り値は「answer」 */

	printf("%c の変換後は、%c です。\n", input, answer);

	return 0;
}

/* サブルーチン */
char Conversion(char input) /* 仮引数は「input」 */
{
	char answer;

	/* もし"A"(0x41)から"Z"(0x5A)の間にある値の場合 */
	if (input >= 0x41 && input <= 0x5A) {

		/* 0x20を加算して小文字変換 */
		answer = input + 0x20;
	}
	/* もし"a"(0x61)から"z"(0x7A)の間にある値の場合 */
	else if (input >= 0x61 && input <= 0x7A) {

		/* 0x20を減算して大文字変換 */
		answer = input - 0x20;
	}
	else
	{
		/* それ以外の場合は無変換 */
		answer = input;
	}
	/* 戻り値 = answer */
	return answer;
}


/*
【実行結果1】
文字 ==> y
y の変換後は、Y です。

【実行結果2】
文字 ==> Z
Z の変換後は、z です。

【実行結果3】
文字 ==> \
\ の変換後は、\ です。

【実行結果4】
文字 ==> 9
9 の変換後は、9 です。
*/

/*
【考察】
"A"は、ASCIIコード表より16進数(HEX)で「0x41」、
"Z"は、ASCIIコード表より16進数(HEX)で「0x5A」、
"a"は、ASCIIコード表より16進数(HEX)で「0x61」、
"z"は、ASCIIコード表より16進数(HEX)で「0x7A」になる。

"A"と"a"の差は +0x20、
"z"と"Z"の差は -0x20。

つまり、
0x20 を加算すれば小文字変換、
0x20 を減算すれば大文字変換ができる。

因みに、
HEX(ヘキサ)は、
Hexadecimal(ヘキサデシマル)の略称、
Hexa(ヘキサ)は、
ギリシャ語で「6」という意味で、
Decimal(デシマル)は、
「十進法」という意味になる。
*/