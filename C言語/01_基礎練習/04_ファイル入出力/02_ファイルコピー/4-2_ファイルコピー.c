/*
�y�v���O�����T�v�z
���_�C���N�g���͂ƃ��_�C���N�g�o�͂ɂ��A
�t�@�C�����R�s�[����B

���R�}���h�v�����v�g�ɂāA
�@�u���s�t�@�C���� < bmi1.dat > bmi2.dat�v����͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int num;
	double sintyo, taiju;
	int end_flag;

	end_flag = scanf("%d %lf %lf", &num, &sintyo, &taiju);

	while (end_flag != EOF) {

		printf("%d %.2f %.1lf \n", num, sintyo, taiju);
		end_flag = scanf("%d %lf %lf", &num, &sintyo, &taiju);
	}

	return 0;
}

/*
�y���s���ʁz
1 1.72 65.8
2 1.80 55.5
3 1.51 46.2
4 1.65 75.1
5 1.69 60.7
*/