/*
�y�v���O�����T�v�z
���a����͂��A
�ʂ̖ʐς������_�ȉ���2�ʂ܂ŏo�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int    Input(void);         /* ���a���� */
double Calculate(int);      /* �ʐόv�Z */
void   Output(int, double); /* ���a�Ɩʐς̏o�� */

int main(void)
{
	int radius; /* ���a */

	double area; /* �ʐ� */

	radius = Input(); /* �������́u�����v�A�߂�l�́uradius�v */

	area = Calculate(radius); /* �������́uradius�v�A�߂�l�́uarea�v */

	Output(radius, area); /* �������́uradius, area�v�A�߂�l�́u�����v */

	return 0;
}

int Input(void) /* �T�u���[�`�� �A�������́u�����v */
{
	int radius; /* ���a */

	printf("���a ==> ");
	scanf("%d", &radius); /* ���a���� */

	return radius; /* �߂�l�́uradius�v */
}

double Calculate(int radius) /* �T�u���[�`���̒�`�A�������́uradius�v */
{
	double area; /* �ʐ� */

	area = (double)radius * radius * 3.14; /* �ʐς̌v�Z */

	return area; /* �߂�l�́uarea�v */
}

void Output(int radius, double area) /* �T�u���[�`���̒�`�A�������́uarea�v */
{
	printf("���a %d �̉~�̖ʐς� %.2f �ł��B\n", radius, area);

	return; /* �߂�l�́u�����v */
}

/*
�y���s����1�z
���a ==> 12
���a 12 �̉~�̖ʐς� 452.16 �ł��B

�y���s����2�z
���a ==> 10
���a 10 �̉~�̖ʐς� 314.00 �ł��B
*/

/*
�y�l�@�z
�����Ɩ߂�l�̃f�[�^�^�ɒ��ӂ��Ȃ���
�v���O�������L�q����K�v������B

�߂�l�������֐��̃v���O�����Ɋւ��āA
�ureturn;(�v���O�����̏I���R�[�h)�v�̋L�q�������Ă�
�v���O�����͓��삷�邪�A
�u�����߂��v�Ƃ����Ӗ���
���@�I�ɂ͋L�q���K�v�ɂȂ�B

�܂��A
�ureturn;(�v���O�����̏I���R�[�h)�v�̋L�q�������ꍇ�́A
�T�u���[�`�������삵���܂܂ɂȂ��Ă��܂��Ƃ������R�ŁA
�L�q�͕K�v�ɂȂ�B
*/