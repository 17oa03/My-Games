/*
�y�v���O�����T�v�z
�\���̕ϐ���2��`���A
1�ڂ̍\���̕ϐ��Ƀf�[�^����͂���B
���͌��1�ڂ̍\���̕ϐ��̃f�[�^��
2�ڂ̍\���̕ϐ��ɃR�s�[����B
*/

/*�y�v���O�����z*/
#include <stdio.h>

struct student { /* �\���̂̐錾 */
	int    no;       /* �ԍ� */
	char   name[11]; /* ���� */
	double height;   /* �g�� */
	double weight;   /* �̏d */
};

int main(void)
{
	struct student data1, data2; /* �\���̕ϐ��̒�` */

	printf("�R�s�[���̓���\n");

	printf("�ԍ� ==> ");
	scanf("%d",  &data1.no); /* ���� */

	printf("���� ==> ");
	scanf("%s",   data1.name); /* ���� */

	printf("�g�� ==> ");
	scanf("%lf", &data1.height); /* ���� */

	printf("�̏d ==> ");
	scanf("%lf", &data1.weight); /* ���� */

	data2 = data1; /* �\���̂̃R�s�[ */

	printf("\n�R�s�[���̐��k\n");
	printf("�ԍ�  :  %d\n",   data1.no); /* �o�� */
	printf("����  :  %s\n",   data1.name);
	printf("�g��  :  %.1f\n", data1.height);
	printf("�̏d  :  %.1f\n", data1.weight);

	printf("\n�R�s�[��̐��k\n");
	printf("�ԍ�  :  %d\n",   data2.no); /* �o�� */
	printf("����  :  %s\n",   data2.name);
	printf("�g��  :  %.1f\n", data2.height);
	printf("�̏d  :  %.1f\n", data2.weight);

	return 0;
}

/*
�y�o�͌��ʁz
�R�s�[���̓���
�ԍ� ==> 57
���� ==> �������Y
�g�� ==> 173.4
�̏d ==> 56.7

�R�s�[���̐��k
�ԍ�  :  57
����  :  �������Y
�g��  :  173.4
�̏d  :  56.7

�R�s�[��̐��k
�ԍ�  :  57
����  :  �������Y
�g��  :  173.4
�̏d  :  56.7
*/

/*
�y�l�@�z
�\���̕ϐ��̃R�s�[�́A
������ŊȒP�ɂł���B

�\���̕ϐ�1 = �\���̕ϐ�2 ;

���ӓ_�Ƃ��āA
�u�\���̃^�O�v���قȂ�ϐ����m�ł́A
�^���قȂ�̂ő���͂ł��Ȃ��B

�܂��A
�e�f�[�^�^�̐�L���郁�����̈��
�ȉ��̂悤�Ɋ��蓖�Ă���B

char   = 1byte
int    = 4byte
float  = 4byte
double = 8byte

��{�I�ɍ\���̂̐錾�́A
���v���O���}�Ƌ��L���ł���悤�ɁA
�O���Ő錾����B
*/