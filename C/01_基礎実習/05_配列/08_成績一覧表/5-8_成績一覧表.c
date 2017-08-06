/*
�y�v���O�����T�v�z
2�����z��ɏ��������ꂽ���уf�[�^�����ƂɁA
�e���k�̍��v�ƕ��ρA
�y�ъe�Ȗڂ̍��v�ƕ��ς����߁A
���шꗗ�\���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define STUDENT 4 /* ���k�̐� */
#define SUBJECT 5 /* ���Ȃ̐� */

int main(void)
{
	int data[STUDENT][SUBJECT] = { /* 2�����z��̒�`�Ə����� */
		{ 35, 80, 85, 70, 62 },
		{ 62, 62, 95, 85, 74 },
		{ 53, 47, 55, 63, 77 },
		{ 72, 62, 79, 84, 83 },
	};

	int i, j; /* �J�E���^�ϐ� */

	int student_total = 0;      /* ���k�̍��v�_ */
	double student_average = 0; /* ���k�̕��ϓ_ */

	int subject_total[SUBJECT] = { 0 };      /* �e���Ȃ̍��v�_ */
	double subject_average[SUBJECT] = { 0 }; /* �e���Ȃ̕��ϓ_ */

	printf("             *** ��  ��  ��  ��  �\ ***\n\n");
	printf("  No |  �p  |  ��  |  ��  |  ��  |  ��  | ���v  ����\n");
	printf("----------------------------------------------------\n");

	for (i = 0; i < STUDENT; i++) { /* ���k���[�v */

		printf("%4d |", i + 1); /* �uNo�v�̏o�� */

		for (j = 0; j < SUBJECT; j++) { /* ���ȃ��[�v */

			printf("%4d  |", data[i][j]); /* �_���̏o�� */

			student_total    += data[i][j]; /* �e���k�̍��v�_�̌v�Z */
			subject_total[j] += data[i][j]; /* �e���Ȃ̍��v�_�̌v�Z */
		}

		student_average = (double)student_total / SUBJECT; /* �e���k�̕��ϓ_�̌v�Z */

		printf("%5d  ",   student_total);   /* �e���k�̍��v�_�̏o�� */
		printf("%3.1f\n", student_average); /* �e���k�̕��ϓ_�̏o�� */

		student_total   = 0; /* ���k�̍��v�_�������� */
		student_average = 0; /* ���k�̕��ϓ_�������� */
	}

	printf("-----+------+------+------+------+------+-----------\n");
	printf("���v |");

	for (i = 0; i < SUBJECT; i++) { /* �o�̓��[�v */

		printf("%4d  |", subject_total[i]); /* �e���Ȃ̍��v�_�̏o�� */

		subject_average[i] = subject_total[i]; /* �e���Ȃ̍��v�_���� */
	}

	printf("\n");
	printf("���� |");

	for (i = 0; i < SUBJECT; i++) { /* �o�̓��[�v */

		printf("  %2.1f|", subject_average[i] / STUDENT); /* �e���Ȃ̕��ϓ_�̏o�� */
	}

	printf("\n");

	return 0;
}
/*
�y���s���ʁz
           *** ��  ��  ��  ��  �\ ***

No |  �p  |  ��  |  ��  |  ��  |  ��  | ���v  ����
----------------------------------------------------
 1 |  35  |  80  |  85  |  70  |  62  |  332  66.4
 2 |  62  |  62  |  95  |  85  |  74  |  378  75.6
 3 |  53  |  47  |  55  |  63  |  77  |  295  59.0
 4 |  72  |  62  |  79  |  84  |  83  |  380  76.0
-----+------+------+------+------+------+-----------
���v | 222  | 251  | 314  | 302  | 296  |
���� |  55.5|  62.8|  78.5|  75.5|  74.0|
*/