/*
�y�v���O�����T�v�z
�݂���A��񂲁A�o�i�i�̐��ʂ���͂��A
�P���A���ʁA���z�A���v���z���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	int orange, apple, banana, price1, price2, price3, total_price;

	printf("�݂��� ==> ");
	scanf("%d", &orange);

	printf("��� ==> ");
	scanf("%d", &apple);

	printf("�o�i�i ==> ");
	scanf("%d", &banana);

	price1 = 50 * orange;
	price2 = 80 * apple;
	price3 = 120 * banana;
	total_price = price1 + price2 + price3;

	printf(" *** ���i�ꗗ�\ ***  \n");
	printf("���i�� �P�� ����  ���z\n");
	printf("----- ---- ---- ------\n");
	printf("�݂���   50   %d    %d\n", orange, price1);
	printf("���   80   %d    %d\n", apple, price2);
	printf("�o�i�i  120   %d    %d\n", banana, price3);
	printf("       ���v���z   %d\n", total_price);

	return 0;
}

/*
�y���s���ʁz
�݂��� ==> 5
��� ==> 6
�o�i�i ==> 7
*** ���i�ꗗ�\ ***
���i�� �P�� ����  ���z
----- ---- ---- ------
�݂���   50   5    250
���   80   6    480
�o�i�i  120   7    840
       ���v���z   1570
*/