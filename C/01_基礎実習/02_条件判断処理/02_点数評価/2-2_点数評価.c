/*
�y�v���O�����T�v�z
�����̓_���𐮐��œ��͂��A�]��(A,B,C,D)���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	int tensu;

	printf("�_�� ==> ");
	scanf("%d", &tensu); /* �_���̓��� */

	if (tensu > 100 || tensu < 0) { /* �����utensu�v���u100�v���傫���A�܂��́u0�v�����̏ꍇ */
		printf("�������l����͂��ĉ������B\n");
	}
	else if (tensu >= 80) { /* �����utensu�v���u80�v�ȏ�̏ꍇ */
		printf("%d�_�A�]���́uA�v�ł��B\n", tensu);
	}
	else if (tensu >= 70) { /* �����utensu�v���u70�v�ȏ�̏ꍇ */
		printf("%d�_�A�]���́uB�v�ł��B\n", tensu);
	}
	else if (tensu >= 60) { /* �����utensu�v���u60�v�ȏ�̏ꍇ */
		printf("%d�_�A�]���́uC�v�ł��B\n", tensu);
	}
	else if (tensu >= 0) { /* �����utensu�v���u0�v�ȏ�̏ꍇ */
		printf("%d�_�A�]���́uD�v�ł��B\n", tensu);
	}

	return 0;
}

/*
�y���s����1�z
�_�� ==> 100
100�_�A�]���́uA�v�ł��B

�y���s����2�z
�_�� ==> 80
80�_�A�]���́uA�v�ł��B

�y���s����3�z
�_�� ==> 70
70�_�A�]���́uB�v�ł��B

�y���s����4�z
�_�� ==> 60
60�_�A�]���́uC�v�ł��B

�y���s����5�z
�_�� ==> 0
0�_�A�]���́uD�v�ł��B

�y���s����6�z
�_�� ==> -1
�������l����͂��ĉ������B

�y���s����7�z
�_�� ==> 101
�������l����͂��ĉ������B
*/