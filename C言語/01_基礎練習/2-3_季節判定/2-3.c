/*
�y�v���O�����T�v�z
��(1���`12��)����͂��A�G��(�t�A�āA�H�A�~)���o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int month;

	printf("�� ==> ");
	scanf("%d", &month);

	switch (month) {

	case 3: case 4: case 5:
		printf("%d���́A�t�ł��B\n", month);
		break;
	case 6: case 7: case 8:
		printf("%d���́A�Ăł��B\n", month);
		break;
	case 9: case 10: case 11:
		printf("%d���́A�H�ł��B\n", month);
		break;
	case 12: case 1: case 2:
		printf("%d���́A�~�ł��B\n", month);
		break;
	default:
		printf("1����12����͂��ĉ������B\n");
		break;
	}

	return 0;
}

/*
�y���s����1�z
�� ==> 3
3���́A�t�ł��B

�y���s����2�z
�� ==> 6
6���́A�Ăł��B

�y���s����3�z
�� ==> 11
11���́A�H�ł��B

�y���s����4�z
�� ==> 2
2���́A�~�ł��B

�y���s����5�z
�� ==> 13
1����12����͂��ĉ������B
*/