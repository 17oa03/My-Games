/*
�y�v���O�����T�v�z
�g���Ƒ̏d����͂��ABMI�������_�ȉ�2���܂ŏo�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main (void)
{
	double height, weight, bmi;

	printf("�g��(m) ==> "); /*scanf�֐���double�^�ϐ��ɓ��͂���ꍇ�́u%lf�v�ł��B*/
	scanf("%lf", &height);

	printf("�̏d(kg) ==> ");
	scanf("%lf", &weight);

	bmi = weight / (height * height);

	printf("BMI��%5.2f�ł��B\n", bmi); /*printf�֐���double�^���o�͂���ꍇ�́u%f�v�ł��B*/

	return 0;
}

/*
�y���s���ʁz
�g��(m) ==> 1.72
�̏d(kg) ==> 65.8
BMI��22.24�ł��B
*/
