/*
�y�v���O�����T�v�z
��������͂��A���̊K����o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int input;
	int total = 1;
	int i;

	printf("���� ==> ");
	scanf("%d", &input);

	for(i = input; i >= 1; i--) {
	
		total *= i;
	}

	printf("%d �̊K��� %d �ł��B\n", input, total);

	return 0;
}

/*
�y���s����1�z
���� ==> 5
5 �̊K��� 120 �ł��B

�y���s����2�z
���� ==> 1
1 �̊K��� 1 �ł��B

�y���s����3�z
���� ==> 0
0 �̊K��� 1 �ł��B

�y���s����4�z
���� ==> 12
12 �̊K��� 479001600 �ł��B
*/