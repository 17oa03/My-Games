/*
�y�v���O�����T�v�z
�W�����͂�萮����5���͂��A
���͏��Ƃ͋t�ɕW���o�͂ɏo�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

#define YOUSO 5 /* ������uYOUSO�v�𕶎���u5�v�ɒu�������܂��B */

int main(void)
{
	int ary[YOUSO];
	int i;

	for (i = 0; i < YOUSO; i++) { /* 0��1��2��3��4��5�񃋁[�v���Ai = 5�ɂȂ��Ă��܂��B */

		printf("���� ==> ");
		scanf("%d", &ary[i]);
	}

	printf("---�t���o��---\n");

	for (i--; i >= 0; i--) { /* �J�E���^�ϐ��̒l��z��̓Y���ɍ��킹�ď���������B */

		printf("%9d\n", ary[i]);
	}

	return 0;
}

/*
�y���s���ʁz
���� ==> 34
���� ==> -5
���� ==> 123
���� ==> 0
���� ==> -21
---�t���o��---
      -21
        0
      123
       -5
       34
*/