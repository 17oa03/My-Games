/*
�y�v���O�����T�v�z
����������Ă���z��̗v�f��
�|�C���^�ϐ����g�p���č~���ɕ��בւ���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

/* �}�N���萔�̒�` */
#define YOUSO 5

int main(void)
{
	/* ���[�J���ϐ��Ɣz��̒�` */
	double data[YOUSO] = { 160.7, 162.8, 155.5, 168.3, 160.1 };
	double temp;
	int i, j;

	/* �|�C���^�ϐ��̒�` */
	double *p_data;

	printf("*** �\�[�g�O ***\n");

	/* �\�[�g�O�̔z��̏o�� */
	for (p_data = data; p_data < data + YOUSO; p_data++) {

		printf(" %3.1f", *p_data);
	}
	
	printf("\n");

	/* �z��̗v�f���r����ׂ�for�� */
	for (i = 0, p_data = p_data - YOUSO; i < YOUSO - 1; i++) {
		for (j = i + 1; j < YOUSO; j++) {

			/* 2�̗v�f�̔�r */
			if (*(p_data + j) > *(p_data + i)) {

				/* �\�[�g���� */
				temp = *(p_data + j);
				*(p_data + j) = *(p_data + i);
				*(p_data + i) = temp;

			}
		}
	}

	printf("*** �\�[�g�� ***\n");

	/* �\�[�g��̔z��̏o�� */
	for (p_data = data; p_data < data + YOUSO; p_data++) {

		printf(" %3.1f", *p_data);
	}

	printf("\n");

	return 0;
}

/*
�y���s���ʁz
*** �\�[�g�O ***
160.7 162.8 155.5 168.3 160.1
*** �\�[�g�� ***
168.3 162.8 160.7 160.1 155.5
*/

/*
�y�����z
���[�v���v���ʂ�ɏ�������Ȃ����́A
printf�֐����g�p�����f�o�b�O���C�g���L���I�A
�C�ɂȂ郋�[�v�����̑O���printf�֐��̏o�͂����ނƁA
�ǂ̂悤�ȏ���������Ă��邩�c�����₷���B
*/