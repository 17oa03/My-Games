/*
�y�v���O�����T�v�z
0�ȏ�̐������J��Ԃ����͂��A
���̐��������͂��ꂽ��I�������A
���v�ƕ���(�����_�ȉ���2�ʂ܂�)���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	int input = 0; /* ���͒l */

	int total = 0; /* ���v�l */

	int count = 0; /* ���͐� */

	double average; /* ���ϒl */

	while (input >= 0) { /* ���͒l���u0�v�ȏ�Ń��[�v */

		printf("���� ==> ");
		scanf("%d", &input); /* ���� */

		if (input >= 0) { /* ���͒l���u0�v�ȏ�̏ꍇ */

			total += input; /* �utotal = total + input;�v�Ɠ��� */

			count++; /* ���͐��ɃC���N�������g */
		}
	}

	printf("���v = %d\n", total);

	if (count != 0) { /* ���͐����u0�v�łȂ��ꍇ */

		average = (double)total / count; /* �udouble�v�ŃL���X�g���ĕ��ϒl�̌v�Z */

		printf("���� = %.2f\n", average);
	}

	return 0;
}

/*
�y���s����1�z
���� ==> 10
���� ==> 25
���� ==> 36
���� ==> -1
���v = 71
���� = 23.67

�y���s����2�z
���� ==> 10
���� ==> 20
���� ==> 0
���� ==> 33
���� ==> -100
���v = 63
���� = 15.75

�y���s����3�z
���� ==> -99
���v = 0

�y���s����4�z
���� ==> 0
���� ==> 0
���� ==> 0
���� ==> -1
���v = 0
���� = 0.00
*/