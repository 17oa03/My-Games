/*
�y�v���O�����T�v�z
2����100�܂ł̐����̑f�����o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	int i, j; /* �J�E���^�ϐ� */

	int prime_count; /* �f���J�E���^ */

	for (i = 2; i <= 100; i++) { /* 2 �` 100 �܂ł̒l */

		prime_count = 0; /* �O���̃��[�v���ɏ����� */

		for (j = 1; j <= i; j++) {

			if (i % j == 0) { /* ����؂ꂽ�ꍇ */

				prime_count++; /* �f���J�E���^���C���N�������g */
			}
		}

		if (prime_count == 2) { /* �f���J�E���^��2��̏ꍇ */

			printf("%d ", i); /* �f�����o�� */
		}
	}
	
	printf("\n");

	return 0;
}

/*
�y���s���ʁz
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/