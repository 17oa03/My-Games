/*
�y�v���O�����T�v�z
����������Ă���z��̗v�f���~���ɕ��ёւ���B

�����ёւ���O�ƌ���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ELEMENT 5 /* ������uELEMENT�v�𕶎���u5�v�Ƀ}�N���u�� */

int main(void)
{
	double date[ELEMENT] = { 160.7, 162.7, 155.5, 168.3, 160.1 }; /* �z��̏����� */

	double temp; /* �ꎞ�I�Ƀf�[�^��ۑ�����ϐ� */

	int i, j; /* �J�E���^�ϐ� */

	printf("*** �\�[�g�O ***\n");

	for (i = 0; i < ELEMENT; i++) {

		printf("  %.1f", date[i]); /* ����O�̏o�� */
	}

	printf("\n");

	for (i = 0; i < ELEMENT - 1; i++) { /* �~���\�[�g���� */
		for (j = i + 1; j < ELEMENT; j++) {

			if (date[i] < date[j]) {

				temp    = date[j]; /* �f�[�^���� */
				date[j] = date[i];
				date[i] = temp;
			}
		}
	}

	printf("*** �\�[�g�� ***\n");

	for (i = 0; i < ELEMENT; i++) {

		printf("  %.1f", date[i]); /* �����̏o�� */
	}

	printf("\n");

	return 0;
}

/*
�y���s���ʁz
*** �\�[�g�O ***
160.7  162.7  155.5  168.3  160.1
*** �\�[�g�� ***
168.3  162.7  160.7  160.1  155.5
*/