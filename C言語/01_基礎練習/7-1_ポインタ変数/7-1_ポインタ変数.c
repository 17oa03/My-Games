/*
�y�v���O�����T�v�z
�|�C���^�ϐ����g���ĕW�����͂��f�[�^����͂���B
���̌�A�e�X�̕ϐ��̃A�h���X�A�T�C�Y�A�l���o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>


int main(void)
{
	/* ���[�J���ϐ��̒�` */
	char a;
	int b;
	float c;
	double d;

	/* �|�C���^�ϐ��̒�` */
	char *p_a;
	int *p_b;
	float *p_c;
	double *p_d;

	/* �A�h���X�Z�b�g */
	p_a = &a;
	p_b = &b;
	p_c = &c;
	p_d = &d;

	/* ���͂̏��� */
	printf("Please input a ==> ");
	scanf("%c", p_a);

	printf("Please input b ==> ");
	scanf("%d", p_b);

	printf("Please input c ==> ");
	scanf("%f", p_c);

	printf("Please input d ==> ");
	scanf("%lf", p_d);

	printf("\n�ϐ� �A�h���X �T�C�Y       �l\n");
	printf("---- -------- ------ --------\n");

	/* ���[�J���ϐ��̏�� */
	printf("a    %p %6d %8c\n", &a, sizeof a, a);
	printf("b    %p %6d %8d\n", &b, sizeof b, b);
	printf("c    %p %6d %8.3f\n", &c, sizeof c, c);
	printf("d    %p %6d %8.3f\n", &d, sizeof d, d);

	/* �|�C���^�ϐ��̏�� */
	printf("p_a  %p %6d %p\n", &p_a, sizeof p_a, p_a);
	printf("p_b  %p %6d %p\n", &p_b, sizeof p_b, p_b);
	printf("p_c  %p %6d %p\n", &p_c, sizeof p_c, p_c);
	printf("p_d  %p %6d %p\n", &p_d, sizeof p_d, p_d);

	return 0;
}

/*
�y���s���ʁz
Please input a ==> k
Please input b ==> 10000
Please input c ==> 123.456
Please input d ==> 1000.123

�ϐ� �A�h���X �T�C�Y       �l
---- -------- ------ --------
a    0093FD87      1        k
b    0093FD78      4    10000
c    0093FD6C      4  123.456
d    0093FD5C      8 1000.123
p_a  0093FD50      4 0093FD87
p_b  0093FD44      4 0093FD78
p_c  0093FD38      4 0093FD6C
p_d  0093FD2C      4 0093FD5C
*/

/*
�y�����z
�A�h���X���Z�q�u&�v�̓I�y�����h�̃A�h���X��^����A
�Ԑډ��Z�q�u*�v�̓|�C���^����Ēl���ԐړI�ɃA�N�Z�X����B
�I�y�����h�Ƃ́A
�����\������v�f�̓��A
���Z�q�łȂ����̗v�f�A
�܂�A���ɓo�ꂷ�鐔�l��ϐ��Ȃǂ̂��Ƃł��B
*/