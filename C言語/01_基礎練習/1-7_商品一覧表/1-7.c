/*
�y�v���O�����T�v�z
�݂���A��񂲁A�o�i�i�̐��ʂ���͂��A�P���A���ʁA���z�A���v���z���o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int orange, apple, banana, total1, total2, total3, fee;

	printf("�݂��� ==> ");
	scanf("%d", &orange);

	printf("��� ==> ");
	scanf("%d", &apple);

	printf("�o�i�i ==> ");
	scanf("%d", &banana);

	total1 = 50 * orange;
	total2 = 80 * apple;
	total3 = 120 * banana;
	fee = total1 + total2 + total3;

	printf(" *** ���i�ꗗ�\ ***  \n");
	printf("���i�� �P�� ����  ���z\n");
	printf("----- ---- ---- -----\n");
	printf("�݂���   50   %d    %d\n", orange, total1);
	printf("���   80   %d    %d\n", apple, total2);
	printf("�o�i�i  120   %d    %d\n", banana, total3);
	printf("       ���v���z   %d\n", fee);

	return 0;
}

/*
�y���s��z
�݂��� ==> 5
��� ==> 6
�o�i�i ==> 7
*** ���i�ꗗ�\ ***
���i�� �P�� ����  ���z
----- ---- ---- -----
�݂���   50   5    250
���   80   6    480
�o�i�i  120   7    840
       ���v���z   1570
*/