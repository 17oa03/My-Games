/*
�y�v���O�����T�v�z
�������͂��A�[�N���ۂ����o�͂���B
������������if�����g�p���A�_�����Z�q(&&,||)�͎g�p�s�Ƃ���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int seireki1, seireki2;

	printf("����4�� ==> ");
	scanf("%d", &seireki1);

	seireki2 = seireki1 % 400;

	if (seireki2 == 0) {
		printf("%d�N�́A�[�N�ł��B\n", seireki1);
	}
	else
	{
		seireki2 = seireki1 % 4;
		if (seireki2 == 0) {

			seireki2 = seireki1 % 100;

			if (seireki2 == 0) {
				printf("%d�N�́A�[�N�ł͂���܂���B\n", seireki1);
			}
			else
			{
				printf("%d�N�́A�[�N�ł��B\n", seireki1);
			}
		}
		else
		{
			printf("%d�N�́A�[�N�ł͂���܂���B\n", seireki1);
		}
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