/*
�����������y�܂��A�f�o�b�O���������Ă��܂���I�z����������
*/

/*�y�v���O�����z*/
#include <stdio.h>

/* �\���̔z��̗v�f�� */
#define ELEMENT 10

/* �\���̂̐錾 */
struct record {
	int    no;	 /* �ԍ� */
	char   name[11]; /* ���O */
	int    english;  /* �p��̓_�� */
	int    math;     /* ���w�̓_�� */
	int    language; /* ����̓_�� */
	int    total;    /* ���v�_ */
	double average;  /* ���ϓ_ */
	int    rank;     /* ���� */
};

int main(void)
{
	/* �\���̕ϐ��̒�` */
	struct record data[ELEMENT];

	/* �J�E���^�ϐ� */
	int i, j, k;

	/* �f�[�^�̓ǂݍ��ݏI���t���O */
	int end_flag = 0;

	/* ���́A���v�A���ρA���ʂ̏����Ɠǂݍ��݂̃J�E���g */
	for (k = 0; end_flag != EOF; k++) {

		scanf("%d %s %d %d %d",
			&data[k].no, data[k].name, &data[k].english, &data[k].math, &data[k].language);

		data[k].total = data[k].english + data[k].math + data[k].language;
		data[k].average = (double) data[k].total / 3;
		data[k].rank = 1;
	}

	/* ���ʂ����߂鏈�� */
	for (i = 0; i < k - 1; i++) {
		for (j = i + 1; j < k; j++) {

			if (data[i].total < data[j].total) {

				data[i].rank++;
			}
		}
	}

	/* �o�� */
	printf(" NO ��    ��   �p�� ���w ���� ���v  ���� ����\n");
	printf("--- ---------- ---- ---- ---- ---- ----- ----\n");

	for (i = 0; i < k; i++) {

		printf("%3d ", data[i].no);
		printf("%-11s", data[i].name);
		printf("%4d ", data[i].english);
		printf("%4d ", data[i].math);
		printf("%4d ", data[i].language);
		printf("%4d ", data[i].total);
		printf("%4.1lf ", data[i].average);
		printf("%4d", data[i].rank);
	}

	return 0;
}

/*
�y���s���ʁz
*/

/*
�y�l�@�z
*/