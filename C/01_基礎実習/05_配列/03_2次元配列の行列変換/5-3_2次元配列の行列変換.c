/*
�y�v���O�����T�v�z
�������ς�2�����z��̍s�Ɨ��ϊ����A
�ʂ�2�����z��ŏo�́B

���ϊ��O�ƕϊ���̗v�f���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ROW 3    /* �s�̗v�f�� */
#define COLUMN 5 /* ��̗v�f�� */

int main(void)
{
	int array1[ROW][COLUMN] = { /* 2�����z��̏����� */
		{  1,  2,  3,  4,  5 },
		{  6,  7,  8,  9, 10 },
		{ 11, 12, 13, 14, 15 },
	};

	int array2[COLUMN][ROW]; /* �z��uarray1�v�Ƌt�̗v�f��������2�����z�� */

	int i, j; /* �J�E���^�ϐ� */

	printf("*** �ϊ��O array1[%d][%d] ***\n", ROW, COLUMN); /* �}�N���萔��printf�֐��ŏo�� */

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COLUMN; j++) { /* [0][0]��[0][1]��[0][2]�ƃ��[�v�A2�����z��̗v�f��S�ĎQ�Ƃł��� */

			printf("%3d", array1[i][j]); /* �s��ϊ��O�̏o�� */

			array2[j][i] = array1[i][j]; /* �s��ϊ����� */
		}

		printf("\n");
	}

	printf("\n");
	printf("*** �ϊ��� array2[%d][%d] ***\n", COLUMN, ROW);

	for (i = 0; i < COLUMN; i++) {
		for (j = 0; j < ROW; j++) {

			printf("%3d", array2[i][j]); /* �s��ϊ���̏o�� */
		}

		printf("\n");
	}

	return 0;
}

/*
�y���s���ʁz
*** �ϊ��O array1[3][5] ***
1  2  3  4  5
6  7  8  9 10
11 12 13 14 15

*** �ϊ��� array2[5][3] ***
1  6 11
2  7 12
3  8 13
4  9 14
5 10 15
*/