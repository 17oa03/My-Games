/*
�y�v���O�����T�v�z
���i�R�[�h(����2��)����͂��A
�Y�����鏤�i�̍݌ɐ����������ďo�͂���B
���i�R�[�h��99�����͂��ꂽ��I������B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

#define YOUSO 5

int main(void)
{
	int code[YOUSO] = { 21, 68, 37, 40, 85 };
	int stock[YOUSO] = { 123, 430, 333, 650, 200 };
	int input = 0;
	int i;

	while (input != 99) { /* �I���R�[�h�����͂����܂ŏ������J��Ԃ��B */

		printf("���i�R�[�h ==> ");
		scanf("%d", &input);

		if (input != 99) {

			/* �Y�����鏤�i������΁A�J�E���^�ϐ��̉��Z���~�߂�B*/
			for (i = 0; i < YOUSO && input != code[i]; i++);

			if (i < YOUSO) {

				printf("�݌ɐ��́A%d�ł��B\n", stock[i]);
			}
			else
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

/*
�y�s������z
�z��̏�������double�^�ōs���Ă����A
printf�֐��ŏo�͕ϊ��w��q���u%d�v�������̂ŁA
�Y�����鏤�i�������Ă��݌ɐ����S�āu0�v�ɂȂ��Ă����A
�z���int�^�ɏC�������Ƃ���A
���͖��������B
*/