/*
�y�v���O�����T�v�z
��������͂��A
���͂������l�̓����o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

/* ���͂��ꂽ���l���悷��֐� */
int Square(int);

int main(void)
{
	int input, answer;

	printf("���� ==> ");
	scanf("%d", &input);

	/* ������ : input | �߂�l : answer */
	answer = Square(input);

	printf("%d �̓��́A%d �ł��B\n", input, answer);

	return 0;
}
/* ������ : input */
int Square(int input)
{
	int answer;

	answer = input * input;

	/* �߂�l : answer */
	return answer;
}


/*
�y���s����1�z
���� ==> 5
5 �̓��́A25 �ł��B

�y���s����2�z
���� ==> 100
100 �̓��́A10000 �ł��B

�y���s����3�z
���� ==> 1
1 �̓��́A1 �ł��B

�y���s����4�z
���� ==> 0
0 �̓��́A0 �ł��B
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