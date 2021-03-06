/*
【プログラム概要】
整数を入力し、
入力した数値の二乗を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int Square(int); /* 関数(サブルーチン)のプロトタイプ宣言 */

int main(void) /* メイン関数(メインルーチン)の定義 */
{
	int input, answer;

	printf("整数 ==> ");
	scanf("%d", &input);

	answer = Square(input); /* 実引数は「input」、戻り値は「answer」 */

	printf("%d の二乗は、%d です。\n", input, answer);

	return 0;
}

int Square(int input) /* 関数(サブルーチン)の定義、仮引数は「input」 */
{
	int answer;

	answer = input * input;

	return answer; /* 戻り値は「answer」 */
}

/*
【実行結果1】
整数 ==> 5
5 の二乗は、25 です。

【実行結果2】
整数 ==> 100
100 の二乗は、10000 です。

【実行結果3】
整数 ==> 1
1 の二乗は、1 です。

【実行結果4】
整数 ==> 0
0 の二乗は、0 です。
*/

/*
【考察】
呼び出す側から渡す値を「実引数」、
呼び出される側の変数を「仮引数」、
呼び出し元に返す値を「戻り値」という。

関数は呼び出して使用する前に、
プロトタイプ宣言をする必要がある。

----------------------------------
戻り値の型 関数名(引数の型);
----------------------------------

プロトタイプ宣言とは、
そのプログラム内で使用する関数名、
引数の順序と型を指定する為に
設けられた文法規則のこと。

プロトタイプ宣言が無い場合、
コンパイラは引数の情報が不明で
int型を返す関数とみなしてコンパイルを行うが、
ほぼ考えたとおりに動作しない。

関数(サブルーチン)の定義の記述方法は以下の通りになる。

----------------------------------
戻り値の型 関数名(引数の型 仮引数名)
{
	処理
}
----------------------------------
*/