/*
�y�v���O�����T�v�z
2�̏���������Ă���z��̊e�v�f����������B
�m�F�̂��ߌ����O�ƌ�����̔z��̗v�f���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ELEMENT 10 /* ������uELEMENT�v�𕶎���u10�v�Ƀ}�N���u�� */

int main(void)
{
	int array1[ELEMENT] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }; /* �z��̏����� */
	int array2[ELEMENT] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };

	int tmp[ELEMENT]; /* �ꎞ�I�Ƀf�[�^��ۑ�����z�� */

	int i; /* �J�E���^�ϐ� */

	printf("*** �����O ***\n");
	printf("array1 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", array1[i]); /* �z��uarray1�v�̌����O�̏o�� */
		tmp[i] = array1[i]; /* �z��uarray1�v�̃f�[�^��ʂ̔z��utmp�v�ɑ�� */
	}

	printf("\n");
	printf("array2 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", array2[i]); /* �z��uarray2�v�̌����O�̏o�� */
		array1[i] = array2[i]; /* �z��uarray2�v�̃f�[�^��z��uarray1�v�ɑ�� */
	}

	printf("\n");
	printf("*** ������ ***\n");
	printf("array1 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", array1[i]); /* �z��uarray1�v�̌�����̏o�� */
	}

	printf("\n");
	printf("array2 = ");

	for (i = 0; i < ELEMENT; i++) {

		array2[i] = tmp[i]; /* �z��utmp�v�̃f�[�^��z��uarray2�v�ɑ�� */
		printf("%3d", array2[i]); /* �z��uarray2�v�̌�����̏o�� */
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