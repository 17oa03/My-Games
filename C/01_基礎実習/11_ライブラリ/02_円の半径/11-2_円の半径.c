/*
�y�v���O�����T�v�z
�~�̖ʐς�蔼�a�����߂�B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <math.h> /* ���w�֐� */

#define M_PI 3.14159265358979 /* �~���� */

int main(void)
{
	double circle_area; /* �~�̖ʐ� */
	double radius; /* ���a */

	printf("�~�̖ʐ� ==> ");
	scanf("%lf", &circle_area); /* ���� */

	radius = sqrt(circle_area / M_PI); /* ���a�����߂�v�Z */

	printf("���a = %.2f\n", radius); /* �o�� */

	return 0;
}

/*
�y���s����1�z
�~�̖ʐ� ==> 78.5
���a = 5.00

�y���s����2�z
�~�̖ʐ� ==> 200
���a = 7.98
*/

/*
�y�l�@�z
sqrt�֐��́A
�����̕��������v�Z���A
���ʂ�double�^�ŕԂ��B
*/