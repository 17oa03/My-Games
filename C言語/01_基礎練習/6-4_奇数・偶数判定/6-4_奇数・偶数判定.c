/*
【プログラム概要】
整数を入力し、
奇数か偶数かを判定し結果を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

/* 入力の処理をする関数 */
int Input_Function(void);

/* 奇数・偶数を判定する関数 */
void Odd_Even_Judgment(int);

int main(void)
{
	int input;
	
	/* 実引数 : なし | 戻り値 : input */
	input = Input_Function();

	/* 実引数 : input | 戻り値 : なし */
	Odd_Even_Judgment(input);

	return 0;
}

/* 仮引数 : なし */
int Input_Function(void) {

	int input;

	printf("整数 ==> ");
	scanf("%d", &input);

	/* 戻り値 : input */
	return input;
}

/* 仮引数 : input */
void Odd_Even_Judgment(int input) {

	if (input % 2 == 0) {
	
		printf("%d は、偶数です。\n", input);
	}
	else
	{

		printf("%d は、奇数です。\n", input);
	}

	/* 戻り値 : なし */
	return;
}

/*
【実行結果1】
整数 ==> 5
5 は、奇数です。

【実行結果2】
整数 ==> 6
6 は、偶数です。
*/