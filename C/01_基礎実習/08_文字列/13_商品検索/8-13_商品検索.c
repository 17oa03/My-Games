/*
�y�v���O�����T�v�z
���i�R�[�h����͂��A
�Y�����鏤�i�̏��i���A
�P�����������ďo�͂���B
�J��Ԃ������ł���悤�ɂ��A
���i�R�[�h�Ɂu99�v�����͂��ꂽ��I������B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ITEMS 5 /* ���i�̐� */

void Search(int, int *, int *, int *, int); /* ���i�T���֐� */

int main(void)
{
	int code[ITEMS] = { 21, 68, 37, 40, 85 }; /* ���i�R�[�h�z�� */

	char *name[ITEMS] = { /* ���i���z�� */
		"���M",
		"�m�[�g",
		"��K",
		"�����S��",
		"�R���p�X",
	};

	int price[ITEMS] = { 30, 100, 150, 50, 230 }; /* �P���z�� */

	int input = 0; /* ���i�R�[�h�̓��͒l */

	Search(input, code, name, price, ITEMS); /* ���i�T������ */

	return 0;
}

void Search(int input, int *p_code, int *p_name, int *price, int n)
{
	int i; /* �J�E���^�ϐ� */

	while (input != 99) { /* �I���R�[�h�����͂����܂ŏ������J��Ԃ� */

		printf("���i�R�[�h ==> ");
		scanf("%d", &input); /* ���� */

		if (input != 99) { /* ���͒l���I���R�[�h�łȂ��ꍇ */

			for (i = 0; i < n && input != *(p_code + i); i++); /* ���i�R�[�h�T�� */

			if (i < ITEMS) { /* �Y�����鏤�i������ꍇ */

				printf("���i��  :  %s\n", *(p_name + i)); /* ���i���̏o�� */
				printf("�P  ��  :  %d\n", *(price + i));  /* �P���̏o�� */
			}
			else /* ����ȊO�̏ꍇ */
			{

				printf("�Y�����鏤�i�͂���܂���B\n");
			}
		}
	}

	return; /* �߂�l�́u�Ȃ��v */
}


/*
�y���s����1�z
���i�R�[�h ==> 37
���i��  :  ��K
�P  ��  :  150
���i�R�[�h ==> 12
�Y�����鏤�i�͂���܂���B
���i�R�[�h ==> 85
���i��  :  �R���p�X
�P  ��  :  230
���i�R�[�h ==> 99

�y���s����2�z
���i�R�[�h ==> 99

�y���s����3�z
���i�R�[�h ==> 21
���i��  :  ���M
�P  ��  :  30
���i�R�[�h ==> 68
���i��  :  �m�[�g
�P  ��  :  100
���i�R�[�h ==> 37
���i��  :  ��K
�P  ��  :  150
���i�R�[�h ==> 40
���i��  :  �����S��
�P  ��  :  50
���i�R�[�h ==> 85
���i��  :  �R���p�X
�P  ��  :  230
���i�R�[�h ==> 99
*/