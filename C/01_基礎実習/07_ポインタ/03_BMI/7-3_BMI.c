/*
�y�v���O�����T�v�z
�g���Ƒ̏d����͂��A
�|�C���^�ϐ����g�p���āA
BMI�������_�ȉ�2���܂ŏo�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	double height, body_weight, bmi; /* �ϐ��̒�` */

	double *p_height, *p_body_weight, *p_bmi; /* �|�C���^�ϐ��̐錾 */

	p_height = &height; /* �A�h���X�Z�b�g */
	p_body_weight = &body_weight;
	p_bmi = &bmi;

	printf("�g��(m) ==> "); /* �g���̓��� */
	scanf("%lf", p_height);

	printf("�̏d(kg) ==> "); /* �̏d�̓��� */
	scanf("%lf", p_body_weight);
	
	*p_bmi = *p_body_weight / (*p_height * *p_height); /* �Ԑډ��Z�q�ŃA�N�Z�X��̒l���Q�Ƃ��Čv�Z���� */

	printf("BMI�� %.2f �ł��B\n", *p_bmi); /* BMI�̏o�� */

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

/*
�y�l�@�z
�u7-2_�|�C���^���g�������Z�v�̉��p�ɂȂ�B
*/