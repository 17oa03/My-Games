/*
【プログラム概要】
構造体変数を2つ定義し、
1つ目の構造体変数にデータを入力する。
入力後に1つ目の構造体変数のデータを
2つ目の構造体変数にコピーする。
*/

/*【プログラム】*/
#include <stdio.h>

/* 構造体の型枠の宣言 */
struct student {
	int    no;       /* 番号 */
	char   name[11]; /* 氏名 */
	double height;   /* 身長 */
	double weight;   /* 体重 */
};

int main(void)
{
	/* 構造体変数の定義 */
	struct student data1, data2;

	/* 入力 */
	printf("コピー元の入力\n");

	printf("番号 ==> ");
	scanf("%d",  &data1.no);

	printf("氏名 ==> ");
	scanf("%s",   data1.name);

	printf("身長 ==> ");
	scanf("%lf", &data1.height);

	printf("体重 ==> ");
	scanf("%lf", &data1.weight);

	/* 構造体のコピー */
	data2 = data1;

	/* 出力 */
	printf("\nコピー元の生徒\n");
	printf("番号  :  %d\n",   data1.no);
	printf("氏名  :  %s\n",   data1.name);
	printf("身長  :  %.1f\n", data1.height);
	printf("体重  :  %.1f\n", data1.weight);

	printf("\nコピー先の生徒\n");
	printf("番号  :  %d\n",   data2.no);
	printf("氏名  :  %s\n",   data2.name);
	printf("身長  :  %.1f\n", data2.height);
	printf("体重  :  %.1f\n", data2.weight);

	return 0;
}

/*
【出力結果】
コピー元の入力
番号 ==> 57
氏名 ==> 東京太郎
身長 ==> 173.4
体重 ==> 56.7

コピー元の生徒
番号  :  57
氏名  :  東京太郎
身長  :  173.4
体重  :  56.7

コピー先の生徒
番号  :  57
氏名  :  東京太郎
身長  :  173.4
体重  :  56.7
*/

/*
【考察】
構造体変数のコピーは、
代入文で簡単にできる。

構造体変数1 = 構造体変数2 ;

注意点として、
「構造体タグ」が異なる変数同士では、
型が異なるので代入はできない。

また、
各データ型の占有するメモリ領域は
以下のように割り当てられる。

char   = 1byte
int    = 4byte
float  = 4byte
double = 8byte

基本的に構造体の宣言は、
他プログラマと共有ができるように、
外部で宣言する。
*/