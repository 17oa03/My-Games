/*
�y�v���O�����T�v�z
�\���̕ϐ���2��`���A
1�ڂ̍\���̕ϐ��Ƀf�[�^����͂���B
���͌��1�ڂ̍\���̕ϐ��̃f�[�^��
2�ڂ̍\���̕ϐ��ɃR�s�[����B
*/

/*�y�v���O�����z*/
#include <stdio.h>

/* �\���̂̌^�g�̐錾 */
struct student {
	int    no;       /* �ԍ� */
	char   name[11]; /* ���� */
	double height;   /* �g�� */
	double weight;   /* �̏d */
};

int main(void)
{
	/* �\���̕ϐ��̒�` */
	struct student data1, data2;

	/* ���� */
	printf("�R�s�[���̓���\n");

	printf("�ԍ� ==> ");
	scanf("%d", &data1.no);

	printf("���� ==> ");
	scanf("%s", data1.name);

	printf("�g�� ==> ");
	scanf("%lf", &data1.height);

	printf("�̏d ==> ");
	scanf("%lf", &data1.weight);

	/* �\���̂̃R�s�[ */
	data2 = data1;

	/* �o�� */
	printf("\n�R�s�[���̐��k\n");
	printf("�ԍ�  :  %d\n", data1.no);
	printf("����  :  %s\n", data1.name);
	printf("�g��  :  %.1f\n", data1.height);
	printf("�̏d  :  %.1f\n", data1.weight);

	printf("\n�R�s�[��̐��k\n");
	printf("�ԍ�  :  %d\n", data2.no);
	printf("����  :  %s\n", data2.name);
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
��{�I�ɍ\���̂̐錾�́A
���̃v���O���}�Ƌ��L�ł���悤�ɁA
�O���Ő錾����B

�\���̕ϐ��̒�`�́A
��Ђ̃��[���ɂ���ĕς��A
����͓����Ő錾���Ă���B

���o�͎��̉��Z�q�̎w��ɂāA
�����z��ւ̓��͂́A
�A�h���X���Z�q���K�v�������Ƃɒ��ӂ���B

�\���̕ϐ��̃R�s�[�́A
�\���̃^�O�ƃ������̈悪
�����łȂ���΂Ȃ�Ȃ��B

char   = 1byte
int    = 4byte
float  = 4byte
double = 8byte
*/