/*
�y�v���O�����T�v�z
�����^�f�[�^�̈�Ƀf�[�^����͂��A
�����ɕ��ёւ���B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFFER 256 /* �o�b�t�@�T�C�Y */

int main(void)
{
	char str[BUFFER];

	int sp_flag = 0; /* �e�G���[�t���O */
	int cm_flag = 0;
	int cl_flag = 0;
	int no_flag = 0;
	int na_flag = 0;
	int po_flag = 0;

	int i, j; /* �J�E���^�ϐ� */

	while (fgets(str, BUFFER, stdin) != NULL) { /* �t�@�C������ */

		for (i = 0; i < strlen(str); i++) {

			if (str[i] == ' ') { sp_flag = 1; } /* �X�y�[�X(���p)���� */
			if (str[i] == ',') { j++; } /* ��؂蕶��(,)�̃J�E���g */
		}

		if (j != 3) { cm_flag = 1; } /* ��؂蕶��(,)���� */

		if (sp_flag == 0 && cm_flag == 0) {

			/* �N���X���� */
			/* �������� */
			/* ���_���� */
		}
	}

	/* �o�� */

	return 0;
}

/*
�y���s���ʁz
*/

/*
�y�l�@�z
*/