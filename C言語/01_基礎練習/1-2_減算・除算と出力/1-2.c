/*
�y�v���O�����T�v�z
int�^�̐�����4�p�ӂ��A���̌v�Z�����Čv�Z���ʂ��o�͂���B
1�ڂ̐��� - 2�ڂ̐��� �� 3�ڂ̐���
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int seisu1 = 10; /* �ϐ��̒�`�Ə����� */
	int seisu2 = 6;
	int seisu3 = 3;
	int kotae;

	kotae = seisu1 - seisu2 / seisu3; /* ���Z���ʂ��ukotae�v�ɑ������ */

	printf("%d - %d / %d = %d\n", seisu1, seisu2, seisu3, kotae); /* ���Z���ʂ̏o�� */

	return 0;
}

/*
�y���s��z
10 - 6 / 3 = 8
*/