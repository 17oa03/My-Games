/*
�y�v���O�����T�v�z
��������͂��A
����������𔻒肵���ʂ��o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

/* �v���g�^�C�v�錾 */
int Input_Function(void);
void Odd_or_Even(int);

/* ���C�����[�`�� */
int main(void)
{
	int input;

	input = Input_Function(); /* �������́u�����v�A�߂�l�́uinput�v */

	Odd_or_Even(input);	/* �������́uinput�v�A�߂�l�́u�����v */

	return 0;
}

/* �T�u���[�`�� */
int Input_Function(void) { /* �������́u�����v */

	int input;

	printf("���� ==> ");
	scanf("%d", &input);

	return input; /* �߂�l�́uinput�v */
}

/* �T�u���[�`�� */
void Odd_or_Even(int input) { /* �������́uinput�v */

							  /* 2�Ŋ���؂ꂽ�ꍇ */
	if (input % 2 == 0) {

		printf("%d �́A�����ł��B\n", input);
	}
	/* ����ȊO�̏ꍇ */
	else
	{

		printf("%d �́A��ł��B\n", input);
	}

	/* �߂�l�́u�����v */
	return;
}

/*
�y���s����1�z
���� ==> 5
5 �́A��ł��B

�y���s����2�z
���� ==> 6
6 �́A�����ł��B
*/

/*
�y�l�@�z
���C���v���O�����ɂāA
�T�u���[�`����2�Ăяo���Ďg�p���Ă���̂ŁA
�v���g�^�C�v�錾�ƁA
�T�u���[�`���̃v���O������2�L�q����K�v���������B

�T�u���[�`���Ɉ����A
�߂�l�������ꍇ�́A
�f�[�^�^��void�^�ɂ��ċL�q������B

Void(�{�C�h)�́A
�u�����Ȃ��v�Ƃ����Ӗ��ɂȂ�B
*/