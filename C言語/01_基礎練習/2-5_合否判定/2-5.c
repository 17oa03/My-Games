/*
�y�v���O�����T�v�z
�����̓_������͂��A���ۂ̔�����o�͂���B
�����́A�ߑO�����ƌߌ㎎��������A
�����Ƃ�60�_�ȏ�̏ꍇ�ɍ��i�A����ȊO�͕s���i�Ƃ���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int tensu1, tensu2;

	printf("�ߑO�����_�� ==> ");
	scanf("%d", &tensu1);

	if (tensu1 < 60) {
		printf("�s���i�ł��B\n");
	}
	else
	{
		printf("�ߌ㎎���_�� ==> ");
		scanf("%d", &tensu2);

		if (tensu2 < 60) {
			printf("�s���i�ł��B\n");
		}
		else
		{
			printf("���i�ł��B\n");
		}
	}

	return 0;
}

/*
�y���s����1�z
�ߑO�����_�� ==> 60
�ߌ㎎���_�� ==> 60
���i�ł��B

�y���s����2�z
�ߑO�����_�� ==> 100
�ߌ㎎���_�� ==> 59
�s���i�ł��B

�y���s����3�z
�ߑO�����_�� ==> 59
�s���i�ł��B
*/