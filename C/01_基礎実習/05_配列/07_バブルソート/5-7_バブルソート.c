/*
�y�v���O�����T�v�z
���_�C���N�V�������͂ɂ��z��Ƀf�[�^���i�[���A
�z��̗v�f���Ə��ɕ��בւ���B

�����ёւ���O�ƌ���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ELEMENT 10 /* ������uELEMENT�v�𕶎���u10�v�Ƀ}�N���u�� */

int main(void)
{
	int array[ELEMENT]; /* �z��̐錾 */

	int temp; /* �ꎞ�I�Ƀf�[�^��ۑ�����ϐ� */

	int i, j; /* �J�E���^�ϐ� */

	int input; /* ���͒l */

	int input_count = 0; /* ���͉� */

	int end_flag;  /* �I���t���O */
	int sort_flag; /* �\�[�g�t���O(OFF = 0, ON = 1) */

	printf("*** �\�[�g�O ***\n");

	end_flag = scanf("%d", &input); /* ���_�C���N�V�������� */

	for (i = 0; end_flag != EOF; i++) {

		array[i] = input; /* �z��ɓ��͒l���i�[ */

		printf("%4d", array[i]); /* �\�[�g�O�̏o�� */

		end_flag = scanf("%d", &input); /* ���_�C���N�V�������� */

		input_count++; /* ���͉񐔂��C���N�������g */
	}

	printf("\n");

	for (i = 0; i < input_count && sort_flag == 1; i++) { /* �o�u���\�[�g */

		sort_flag = 0; /* �\�[�g�t���OOFF */

		for (j = input_count - 2; j >= i; j--) {�@/* ��납��1�O�̗v�f���r */

			if (array[j] > array[j + 1]) {

				temp     = array[j]; /* �f�[�^���� */
				array[j] = array[j + 1];
				array[j + 1] = temp;

				sort_flag = 1; /* �\�[�g�t���OON */
			}
		}
	}

	printf("*** �\�[�g�� ***\n");

	for (i = 0; i < input_count; i++) {

		printf("%4d", array[i]); /* �\�[�g��̏o�� */
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