/*
�y�v���O�����T�v�z
���i�R�[�h(����2��)����͂��A
�Y�����鏤�i�̍݌ɐ����������ďo�͂���B
���i�R�[�h��99�����͂��ꂽ��I������B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ELEMENT 5 /* ������uELEMENT�v�𕶎���u5�v�Ƀ}�N���u�� */

int main(void)
{
	int code[ELEMENT] = { 21, 68, 37, 40, 85 }; /* ���i�R�[�h */
	int stock[ELEMENT] = { 123, 430, 333, 650, 200 }; /* �݌ɐ� */

	int input = 0; /* ���͒l */

	int i; /* �J�E���^�ϐ� */

	while (input != 99) { /* �I���R�[�h�����͂����܂Ń��[�v */

		printf("���i�R�[�h ==> ");
		scanf("%d", &input); /* ���� */

		if (input != 99) { /* ���͒l���I���R�[�h�łȂ��ꍇ */

			for (i = 0; i < ELEMENT && input != code[i]; i++); /* �Y�����鏤�i�R�[�h�̌��� */

			if (i < ELEMENT) { /* �Y�����Ă���ꍇ */

				printf("�݌ɐ��́A%d�ł��B\n", stock[i]);
			}
			else /* �Y�����Ă��Ȃ��ꍇ */
			{

				printf("�Y�����鏤�i�͂���܂���B\n");
			}
		}
	}

	return 0;
}

/*
�y���s���ʁz
���i�R�[�h ==> 37
�݌ɐ��́A333�ł��B
���i�R�[�h ==> 21
�݌ɐ��́A123�ł��B
���i�R�[�h ==> 85
�݌ɐ��́A200�ł��B
���i�R�[�h ==> 10
�Y�����鏤�i�͂���܂���B
���i�R�[�h ==> 40
�݌ɐ��́A650�ł��B
���i�R�[�h ==> 68
�݌ɐ��́A430�ł��B
���i�R�[�h ==> 99
*/