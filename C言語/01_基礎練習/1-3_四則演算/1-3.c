/*
�y�v���O�����T�v�z
scamf�֐���2�̐�������͂��A�a�A���A�ρA���A�]����v�Z���A�v�Z���ʂ��o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int seisu1, seisu2, kotae1, kotae2, kotae3, kotae4, kotae5;

	printf("1�ڂ̐�������͂��ĉ����� ==> ");
	scanf("%d", &seisu1); /* scanf�֐��ɂ�鐮������ */

	printf("2�ڂ̐�������͂��ĉ����� ==> ");
	scanf("%d", &seisu2); /* scanf�֐��ɂ�鐮������ */

	kotae1 = seisu1 + seisu2; /* ���Z */
	kotae2 = seisu1 - seisu2; /* ���Z */
	kotae3 = seisu1 * seisu2; /* ��Z */
	kotae4 = seisu1 / seisu2; /* ���Z */
	kotae5 = seisu1 % seisu2; /* ��]�Z */

	printf("%d + %d = %3d\n", seisu1, seisu2, kotae1); /* ���Z���ʂ̏o�� */
	printf("%d - %d = %3d\n", seisu1, seisu2, kotae2);
	printf("%d * %d = %3d\n", seisu1, seisu2, kotae3);
	printf("%d / %d = %3d\n", seisu1, seisu2, kotae4);
	printf("%d %% %d = %3d\n", seisu1, seisu2, kotae5);

	return 0;
}

/*
�y���s���ʁz
1�ڂ̐�������͂��ĉ����� ==> 30
2�ڂ̐�������͂��ĉ����� ==> 20
30 + 20 =  50
30 - 20 =  10
30 * 20 = 600
30 / 20 =   1
30 % 20 =  10
*/