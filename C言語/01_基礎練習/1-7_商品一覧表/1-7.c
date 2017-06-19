/*
【プログラム概要】
みかん、りんご、バナナの数量を入力し、単価、数量、金額、合計金額を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	int orange, apple, banana, total1, total2, total3, fee;

	printf("みかん ==> ");
	scanf("%d", &orange);

	printf("りんご ==> ");
	scanf("%d", &apple);

	printf("バナナ ==> ");
	scanf("%d", &banana);

	total1 = 50 * orange;
	total2 = 80 * apple;
	total3 = 120 * banana;
	fee = total1 + total2 + total3;

	printf(" *** 商品一覧表 ***  \n");
	printf("商品名 単価 数量  金額\n");
	printf("----- ---- ---- -----\n");
	printf("みかん   50   %d    %d\n", orange, total1);
	printf("りんご   80   %d    %d\n", apple, total2);
	printf("バナナ  120   %d    %d\n", banana, total3);
	printf("       合計金額   %d\n", fee);

	return 0;
}

/*
【実行例】
みかん ==> 5
りんご ==> 6
バナナ ==> 7
*** 商品一覧表 ***
商品名 単価 数量  金額
----- ---- ---- -----
みかん   50   5    250
りんご   80   6    480
バナナ  120   7    840
       合計金額   1570
*/