/*
�y�v���O�����T�v�z
2�̏���������Ă���z��̊e�v�f��
�|�C���^�ϐ����g�p���Č�������B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

/* �}�N���萔�̒�` */
#define YOUSO 10

int main(void)
{
	/* ���[�J���ϐ��Ɣz��̒�` */
	int array1[YOUSO] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int array2[YOUSO] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
	int temp[YOUSO];
	int i;

	/* �|�C���^�ϐ��̒�` */
	int *p_array1;
	int *p_array2;
	int *p_temp;

	/* �A�h���X�Z�b�g */
	p_array1 = array1; /* �z��̐擪�A�h���X���Z�b�g���Ă��܂��B */
	p_array2 = array2;
	p_temp = temp;

	printf("*** �����O ***\n");
	printf("array1 = ");

	/* �����O�̔z��array1�̏o�͂ƁA�z��temp�ւ̑�� */
	for (i = 0; i < YOUSO; i++) {

		printf("%3d", *(p_array1 + i));
		*(p_temp + i) = *(p_array1 + i);
	}

	printf("\n");
	printf("array2 = ");

	/* �����O�̔z��array2�̏o�͂ƁA�z��array1�ւ̑�� */
	for (i = 0; i < YOUSO; i++) {

		printf("%3d", *(p_array2 + i));
		*(p_array1 + i) = *(p_array2 + i);
	}
	
	printf("\n*** ������ ***\n");
	printf("array1 = ");

	/* ������̔z��array1�̏o�� */
	for (i = 0; i < YOUSO; i++) {

		printf("%3d", *(p_array1 + i));
	}

	printf("\n");
	printf("array2 = ");

	/* ������ɔz��array2�̏o�� */
	for (i = 0; i < YOUSO; i++) {

		*(p_array2 + i) = *(p_temp + i);
		printf("%3d", *(p_array2 + i));
	}
	
	printf("\n");

	return 0;
}

/*
�y���s���ʁz
*** �����O ***
array1 =   2  4  6  8 10 12 14 16 18 20
array2 =   3  6  9 12 15 18 21 24 27 30
*** ������ ***
array1 =   3  6  9 12 15 18 21 24 27 30
array2 =   2  4  6  8 10 12 14 16 18 20
*/

/*
�y�����z
�ui�v�Ɓu1�v���ԈႦ�₷���̂Œ��ӁI
*/