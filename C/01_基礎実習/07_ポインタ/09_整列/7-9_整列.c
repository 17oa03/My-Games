/*
�y�v���O�����T�v�z
�v�f��5�̐����^�z��ɁA
5�̐�������͂��A
�����Ƀ\�[�g����B
���͊֐��A�\�[�g�֐��A�o�͊֐���3�̊֐����쐬����B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ELEMENT 5 /* �v�f�� */

void Input(int *);  /* ���͊֐� */
void Sort(int *);   /* �\�[�g�֐� */
void Output(int *); /* �o�͊֐� */

int main(void) 
{
	int data[ELEMENT]; /* �z��̐錾 */

	Input(data);  /* ���͏��� */

	printf("*** �\�[�g�O ***\n");

	Output(data); /* �o�͏��� */

	Sort(data);   /* �\�[�g���� */

	printf("*** �\�[�g�� ***\n");

	Output(data); /* �o�͏��� */

	return 0;
}

void Input(int *p_data)
{
	int i; /* �J�E���^�ϐ� */

	for (i = 0; i < ELEMENT; i++) { /* ���̓��[�v */

		printf("���� ==> ");
		scanf("%d", (p_data + i)); /* ���� */
	}

	return;
}

void Sort(int *p_data)
{
	int i, j; /* �J�E���^�ϐ� */

	int tmp; /* �ꎞ�I�Ƀf�[�^��ۊǂ���ϐ� */

	for (i = 0; i < ELEMENT - 1; i++) { /* �\�[�g�������[�v */
		for (j = i + 1; j < ELEMENT; j++) {

			if (*(p_data + i) > *(p_data + j)) { /* ��r */

				tmp = *(p_data + j); /* �f�[�^���� */
				*(p_data + j) = *(p_data + i);
				*(p_data + i) = tmp;
			}
		}
	}

	return;
}

void Output(int *p_data) 
{
	int i; /* �J�E���^�ϐ� */

	for (i = 0; i < ELEMENT; i++) { /* ��r���[�v */

		printf("%5d", *(p_data + i)); /* �o�� */
	}

	printf("\n");

	return;
}

/*
�y���s����1�z
���� ==> 65
���� ==> 20
���� ==> 88
���� ==> 17
���� ==> 41
*** �\�[�g�O ***
65   20   88   17   41
*** �\�[�g�� ***
17   20   41   65   88

�y���s����2�z
���� ==> 50
���� ==> 40
���� ==> 30
���� ==> 20
���� ==> 10
*** �\�[�g�O ***
50   40   30   20   10
*** �\�[�g�� ***
10   20   30   40   50
*/