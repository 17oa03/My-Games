/*
�y�v���O�����T�v�z
2�̏���������Ă���z��̊e�v�f����������B
�m�F�̂��ߌ����O�ƌ�����̔z��̗v�f���o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

#define YOUSO 10 /* ������uYOUSO�v�𕶎���u10�v�ɒu�������܂��B */

int main(void)
{
	int array1[YOUSO] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int array2[YOUSO] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
	int temp[YOUSO];
	int i;

	printf("*** �����O ***\n");
	printf("array1 = ");

	for (i = 0; i < YOUSO; i++) {

		printf("%3d", array1[i]); /* �z��ary1�̌����O�̏o�� */
		temp[i] = array1[i]; /* �z��ary1�̃f�[�^��ʂ̔z��tmp�Ɉꎞ�I�ɕۑ�����B */
	}

	printf("\n");
	printf("array2 = ");

	for (i = 0; i < YOUSO; i++) {

		printf("%3d", array2[i]); /* �z��ary2�̌����O�̏o�� */
		array1[i] = array2[i]; /* �z��ary2�̃f�[�^��z��ary1�ɑ������B*/
	}

	printf("\n");
	printf("*** ������ ***\n");
	printf("array1 = ");

	for (i = 0; i < YOUSO; i++) {

		printf("%3d", array1[i]); /* �z��ary1�̌�����̏o�� */
	}

	printf("\n");
	printf("array2 = ");

	for (i = 0; i < YOUSO; i++) {

		array2[i] = temp[i]; /* �ꎞ�I�ɕۑ����Ă����z��ary1�̃f�[�^���������z��temp��z��ary2�ɑ������B */
		printf("%3d", array2[i]); /* �z��ary2�̌�����̏o�� */
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