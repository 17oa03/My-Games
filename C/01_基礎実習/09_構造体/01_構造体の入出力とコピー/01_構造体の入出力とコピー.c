/*
【プログラム概要】
構造体変数を2つ定義し、
1つ目の構造体変数にデータを入力する。
入力後に1つ目の構造体変数のデータを
2つ目の構造体変数にコピーする。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	/* 構造体の型枠の宣言 */
	struct student {
		int no;
		char name[11];
		double height;
		double weight;
	};

	/* 構造体変数の定義 */
	struct student data1, data2;

	/* 入力 */
	printf("コピー元の入力\n");

	printf("番号 ==> ");
	scanf("%d", &data1.no);

	printf("氏名 ==> ");
	scanf("%s", data1.name);

	printf("身長 ==> ");
	scanf("%lf", &data1.height);

	printf("体重 ==> ");
	scanf("%lf", &data1.weight);

	/* 構造体のコピー */
	data2 = data1;

	/* 出力 */
	printf("\nコピー元の生徒\n");
	printf("番号  :  %d\n", data1.no);
	printf("氏名  :  %s\n", data1.name);
	printf("身長  :  %.1f\n", data1.height);
	printf("体重  :  %.1f\n", data1.weight);

	printf("\nコピー先の生徒\n");
	printf("番号  :  %d\n", data2.no);
	printf("氏名  :  %s\n", data2.name);
	printf("身長  :  %.1f\n", data2.height);
	printf("体重  :  %.1f\n", data2.weight);

	return 0;
}

/*
【考察】
構造体の宣言と構造体変数の定義は
一緒にできるが、
可読性を考慮して記述を分けた。

入出力時の演算子の指定にて、
文字配列への入力は、
アドレス演算子が必要無いことに注意する。

構造体変数のコピーは、
構造体タグとメンバの型が
同じでなければならない。
*/