/*
�y�v���O�����T�v�z
�|�C���^�ϐ����g���ĕW�����͂��f�[�^����͂���B
���̌�A�e�X�̕ϐ��̃A�h���X�A�T�C�Y�A�l���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	char   a;
	int    b;
	float  c;
	double d;

	char   *p_a; /* �|�C���^�ϐ��̐錾 */
	int    *p_b;
	float  *p_c;
	double *p_d;

	p_a = &a; /* �A�h���X�Z�b�g */
	p_b = &b;
	p_c = &c;
	p_d = &d;

	printf("Please input a ==> ");
	scanf("%c", p_a); /* �|�C���^�ϐ��̎Q�Ɛ�ɓ��� */

	printf("Please input b ==> ");
	scanf("%d", p_b); /* �|�C���^�ϐ��̎Q�Ɛ�ɓ��� */

	printf("Please input c ==> ");
	scanf("%f", p_c); /* �|�C���^�ϐ��̎Q�Ɛ�ɓ��� */

	printf("Please input d ==> ");
	scanf("%lf", p_d); /* �|�C���^�ϐ��̎Q�Ɛ�ɓ��� */

	printf("\n�ϐ� �A�h���X �T�C�Y       �l\n"); /* �^�C�g�� */
	printf("---- -------- ------ --------\n");

	printf("a    %p %6d %8c\n",   &a, sizeof a, a); /* �ϐ��̖��O�A�A�h���X�A�T�C�Y�A�l���o�� */
	printf("b    %p %6d %8d\n",   &b, sizeof b, b);
	printf("c    %p %6d %8.3f\n", &c, sizeof c, c);
	printf("d    %p %6d %8.3f\n", &d, sizeof d, d);

	printf("p_a  %p %6d %p\n", &p_a, sizeof p_a, p_a); /* �|�C���^�ϐ��̖��O�A�A�h���X�A�T�C�Y�A�l���o�� */
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
�A�h���X�Z�b�g�Ƃ́A
�|�C���^�ϐ��ɃA�h���X�������邱�ƁB

�u&(�A�h���X���Z�q)�v�́A
�I�y�����h(�퉉�Z�q)�̃A�h���X��^����B

�u*(�Ԑډ��Z�q)�v�́A
�|�C���^����Ēl�ɊԐړI�ɃA�N�Z�X�ł���B

�I�y�����h(�퉉�Z�q)�Ƃ́A
�����\������v�f�̂����A
���Z�q�łȂ����̗v�f�̂��ƁA

if (foo == 10){}

��L�̏ꍇ�ł́A
�ufoo�v�Ɓu10�v��
�I�y�����h(�퉉�Z�q)�ɂȂ�B

�|�C���^�ϐ��̎Q�Ɛ�ɒl����͂���ꍇ�A
scanf�֐��ł́A

-------------------------------------------
scanf("���͕ϊ��w��q", �|�C���^�ϐ�);
-------------------------------------------

�A�h���X���Z�q(&)�̋L�q���K�v�������ɒ��ӂ���B

printf�֐��̏o�͕ϊ��w��q�u%p�v�́A
�|�C���^�̃A�h���X�l��16�i���ŕ\���A
�o�͕ϊ��w��q�u%x�v�́A
unsigned int(�����Ȃ������^)��16�i���ŕ\���A
�|�C���^�̃A�h���X�l���o�͂���ۂ́A
�O�҂ŋL�q���������������B
*/