/*
�y�v���O�����T�v�z
�g���Ƒ̏d����͂��A
�|�C���^�ϐ����g�p���āA
BMI�������_�ȉ�2���܂ŏo�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	/* ���[�J���ϐ��̒�` */
	double height, body_weight, bmi;

	/* �|�C���^�ϐ��̒�` */
	double *p_height, *p_body_weight, *p_bmi;

	/* �A�h���X�Z�b�g */
	p_height = &height;
	p_body_weight = &body_weight;
	p_bmi = &bmi;

	/* �g���̓��� */
	printf("�g��(m) ==> ");
	scanf("%lf", p_height);

	/* �̏d�̓��� */
	printf("�̏d(kg) ==> ");
	scanf("%lf", p_body_weight);
	
	/* �Ԑډ��Z�q�ŃA�N�Z�X��̒l���Q�Ƃ��Čv�Z���� */
	*p_bmi = *p_body_weight / (*p_height * *p_height);

	/* BMI�̏o�� */
	printf("BMI�� %.2f �ł��B\n", *p_bmi);

	return 0;
}

/*
�y���s����1�z
�g��(m) ==> 1.72
�̏d(kg) ==> 65.8
BMI�� 22.24 �ł��B

�y���s����2�z
�g��(m) ==> 1.8
�̏d(kg) ==> 55.5
BMI�� 17.13 �ł��B
*/