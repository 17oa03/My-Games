/*
�y�v���O�����T�v�z
2�̐�������͂��A
�f�[�^���������o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

void swap(int *, int *); /* �f�[�^��������֐� */

int main(void)
{
	int input1, input2;

	printf("����1 ==> ");
	scanf("%d", &input1);

	printf("����2 ==> ");
	scanf("%d", &input2);

	swap(&input1, &input2); /* �������́u&input1, &input2�v�A�߂�l�́u�����v*/

	printf("\n������\n");
	printf("���� = %d\n", input1);
	printf("���� = %d\n", input2);

	return 0;
}

void swap(int *p_input1, int *p_input2) /* �������́uint *p_input1, int *p_input2�v */
{
	int temp;

	temp = *p_input1; /* �f�[�^�����̏��� */
	*p_input1 = *p_input2;
	*p_input2 = temp;

	return; /* �߂�l�́u�Ȃ��v */
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
�y�l�@�z
�T�u���[�`���ɃA�h���X��n���A
�|�C���^�ϐ��ƊԐډ��Z�q���g���āA
�f�[�^�������s���Ă���B

����ɂ��A
�߂�l�������Ă��A
�f�[�^�����̏������\�ƂȂ��Ă���B
*/