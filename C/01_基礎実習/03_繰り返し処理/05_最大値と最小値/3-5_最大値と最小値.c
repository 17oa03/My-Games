/*
�y�v���O�����T�v�z
������5���͂��A���̍ő�l�ƍŏ��l���o�͂���B
�z��͎g�p�s�ł��B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int input, max, min;
	int i;

	printf("���� ==> ");
	scanf("%d", &input);

	max = input;
	min = input;

	for (i = 0; i < 4; i++) {

		printf("���� ==> ");
		scanf("%d", &input);

		if (max < input) {
			max = input;
		}

		if (min > input) {
			min = input;
		}
	}

	printf("�ő�l = %d\n", max);
	printf("�ŏ��l = %d\n", min);

	return 0;
}

/*
�y���s����1�z
���� ==> 5
���� ==> -100
���� ==> -70
���� ==> 200
���� ==> 60
�ő�l = 200
�ŏ��l = -100

�y���s����2�z
���� ==> -80
���� ==> -3
���� ==> 0
���� ==> 230
���� ==> 500
�ő�l = 500
�ŏ��l = -80

�y���s����3�z
���� ==> 70
���� ==> 60
���� ==> 50
���� ==> 40
���� ==> 30
�ő�l = 70
�ŏ��l = 30
*/