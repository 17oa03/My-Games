/*
�y�v���O�����T�v�z
���a����͂��A�~�̖ʐςƋ��̑̐ς������_�ȉ�1���܂ŏo�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int radius;
	double area, volume;

	printf("���a ==> ");
	scanf("%d", &radius);

	area = radius * radius * 3.14;
	volume = (4.0 / 3) * radius * radius * radius * 3.14;

	printf("���a%d�̉~�̖ʐς�%3.1f�ł��B\n", radius, area);
	printf("���a%d�̋��̖ʐς�%4.1f�ł��B\n", radius, volume);

	return 0;
}

/*
�y���s��z
���a ==> 5
���a5�̉~�̖ʐς�78.5�ł��B
���a5�̋��̖ʐς�523.3�ł��B
*/