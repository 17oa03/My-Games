/*
�y�v���O�����T�v�z
1������͂��������܂ł̍��v���v�Z���A
while����p���č��v���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	int seisu1, seisu2;
	int gokei = 0;

	printf("���� ==> ");
	scanf("%d", &seisu1); /* ���� */

	seisu2 = seisu1; /* ��� */

	while (seisu2 != 0) { /* seisu2 �� 0 �ɂȂ�܂Ń��[�v */

		gokei += seisu2; /* �ugokei = gokei + seisu2;�v�Ɠ��� */

		seisu2--; /* seisu2 ���f�N�������g(-1) */
	}

	printf("1 ���� %d �܂ł̍��v�� %d �ł��B\n", seisu1, gokei);

	return 0;
}

/*
�y���s����1�z
���� ==> 1
1 ���� 1 �܂ł̍��v�� 1 �ł��B

�y���s����2�z
���� ==> 25
1 ���� 25 �܂ł̍��v�� 325 �ł��B

�y���s����3�z
���� ==> 65535
1 ���� 65535 �܂ł̍��v�� 2147450880 �ł��B
*/