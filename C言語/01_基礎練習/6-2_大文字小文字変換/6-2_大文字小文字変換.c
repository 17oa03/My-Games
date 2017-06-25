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

/* 大文字 ⇔ 小文字変換の処理をする関数 */
char Conversion(char);

int main(void)
{
	char input, answer;

	printf("文字 ==> ");
	scanf("%c", &input);

	/* 実引数 : input | 戻り値 : answer */
	answer = Conversion(input);

	printf("%c の変換後は、%c です。\n", input, answer);

	return 0;
}

/* 仮引数 = input */
char Conversion(char input)
{
	char answer;

	if (input >= 65 && input <= 90) {

		answer = input + 32;
	}
	else if (input >= 97 && input <= 122) {

		answer = input - 32;
	}
	else
	{

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
【不具合履歴】
関数のプロトタイプ宣言にて、
名前の頭文字を大文字で記述していたが、
関数本体の名前を小文字で記述していた為、
ビルドエラーが発生した、
関数本体の名前の頭文字を大文字に記述し、
不具合を修正しました。
*/