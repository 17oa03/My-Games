/*
�y�v���O�����T�v�z
��������͂��A
����������𔻒肵���ʂ��o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int Input_Function(void); /* �v���g�^�C�v�錾 */
void Odd_or_Even(int);

int main(void) /* ���C�����[�`���̒�` */
{
	int input;

	input = Input_Function(); /* �������́u�����v�A�߂�l�́uinput�v */

	Odd_or_Even(input);	/* �������́uinput�v�A�߂�l�́u�����v */

	return 0;
}

int Input_Function(void) { /* �T�u���[�`���̒�`�A�������́u�����v */

	int input;

	printf("���� ==> ");
	scanf("%d", &input);

	return input; /* �߂�l�́uinput�v */
}

void Odd_or_Even(int input) /* �T�u���[�`���̒�`�A�������́uinput�v */
{

	if (input % 2 == 0) { /* 2�Ŋ���؂ꂽ�ꍇ */

		printf("%d �́A�����ł��B\n", input);
	}
	else /* ����ȊO�̏ꍇ */
	{

		printf("%d �́A��ł��B\n", input);
	}

	return; /* �߂�l�́u�����v */
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
�T�u���[�`���̃v���g�^�C�v�錾�ƒ�`��2�L�q����K�v������B

�T�u���[�`���Ɉ����A
�߂�l�������ꍇ�́A
�f�[�^�^��void�^�ɂ��ċL�q������B

Void(�{�C�h)�́A
�u�����Ȃ��v�Ƃ����Ӗ��ɂȂ�B
*/