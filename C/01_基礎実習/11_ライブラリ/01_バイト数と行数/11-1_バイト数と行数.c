/*
�y�v���O�����T�v�z
�e�L�X�g�t�@�C���̃o�C�g���ƍs�����o�͂���B

�����s�R�[�h��2�o�C�g�Ƃ���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	int c = 0; /* getchar�֐��̖߂�l���i�[����ϐ� */

	int i = 0; /* �o�C�g���̃J�E���^�ϐ� */
	int	j = 0; /* �s���̃J�E���^�ϐ� */

	while ((c = getchar()) != EOF) /* 1�������f�[�^����荞�� */
	{

		i++; /* �o�C�g���̃J�E���g */

		if (c == '\n') { i++; j++; } /* ��荞�񂾕��������s�R�[�h�������ꍇ */
	}

	printf("�o�C�g�� : %d\n", i); /* �o�C�g���̏o�� */
	printf("�s�@�@�� : %d\n", j); /* �s���̏o�� */

	return 0;
}

/*
�y���s���ʁz
�o�C�g�� : 52
�s�@�@�� : 4
*/

/*
�y�l�@�z
getchar�֐��́A
�W�����͂���1������������unsigned char�^�Ƃ��ēǂݎ��A
int�^�ɕϊ�(ASCII�R�[�h)���Ė߂�l�ɂȂ�A
�ǂݎ�莸�s���́uEOF�v��Ԃ��B
*/