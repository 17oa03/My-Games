/*
�y�v���O�����T�v�z
�\���̕ϐ���2��`���A
1�ڂ̍\���̕ϐ��Ƀf�[�^����͂���B
���͌��1�ڂ̍\���̕ϐ��̃f�[�^��
2�ڂ̍\���̕ϐ��ɃR�s�[����B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	/* �\���̂̌^�g�̐錾 */
	struct student {
		int no;
		char name[11];
		double height;
		double weight;
	};

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
�y�l�@�z
�\���̂̐錾�ƍ\���̕ϐ��̒�`��
�ꏏ�ɂł��邪�A
�ǐ����l�����ċL�q�𕪂����B

���o�͎��̉��Z�q�̎w��ɂāA
�����z��ւ̓��͂́A
�A�h���X���Z�q���K�v�������Ƃɒ��ӂ���B

�\���̕ϐ��̃R�s�[�́A
�\���̃^�O�ƃ����o�̌^��
�����łȂ���΂Ȃ�Ȃ��B
*/