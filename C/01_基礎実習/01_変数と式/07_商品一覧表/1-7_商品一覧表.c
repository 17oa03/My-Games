/*
【プログラム概要】
みかん、りんご、バナナの数量を入力し、
単価、数量、金額、合計金額を出力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int orange, apple, banana, price1, price2, price3, total_price;

	printf("みかん ==> ");
	scanf("%d", &orange);

	printf("りんご ==> ");
	scanf("%d", &apple);

	printf("バナナ ==> ");
	scanf("%d", &banana);

	price1 = 50 * orange;
	price2 = 80 * apple;
	price3 = 120 * banana;
	total_price = price1 + price2 + price3;

	printf(" *** 商品一覧表 ***  \n");
	printf("商品名 単価 数量  金額\n");
	printf("----- ---- ---- ------\n");
	printf("みかん   50   %d    %d\n", orange, price1);
	printf("りんご   80   %d    %d\n", apple, price2);
	printf("バナナ  120   %d    %d\n", banana, price3);
	printf("       合計金額   %d\n", total_price);

	return 0;
}

/*
【実行結果】
みかん ==> 5
りんご ==> 6
バナナ ==> 7
*** 商品一覧表 ***
商品名 単価 数量  金額
----- ---- ---- ------
みかん   50   5    250
りんご   80   6    480
バナナ  120   7    840
       合計金額   1570
*/