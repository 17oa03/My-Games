/*
�y�v���O�����T�v�z
�������͂��A�[�N���ۂ����o�͂���B
�������_�����Z�q(&&,||)���g�p���A1��if���ŋL�q���邱�ƁB
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	int seireki;

	printf("����4�� ==> ");
	scanf("%d", &seireki); /* ������� */

	if (seireki % 400 == 0 || (seireki % 4 == 0 && !(seireki % 100 == 0))) {

		printf("%d�N�́A�[�N�ł��B\n", seireki);
	}
	else
	{

		printf("%d�N�́A�[�N�ł͂���܂���B\n", seireki);
	}

	return 0;
}

/*
�y���s����1�z
����4�� ==> 2020
2020�N�́A�[�N�ł��B

�y���s����2�z
����4�� ==> 2019
2019�N�́A�[�N�ł͂���܂���B

�y���s����3�z
����4�� ==> 2100
2100�N�́A�[�N�ł͂���܂���B

�y���s����4�z
����4�� ==> 2400
2400�N�́A�[�N�ł��B
*/