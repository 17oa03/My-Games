/*
�y�v���O�����T�v�z
���_�C���N�g�ɂ��t�@�C�����o�͂��A
BMI���v�Z���ć��A�g���A�̏d�ABMI�̈ꗗ�\��
�W���o�͂֏o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int num;
	double sintyo, taiju;
	double bmi = 0;
	int end_flag;

	printf("NO �g�� �̏d  BMI \n");
	printf("-- ---- ---- -----\n");

	end_flag = scanf("%d %lf %lf", &num, &sintyo, &taiju);

	while (end_flag != EOF) {

		bmi = taiju / (sintyo * sintyo);
		printf(" %d %.2f %.1f %.2f\n", num, sintyo, taiju, bmi);
		end_flag = scanf("%d %lf %lf", &num, &sintyo, &taiju);
	}

	return 0;
}

/*
�y���s���ʁz
NO �g�� �̏d  BMI
-- ---- ---- -----
 1 1.72 65.8 22.24
 2 1.80 55.5 17.13
 3 1.51 46.2 20.26
 4 1.65 75.1 27.58
 5 1.69 60.7 21.25
*/