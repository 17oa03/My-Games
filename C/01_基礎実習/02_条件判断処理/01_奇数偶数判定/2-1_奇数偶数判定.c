/*
�y�v���O�����T�v�z
��������͂��Aif�����g���Ċ���������𔻒肵���ʂ��o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	int seisu, amari;

	printf("���� ==> ");
	scanf("%d", &seisu);

	amari = seisu % 2;

	if (amari == 1) { /* �uamari�v���u1�v�������ꍇ */

		printf("%d�́A��ł��B\n", seisu);
	}
	else /* ����ȊO�̏ꍇ */
	{

		printf("%d�́A�����ł��B\n", seisu);
	}

	return 0;
}

/*
�y���s����1�z
���� ==> 5
5�́A��ł��B

�y���s����2�z
���� ==> 10000
10000�́A�����ł��B
*/