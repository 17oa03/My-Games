/*
�y�v���O�����T�v�z
��������͂��A
����������𔻒肵���ʂ��o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

/* ���͂̏���������֐� */
int Input_Function(void);

/* ��E�����𔻒肷��֐� */
void Odd_Even_Judgment(int);

int main(void)
{
	int input;
	
	/* ������ : �Ȃ� | �߂�l : input */
	input = Input_Function();

	/* ������ : input | �߂�l : �Ȃ� */
	Odd_Even_Judgment(input);

	return 0;
}

/* ������ : �Ȃ� */
int Input_Function(void) {

	int input;

	printf("���� ==> ");
	scanf("%d", &input);

	/* �߂�l : input */
	return input;
}

/* ������ : input */
void Odd_Even_Judgment(int input) {

	if (input % 2 == 0) {
	
		printf("%d �́A�����ł��B\n", input);
	}
	else
	{

		printf("%d �́A��ł��B\n", input);
	}

	/* �߂�l : �Ȃ� */
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