/*
�y�v���O�����T�v�z
�������ς�2�����z��̍s�Ɨ��ϊ����A
�ʂ�2�����z��ŏo�́B

���ϊ��O�ƕϊ���̗v�f���o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

#define ROW 3 /* �ϊ��O�̍s(�c,y)�̗v�f���ł��B */
#define COLUMN 5 /* �ϊ��O�̗�(��,x)�̗v�f���ł��B */

int main(void)
{
	int array1[ROW][COLUMN] = {
		{  1,  2,  3,  4,  5 },
		{  6,  7,  8,  9, 10 },
		{ 11, 12, 13, 14, 15 },
	};

	int array2[COLUMN][ROW];
	int i, j;

	printf("*** �ϊ��O array1[%d][%d] ***\n", ROW, COLUMN); /* �}�N���萔��printf�֐��ŏo�͂ł���B */

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COLUMN; j++) { /*[0][0]��[0][1]��[0][2]�ƌJ��Ԃ��A2�����z��̗v�f��S�ĎQ�Ƃł���B */

			printf("%3d", array1[i][j]);
			array2[j][i] = array1[i][j]; /* 2�����z��̓Y�����w�肵�Ă���J�E���^�ϐ�����ꊷ����B */
		}

		printf("\n");
	}

	printf("\n");
	printf("*** �ϊ��� array2[%d][%d] ***\n", COLUMN, ROW);

	for (i = 0; i < COLUMN; i++) {
		for (j = 0; j < ROW; j++) {

			printf("%3d", array2[i][j]);
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

/*
�y�s������z
int array2[ROW][COLUMN]�Ə����Ă����ׁA
�z��̋������Y���͈͂𒴂��đ�����Ă����A
��L�̏ꍇ�A���L�̃f�o�b�O�G���[�����������B

Run-Time Check Failure #2 - Stack around the variable 'array1' was corrupted.

int array2[COLUMN][ROW]�Ə��������A
�s����C�������B
*/