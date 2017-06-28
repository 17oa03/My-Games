/*
【プログラム概要】
標準入力より２つの文字列を入力し、
文字列を比較する。
さらに、比較した結果を出力する。

※strcmp関数を自作する。
*/

/*
【プログラム】
*/
#include <stdio.h>

int str_comp(char *, char *);

int main(void)
{
	/* 文字配列と変数の定義 */
	char input1[256];
	char input2[256];
	int inequality = '=';
	int i;

	/* 入力 */
	printf("1つ目の文字列 ==> ");
	scanf("%s", input1);

	printf("2つ目の文字列 ==> ");
	scanf("%s", input2);

	/* 文字列の数を数える */
	i = str_comp(input1, input2);

	/* 出力 */
	printf("%s %c %s\n", input1, inequality + i, input2);
	
	return 0;
}

/* 文字列を比較する関数 */
int str_comp(char *p_input1, char *p_input2)
{
	while (*p_input1++ == *p_input2++ && (*p_input1 != '\0' && *p_input2 != '\0'));

	*p_input1--;
	*p_input2--;

	if (*p_input1 > *p_input2) { return 1; }
	else if (*p_input1 < *p_input2) { return -1; }
	else { return 0; }

}


/*
【実行結果1】
1つ目の文字列 ==> abc
2つ目の文字列 ==> abbc
abc > abbc

【実行結果2】
1つ目の文字列 ==> abcd
2つ目の文字列 ==> abd
abcd < abd

【実行結果3】
1つ目の文字列 ==> abc
2つ目の文字列 ==> abc
abc = abc

【実行結果4】
1つ目の文字列 ==> #$%&
2つ目の文字列 ==> ABCD
#$%& < ABCD

【実行結果5】
1つ目の文字列 ==> 777
2つ目の文字列 ==> 666
777 > 666
*/

/*
【Memo】
ループ処理後のアドレスの位置が重要になる、
デクリメントしないと不定の値を参照してしまう。
*/