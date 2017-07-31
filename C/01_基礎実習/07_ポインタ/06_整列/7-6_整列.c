/*
�y�v���O�����T�v�z
����������Ă���z��̗v�f��
�|�C���^�ϐ����g�p���č~���ɕ��בւ���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ELEMENT 5 /* �}�N���萔�̒�` */

int main(void)
{
	double data[ELEMENT] = { 160.7, 162.8, 155.5, 168.3, 160.1 }; /* �z��̒�`�Ə����� */

	double temp; /* �ꎞ�I�Ƀf�[�^��ۑ�����ϐ� */

	int i, j; /* �J�E���^�ϐ� */

	double *p_data; /* �|�C���^�ϐ��̒�` */

	printf("*** �\�[�g�O ***\n");

	for (p_data = data; p_data < data + ELEMENT; p_data++) { /* �\�[�g�O�̏o�� */

		printf(" %3.1f", *p_data);
	}

	printf("\n");

	for (i = 0, p_data = p_data - ELEMENT; i < ELEMENT - 1; i++) { /* �\�[�g���� */
		for (j = i + 1; j < ELEMENT; j++) {

			if (*(p_data + j) > *(p_data + i)) { /* �v�f�̔�r */

				temp = *(p_data + j); /* �f�[�^���� */
				*(p_data + j) = *(p_data + i);
				*(p_data + i) = temp;
			}
		}
	}

	printf("*** �\�[�g�� ***\n");

	for (p_data = data; p_data < data + ELEMENT; p_data++) { /* �\�[�g��̏o�� */

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
�y�l�@�z
�u7-5_�z��v�f�̌����v�̉��p�ɂȂ�B
*/