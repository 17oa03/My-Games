/*
�y�v���O�����T�v�z
2�̐�������͂��A
�f�[�^���������o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

/* �f�[�^��������֐� */
void swap(int *, int *);

int main(void)
{
	/* ���[�J���ϐ��Ɣz��̒�` */
	int input1, input2;

	/* ���͏��� */
	printf("����1 ==> ");
	scanf("%d", &input1);

	printf("����2 ==> ");
	scanf("%d", &input2);

	/* ������ : &input1, &input2 | �߂�l : �Ȃ�*/
	swap(&input1, &input2);

	printf("\n������\n");
	printf("���� = %d\n", input1);
	printf("���� = %d\n", input2);

	return 0;
}

/* ������ : int *p_input1, int *p_input2 */
void swap(int *p_input1, int *p_input2) 
{
	int temp;

	/* �f�[�^�����̏��� */
	temp = *p_input1;
	*p_input1 = *p_input2;
	*p_input2 = temp;

	/* �߂�l : �Ȃ� */
	return;
}

/*
�y���s���ʁz
����1 ==> 300
����2 ==> 700

������
���� = 700
���� = 300
*/

/*
�y�����z
�������ł̓A�h���X���Z�q�A
�������ł͊Ԑډ��Z�q���g�p���Ă���B
*/