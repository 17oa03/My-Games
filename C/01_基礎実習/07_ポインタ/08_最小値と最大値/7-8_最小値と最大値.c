/*
�y�v���O�����T�v�z
������5���͂��z��ɑ�����A
���̍ő�l�ƍŏ��l��T���A�o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ELEMENT 5 /* �v�f�� */

int Maximum(int *); /* �ő�l�T���֐� */
int Minimum(int *); /* �ŏ��l�T���֐� */

int main(void) 
{
	int data[ELEMENT]; /* �z��̐錾 */

	int max, min; /* �ő�l�ƍŏ��l�̕ϐ���` */

	int i; /* �J�E���^�ϐ� */

	for (i = 0; i < ELEMENT; i++) { /* ���̓��[�v */

		printf("���� ==> ");
		scanf("%d", &data[i]); /* ���� */
	}

	max = Maximum(data); /* �ő�l�T������ */
	min = Minimum(data); /* �ŏ��l�T������ */

	printf("�ő�l = %d\n", max); /* �ő�l�̏o�� */
	printf("�ŏ��l = %d\n", min); /* �ŏ��l�̏o�� */

	return 0;
}

int Maximum(int *p_data)
{
	int i = 0; /* �J�E���^�ϐ� */
	
	int max = *(p_data + i); /* �z��̐擪�f�[�^���� */

	for (i++; i < ELEMENT; i++) { /* ��r���[�v */

		if (max < *(p_data + i)) { /* �ő�l�̏ꍇ */

			max = *(p_data + i); /* �ő�l�̑�� */
		}
	}

	return max; /* �ő�l��Ԃ� */
}

int Minimum(int *p_data) 
{
	int i = 0; /* �J�E���^�ϐ� */

	int min = *(p_data + i); /* �z��̐擪�f�[�^���� */

	for (i++; i < ELEMENT; i++) { /* ��r���[�v */

		if (min > *(p_data + i)) { /* �ŏ��l�̏ꍇ */

			min = *(p_data + i); /* �ŏ��l�̑�� */
		}
	}

	return min; /* �ŏ��l��Ԃ� */
}

/*
�y���s����1�z
���� ==> 5
���� ==> -100
���� ==> -70
���� ==> 200
���� ==> 60
�ő�l = 200
�ŏ��l = -100

�y���s����2�z
���� ==> -80
���� ==> -3
���� ==> 0
���� ==> 230
���� ==> 500
�ő�l = 500
�ŏ��l = -80

�y���s����3�z
���� ==> 70
���� ==> 60
���� ==> 50
���� ==> 40
���� ==> 30
�ő�l = 70
�ŏ��l = 30
*/