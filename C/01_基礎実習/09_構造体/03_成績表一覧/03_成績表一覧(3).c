/*
�y�v���O�����T�v�z
���уf�[�^�����_�C���N�V�������͂��A
�\���̔z��Ɋi�[����B
�S�Ċi�[��ɐ��шꗗ�\���o�͂���B
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
	int i, j;

	/* �f�[�^�̓ǂݍ��ݏI���t���O */
	int end_flag = 0;

	/* ���_�C���N�g�񐔂̃J�E���^�ϐ� */
	int count;

	/* ���_�C���N�V�������� */
	for (i = 0; 
		(end_flag = scanf("%d %s %d %d %d",
			&data[i].no, data[i].name,
			&data[i].english, &data[i].math,
			&data[i].language) != EOF);
		i++) {

		data[i].total = 
			data[i].english + data[i].math + data[i].language;

		data[i].average = 
			(double)data[i].total / 3;

		data[i].rank = 1;
	}

	count = i;

	/* ���ʂ����߂鏈�� */
	for (i = 0; i < count - 1; i++) {
		for (j = 0; j < count; j++) {

			if (data[i].total < data[j].total) {

				data[i].rank++;
			}
		}
	}

	/* �o�� */
	printf(" NO ��    ��   �p�� ���w ���� ���v  ���� ����\n");
	printf("--- ---------- ---- ---- ---- ---- ----- ----\n");

	for (i = 0; i < count; i++) {

		printf("%3d ",    data[i].no);
		printf("%-11s",   data[i].name);
		printf("%4d ",    data[i].english);
		printf("%4d ",    data[i].math);
		printf("%4d ",    data[i].language);
		printf("%4d ",    data[i].total);
		printf("%5.1lf ", data[i].average);
		printf("%4d\n",   data[i].rank);
	}

	return 0;
}

/*
�y���s���ʁz
 NO ��    ��   �p�� ���w ���� ���v  ���� ����
--- ---------- ---- ---- ---- ---- ----- ----
312 sato         60   82   74  216  72.0    5
553 suzuki       70   92   74  236  78.7    2
147 takahashi    81   66   74  221  73.7    3
206 tanaka       81   66   70  217  72.3    4
447 watanabe     65   88   90  243  81.0    1
*/

/*
�y�l�@�z
for���̏������Ɋ֐����L�q������@�ł��B

�������������Ȃ�ꍇ�́A
����֐����쐬���A
�Z���L�q������@������B
*/