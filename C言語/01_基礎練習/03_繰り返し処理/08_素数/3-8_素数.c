/*
�y�v���O�����T�v�z
2����100�܂ł̐����̑f�����o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int i, j;
	int prime_flag; /* ����؂ꂽ�񐔂őf���𔻒肷��ׂ̃t���O�ł��B */

	for (i = 2; i <= 100; i++) {

		prime_flag = 0; /* �O���̃��[�v���ɏ���������B */

		for (j = 1; j <= i; j++) {

			if (i % j == 0) { /* ����؂ꂽ��A�f���𔻒肷��t���O�ɃC���N�������g����B */
				prime_flag++;
			}
		}

		if (prime_flag == 2) { /* �����A����؂ꂽ�񐔂�2��Ȃ�ui�v���o�͂���B */
			printf("%d ", i);
		}
	}
	
	printf("\n");

	return 0;
}

/*
�y���s���ʁz
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/