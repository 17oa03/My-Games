/*
�y�v���O�����T�v�z
����������Ă���z��̗v�f���~���ɕ��ёւ���B

�����ёւ���O�ƌ���o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

#define YOUSO 5

int main(void)
{
	double date[YOUSO] = { 160.7, 162.7, 155.5, 168.3, 160.1 };
	double temp;
	int i, j;

	printf("*** �\�[�g�O ***\n");

	for (i = 0; i < YOUSO; i++) {

		printf("  %.1f", date[i]);
	}

	printf("\n");

	for (i = 0; i < YOUSO - 1; i++) { /* ���ёւ��ɂ́u�����@�v��p���܂��B*/
		for (j = i + 1; j < YOUSO; j++) { /* �z��̗v�f��擪����2���w�肵�܂��B */

			if (date[i] < date[j]) { /* ���Ƃ́A��r���Ĕz��̃f�[�^�����ւ��邾���ł��B */

				temp = date[j];
				date[j] = date[i];
				date[i] = temp;
			}
		}
	}

	printf("*** �\�[�g�� ***\n");
	
	for (i = 0; i < YOUSO; i++) {

		printf("  %.1f", date[i]);
	}

	printf("\n");

	return 0;
}

/*
�y���s���ʁz
*** �\�[�g�O ***
160.7  162.7  155.5  168.3  160.1
*** �\�[�g�� ***
168.3  162.7  160.7  160.1  155.5
*/