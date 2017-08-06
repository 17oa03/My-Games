/*
�y�v���O�����T�v�z
��������͂��A���̊K����o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int Factorial(int); /* �K��֐� */

int main(void) /* ���C�����[�`�� */
{
	int input, answer; /* ���͒l�ƊK�揈����̒l���i�[����ϐ� */

	printf("���� ==> ");
	scanf("%d", &input); /* ���� */

	answer = Factorial(input); /* �K�揈�� */

	printf("%d �� �K��́A%d �ł��B\n", input, answer); /* �o�� */

	return 0;
}

int Factorial(int input) /* �T�u���[�`���A�������́u���͒l�v */
{
	int answer; /* �K�揈����̒l���i�[����ϐ� */

	if (input == 0) { /* ���͒l���u0�v�̏ꍇ */

		answer = 1; /* �u0�v�̊K��́u1�v */
	}
	else /* ����ȊO�̏ꍇ */
	{

		answer = input * Factorial(input - 1); /* ���͒l�̊K�揈�� */
	}

	return answer; /* �K�挋�� */
}

/*
�y���s����1�z
���� ==> 5
5 �� �K��́A120 �ł��B

�y���s����2�z
���� ==> 1
1 �� �K��́A1 �ł��B

�y���s����3�z
���� ==> 0
0 �� �K��́A1 �ł��B

�y���s����4�z
���� ==> 12
12 �� �K��́A479001600 �ł��B
*/