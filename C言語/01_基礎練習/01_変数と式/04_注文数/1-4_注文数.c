/*
�y�v���O�����T�v�z
�K�v���ʂ���͂��A���P�[�X�ƌʂɉ���������Ηǂ������o�͂���B�Ȃ��P�[�X��24����Ƃ���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int quantity, box, number;

	printf("�K�v���� ==> ");
	scanf("%d", &quantity);

	box = quantity / 24;
	number = quantity % 24;

	printf("%d�P�[�X�ƁA%d��������B\n", box, number);

	return 0;
}

/*
�y���s���ʁz
�K�v���� ==> 80
3�P�[�X�ƁA8��������B
*/