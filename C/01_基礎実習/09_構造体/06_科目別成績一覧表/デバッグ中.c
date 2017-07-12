/*
�y�v���O�����T�v�z
���уf�[�^�����_�C���N�V�������͂��A
�\���̔z��Ɋi�[����B
�i�[�����\���̔z�񂩂�A
3�Ȗڂ̐��шꗗ�\���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define STUDENT 5 /* �l�� */
#define TYPE 3    /* �Ȗڂ̎�� */

/* �\���̂̐錾 */
typedef struct record {
	int  no;            /* �ԍ� */
	char name[11];      /* ���� */
	int  score[TYPE];   /* �_�� */
	int  rank;          /* ���� */
	char subject[TYPE]; /* �Ȗ� */

}Recode; /* �\���̂̒�` */

/* �Ȗږ��̎�� */
Recode subject[5] = { "����", "���w", "�p��", };

/* �֐��ꗗ */
void in_data(Recode *, int);
void sort_data(Recode *, int);
void ranking_data(Recode *, int);
void out_data(Recode *, int, int);

int main(void)
{
	/* Record�^�z��̒�` */
	Recode data[STUDENT];

	/* �J�E���^�ϐ� */
	int i;
	
	/* ���� */
	in_data(data, TYPE);

	for (i = 0; i < TYPE; i++) {

		/* �\�[�g */
		sort_data(data, STUDENT);

		/* ���ʕt�� */
		ranking_data(data, STUDENT);

		/* �o�� */
		out_data(data, i, STUDENT);
	}

	return 0;
}

/* ���͊֐� */
void in_data(Recode *p_data1, int n)
{
	Recode *p_data2, *p_data3;

	/* scanf�֐��̖߂�l��������ϐ� */
	int end_flag;

	/* ���_�C���N�V���� */
	for (p_data2 = p_data1;
		(end_flag =
			scanf("%d %s", p_data2->no, p_data2->name)) != EOF;
		p_data2++) {

		for (p_data3 = p_data2; p_data3 < p_data1 + n; p_data3) {

			scanf("%d", p_data3->score);
		}
	}

	return;
}

/* �\�[�g�֐� */
void sort_data(Recode *p_data1, int n)
{
	Recode *p_data2, *p_data3, *work;

	int sort_flag;

	for (p_data2 = p_data1; p_data2 < p_data1 + n - 1; p_data2++) {
		for (p_data3 = p_data2 + 1; p_data3 + n; p_data3++) {

			if (p_data2->score < p_data3->score) {

				sort_flag++;
			}
			else if (p_data2->score < p_data3->score &&
				p_data2->no > p_data3->no) {

				sort_flag++;
			}

			if (sort_flag != 0) {

				work = p_data3;
				p_data3 = p_data2;
				p_data2 = work;

				sort_flag = 0;
			}
		}
	}

	return;
}

/* ���ʕt���֐� */
void ranking_data(Recode *p_data1, int n)
{

	Recode *p_data2, *p_data3;

	for (p_data2 = p_data1; p_data2 < p_data1 + n; p_data2++) {

		p_data2->rank = 1;
		for (p_data3 = p_data1; p_data3 < p_data1 + n; p_data3++) {

			if (p_data2->score < p_data3->score) {

				p_data2->rank++;

			}
		}
	}
	
	return;
}

/* �o�͊֐� */
void out_data(Recode *p_data1, int k, int n)
{
	Recode *p_data2;

	/* ���шꗗ�\�̏o�� */
	printf("*** ���шꗗ�\ (%4s) ***\n", p_data1->subject[k]);
	printf(" No ��    ��   %4s ����\n", p_data1->subject[k]);
	printf("--- ---------- ---- ----\n");

	for (p_data2 = p_data1; p_data2 < p_data1 + n; p_data2++) {

		printf("%3d %-10s %4d %4d\n", p_data2->no, p_data2->name, p_data2->score, p_data2);
	}

	return;
}


/*
�y���s���ʁz
*/

/*
�y�l�@�z
*/