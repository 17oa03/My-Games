/*
【プログラム概要】
標準入力より２つの文字列を入力し、
文字列を数える。
1つ目に入力した文字列の後ろに、
2つ目の文字列を連結する。
2つの文字列合計文字数が20文字を超える場合は連結しない。

※strlen, strcat関数を自作する。
*/

/*【プログラム】*/
#include <stdio.h>

int str_length(char *); /* 文字数を数える関数 */
void str_cat(char *, char *); /* 文字列を連結する関数 */

int main(void)
{
	char input1[256]; /* 文字配列の宣言 */
	char input2[256];

	int i, j; /* カウンタ変数 */

	printf("1つ目の文字列 ==> ");
	scanf("%s", input1); /* 入力 */

	printf("2つ目の文字列 ==> ");
	scanf("%s", input2); /* 入力 */

	i = str_length(input1); /* 文字数を数える */
	j = str_length(input2);

	if (i + j <= 20) {

		str_cat(input1, input2); /* 文字列の連結 */
		printf("連結後の1つ目の文字列  :  %s\n", input1);
	}
	else
	{
		printf("合計で20文字を超えたので連結しません。\n");
	}
	
	return 0;
}

int str_length(char *p_input)
{
	int count = 0; /* 文字数のカウンタ変数 */

	while (*p_input++ != '\0') { count++; } /* 文字数のカウント */

	return count; /* 文字数のカウント数を返す */
}

void str_cat(char *p_input1, char *p_input2)
{
	while (*p_input1++ != '\0'); /* ヌル文字までアドレスをインクリメント */

	*p_input1--; /* 連結させる為にアドレスをデクリメント */

	while ((*p_input1++ = *p_input2++) != '\0'); /* 文字列の連結 */
	
	return;
}

/*
【実行結果1】
1つ目の文字列 ==> abcdefg
2つ目の文字列 ==> hijklmn
連結後の1つ目の文字列  :  abcdefghijklmn

【実行結果2】
1つ目の文字列 ==> abcdefghi
2つ目の文字列 ==> jklmnopqrst
連結後の1つ目の文字列  :  abcdefghijklmnopqrst

【実行結果3】
1つ目の文字列 ==> abcdefghijklmn
2つ目の文字列 ==> opqrstuvwxyz
合計で20文字を超えたので連結しません。

【実行結果4】
1つ目の文字列 ==> 123XYZ#$%&
2つ目の文字列 ==> zyx)(~;:AA
連結後の1つ目の文字列  :  123XYZ#$%&zyx)(~;:AA
*/

/*
【考察】
while文の継続条件で、
ポインタ変数をインクリメントしながら
ヌル文字までアドレスを進める方法はとても便利です。
*/