/*
�y�v���O�����T�v�z
�W�����͂�萮����5���͂��A
���͏��Ƃ͋t�ɕW���o�͂ɏo�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

/* �}�N���萔�̒�` */
#define YOUSO 5

int main(void)
{
	/* ���[�J���ϐ��̒�` */
	int array[YOUSO];
	int i;

	/* �|�C���^�ϐ��̒�` */
	int *p_array;

	/* �A�h���X�Z�b�g */
	p_array = array; /* array = &array[0] */

	/* �|�C���^�z��̃f�[�^���o�� */
	for (i = 0; i < YOUSO; i++) {
		printf("���� ==> ");
		scanf("%d", p_array + i);
	}

	printf("---�t���o��---\n");

	/* �t���o�� */
	for (i--; i >= 0; i--) {
		printf("%9d\n", *(p_array + i));
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