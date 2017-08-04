/*
�y�v���O�����T�v�z
���уf�[�^�����_�C���N�V�������͂��A
�\���̔z��Ɋi�[����B
�S�Ċi�[��ɐ��шꗗ�\���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define STUDENT 5 /* ���k�̐l�� */

struct record { /* �\���̂̐錾 */
	int    no;	     /* �ԍ� */
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
	struct record data[STUDENT]; /* �\���̔z��̒�` */

	int i, j; /* �J�E���^�ϐ� */

	int end_flag = 0; /* �I���t���O */

	int count;/* ���_�C���N�g�� */

	for (i = 0;
		(end_flag = scanf("%d %s %d %d %d", /* ���_�C���N�V�������� */
			&data[i].no, 
			 data[i].name,
			&data[i].english, 
			&data[i].math,
			&data[i].language) != EOF);
		i++) {

		data[i].total = data[i].english + data[i].math + data[i].language; /* ���v�̌v�Z */

		data[i].average = (double)data[i].total / 3; /* ���ς̌v�Z */

		data[i].rank = 1; /* ���ʂɁu1�v���� */
	}

	count = i; /* ���_�C���N�g�񐔂��� */

	for (i = 0; i < count - 1; i++) { /* ���ʕt�� */
		for (j = 0; j < count; j++) {

			if (data[i].total < data[j].total) { /* ������葊��̍��v�_���傫���ꍇ */

				data[i].rank++; /* ���ʂ�������(���ʂ� +1) */
			}
		}
	}

	printf(" NO ��    ��   �p�� ���w ���� ���v  ���� ����\n");
	printf("--- ---------- ---- ---- ---- ---- ----- ----\n");

	for (i = 0; i < count; i++) { /* �o�̓��[�v */

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
for���̏��������ɁA
���_�C���N�V�������͂��������Ƃ��ł���B

���ʕt���́A
for����2�d���[�v�Ŕ�r���Ȃ���A
�����������肪�傫���ꍇ�A
���ʂ�������(���ʂ� +1)�B

���ӓ_�Ƃ��āA
�������[�v�̃J�E���^�ϐ��́A
�u0�v�ɂ��Ȃ���
���̐��k�Ɣ�r����Ȃ��B

�Ⴆ�΁A
�uj = i + 1�v�ɂ���ƁA
2�l�ڂ�1�l�ڂƔ�r����Ȃ��ׁA
���ʕt�������������Ȃ�B

�܂��A
���ʂ�\�ߑ�����Ă��܂����ꍇ�A
�������v�_�̐��k�Ə��ʂ������ɂȂ�Ȃ��B
*/