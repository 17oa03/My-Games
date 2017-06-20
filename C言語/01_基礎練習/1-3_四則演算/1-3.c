/*
【プログラム概要】
scamf関数で2つの整数を入力し、和、差、積、商、余りを計算し、計算結果を出力する。
*/

/*
【プログラム】
*/
#include <stdio.h>

int main(void)
{
	int seisu1, seisu2, kotae1, kotae2, kotae3, kotae4, kotae5;

	printf("1つ目の整数を入力して下さい ==> ");
	scanf("%d", &seisu1); /* scanf関数による整数入力 */

	printf("2つ目の整数を入力して下さい ==> ");
	scanf("%d", &seisu2); /* scanf関数による整数入力 */

	kotae1 = seisu1 + seisu2; /* 加算 */
	kotae2 = seisu1 - seisu2; /* 減算 */
	kotae3 = seisu1 * seisu2; /* 乗算 */
	kotae4 = seisu1 / seisu2; /* 除算 */
	kotae5 = seisu1 % seisu2; /* 剰余算 */

	printf("%d + %d = %3d\n", seisu1, seisu2, kotae1); /* 演算結果の出力 */
	printf("%d - %d = %3d\n", seisu1, seisu2, kotae2);
	printf("%d * %d = %3d\n", seisu1, seisu2, kotae3);
	printf("%d / %d = %3d\n", seisu1, seisu2, kotae4);
	printf("%d %% %d = %3d\n", seisu1, seisu2, kotae5);

	return 0;
}

/*
【実行結果】
1つ目の整数を入力して下さい ==> 30
2つ目の整数を入力して下さい ==> 20
30 + 20 =  50
30 - 20 =  10
30 * 20 = 600
30 / 20 =   1
30 % 20 =  10
*/