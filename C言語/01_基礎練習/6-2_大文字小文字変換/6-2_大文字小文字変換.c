/*
�y�v���O�����T�v�z
�A���t�@�x�b�g�A�L���A��������͂���B
�A���t�@�x�b�g�̏������Ȃ�啶���ɁA
�啶���Ȃ珬�����ɕϊ�����B
�L���A�����̏ꍇ�͕ϊ������ɏo�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

/* �啶�� �� �������ϊ��̏���������֐� */
char Conversion(char);

int main(void)
{
	char input, answer;

	printf("���� ==> ");
	scanf("%c", &input);

	/* ������ : input | �߂�l : answer */
	answer = Conversion(input);

	printf("%c �̕ϊ���́A%c �ł��B\n", input, answer);

	return 0;
}

/* ������ = input */
char Conversion(char input)
{
	char answer;

	if (input >= 65 && input <= 90) {

		answer = input + 32;
	}
	else if (input >= 97 && input <= 122) {

		answer = input - 32;
	}
	else
	{

		answer = input;
	}
	/* �߂�l = answer */
	return answer;
}


/*
�y���s����1�z
���� ==> y
y �̕ϊ���́AY �ł��B

�y���s����2�z
���� ==> Z
Z �̕ϊ���́Az �ł��B

�y���s����3�z
���� ==> \
\ �̕ϊ���́A\ �ł��B

�y���s����4�z
���� ==> 9
9 �̕ϊ���́A9 �ł��B
*/

/*
�y�s������z
�֐��̃v���g�^�C�v�錾�ɂāA
���O�̓�������啶���ŋL�q���Ă������A
�֐��{�̖̂��O���������ŋL�q���Ă����ׁA
�r���h�G���[�����������A
�֐��{�̖̂��O�̓�������啶���ɋL�q���A
�s����C�����܂����B
*/