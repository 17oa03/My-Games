/*
�y�v���O�����T�v�z
���_�C���N�V�������͂ɂ��z��Ƀf�[�^���i�[���A
�z��̗v�f���Ə��ɕ��בւ���B

�����ёւ���O�ƌ���o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

#define YOUSO 10

int main(void)
{
	int array[YOUSO];
	int temp;
	int i, j;
	int input;
	int input_count = 0;
	int end_flag;
	int sort_flag = 1;

	printf("*** �\�[�g�O ***\n");

	end_flag = scanf("%d", &input);

	for (i = 0; end_flag != EOF; i++) {

		array[i] = input;
		printf("%4d", array[i]);
		end_flag = scanf("%d", &input);
		input_count += 1;
	}

	printf("\n");

	/* �o�u���\�[�g */
	for (i = 0; i < input_count && sort_flag == 1; i++) {

		sort_flag = 0;

		/* ��납��1�O�̗v�f���r���Ă����܂��B */
		for (j = input_count - 2; j >= i; j--) {

			if (array[j] > array[j + 1]) {

				/* ���ꊷ������ */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* ���ꊷ�������������ꍇ�́A�t���O��ON�ɂ��܂��B */
				sort_flag = 1;
			}
		}
	}

	printf("*** �\�[�g�� ***\n");

	for (i = 0; i < input_count; i++) {

		printf("%4d", array[i]);
	}

	printf("\n");

	return 0;
}

/*
�y���s���ʁz
*** �\�[�g�O ***
  50  22  65  10  90  33  45  51  80  74
*** �\�[�g�� ***
  10  22  33  45  50  51  65  74  80  90
*/

/*
�y�����z
�o�u���\�[�g�̗����ɂ́A
�ł炸�������Ǝ��Ԃ������ăg���[�X����Ɨǂ��B
*/