/*
�y�v���O�����T�v�z
�����^�̕ϐ���2�p�ӁA
���ꂼ��ɐ������͂��A
1�ڂ̐���(�폜��)��2�ڂ̐���(����)�Ŋ��������Ɨ]����o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	int seisu1, seisu2, syo, amari;

	printf("�폜�� ==> ");
	scanf("%d", &seisu1);

	printf("���� ==> ");
	scanf("%d", &seisu2);

	if (seisu2 == 0) { /* �����������u0�v�������ꍇ */
		printf("%d�Ŋ��邱�Ƃ͂ł��܂���B\n", seisu2);
	}
	else
	{
		syo = seisu1 / seisu2;   /* ���̌v�Z */
		amari = seisu1 % seisu2; /* �]��̌v�Z */

		if (amari == 0) { /* �����]�肪�u0�v�������ꍇ */
			printf("%d / %d = %d\n", seisu1, seisu2, syo);
		}
		else /* ����ȊO�̏ꍇ */
		{
			printf("%d / %d = %d ... %d\n", seisu1, seisu2, syo, amari);
		}
	}

	return 0;
}

/*
�y���s����1�z
�폜�� ==> 7
���� ==> 2
7 / 2 = 3 ... 1

�y���s����2�z
�폜�� ==> 6
���� ==> 2
6 / 2 = 3

�y���s����3�z
�폜�� ==> 5
���� ==> 0
0�Ŋ��邱�Ƃ͂ł��܂���B

�y���s����4�z
�폜�� ==> 0
���� ==> 3
0 / 3 = 0
*/