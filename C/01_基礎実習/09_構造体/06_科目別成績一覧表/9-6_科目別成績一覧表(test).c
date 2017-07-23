/*
�y�v���O�����T�v�z
���уf�[�^�����_�C���N�V�������͂��A
�\���̔z��Ɋi�[����B
�i�[�����\���̔z�񂩂�A
3�Ȗڂ̐��шꗗ�\���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

/* ���k�̐l�� */
#define STUDENT 5

/* �\���̂̐錾 */
struct record {
	int  no;       /* �ԍ� */
	char name[11]; /* ���� */
	int  english;  /* �p��̓_�� */
	int  math;     /* ���w�̓_�� */
	int  language; /* ����̓_�� */

	struct rank {
		int r_english;  /* �p��̏��� */
		int r_math;     /* ���w�̏��� */
		int r_language; /* ����̏��� */
	}Rank;

}data[STUDENT], tmp; /* �\���̂̒�` */

int main(void)
{
	/* �J�E���^�ϐ� */
	int i, j;

	/* scanf�֐��̖߂�l��������ϐ� */
	int end_flag;

	/* ���_�C���N�g�̉񐔂�������ϐ� */
	int count = 0;

	/* ���_�C���N�V���� */
	for (i = 0;
		(end_flag =
			scanf("%d %s %d %d %d",
				&data[i].no,
				 data[i].name,
				&data[i].english,
				&data[i].math,
				&data[i].language))
		!= EOF;
		i++) {

		/* ���ʂɁu1�v���� */
		data[i].Rank.r_english = 1;
		data[i].Rank.r_math = 1;
		data[i].Rank.r_language = 1;
	}

	/* ���_�C���N�g�񐔂��� */
	count = i;

	/*�p��̓_�����r*/
	for (i = 0; i < count - 1; i++) {
		for (j = i + 1; j < count; j++) {

			if (data[i].english < data[j].english) {

				/* ���ꊷ�� */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
			else if (data[i].english == data[j].english &&
				data[i].no > data[j].no) {

				/* ���ꊷ�� */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
		}
	}

	/* ���ʕt�� */
	for (i = 0; i < count; i++) {
		for (j = 0; j < count; j++) {

			if (data[i].english < data[j].english) {

				data[i].Rank.r_english++;
			}
		}
	}

	/* �p��̐��шꗗ�\ */
	printf("*** ���шꗗ�\ (�p��) ***\n");
	printf(" No ��    ��   �p�� ����\n");
	printf("--- ---------- ---- ----\n");

	for (i = 0; i < count; i++) {

		printf("%3d %-10s %4d %4d\n",
			data[i].no,
			data[i].name,
			data[i].english,
			data[i].Rank.r_english);
	}

	/*���w�̓_�����r*/
	for (i = 0; i < count - 1; i++) {
		for (j = i + 1; j < count; j++) {

			if (data[i].math < data[j].math) {

				/* ���ꊷ�� */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
			else if (data[i].math == data[j].math &&
				data[i].no > data[j].no) {

				/* ���ꊷ�� */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
		}
	}

	/* ���ʕt�� */
	for (i = 0; i < count; i++) {
		for (j = 0; j < count; j++) {

			if (data[i].math < data[j].math) {

				data[i].Rank.r_math++;
			}
		}
	}

	/* ���w�̐��шꗗ�\ */
	printf("\n*** ���шꗗ�\ (���w) ***\n");
	printf(" No ��    ��   ���w ����\n");
	printf("--- ---------- ---- ----\n");

	for (i = 0; i < count; i++) {

		printf("%3d %-10s %4d %4d\n",
			data[i].no,
			data[i].name,
			data[i].math,
			data[i].Rank.r_math);
	}

	/*����̓_�����r*/
	for (i = 0; i < count - 1; i++) {
		for (j = i + 1; j < count; j++) {

			if (data[i].language < data[j].language) {

				/* ���ꊷ�� */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
			else if (data[i].language == data[j].language &&
				data[i].no > data[j].no) {

				/* ���ꊷ�� */
				tmp     = data[j];
				data[j] = data[i];
				data[i] = tmp;
			}
		}
	}

	/* ���ʕt�� */
	for (i = 0; i < count; i++) {
		for (j = 0; j < count; j++) {

			if (data[i].language < data[j].language) {

				data[i].Rank.r_language++;
			}
		}
	}

	/* ����̐��шꗗ�\ */
	printf("\n*** ���шꗗ�\ (����) ***\n");
	printf(" No ��    ��   ���� ����\n");
	printf("--- ---------- ---- ----\n");

	for (i = 0; i < count; i++) {

		printf("%3d %-10s %4d %4d\n",
			data[i].no,
			data[i].name,
			data[i].language,
			data[i].Rank.r_language);
	}

	return 0;
}

/*
�y���s���ʁz
*** ���шꗗ�\ (�p��) ***
No ��    ��   �p�� ����
--- ---------- ---- ----
147 takahashi    81    1
206 tanaka       81    1
553 suzuki       70    3
447 watanabe     65    4
312 sato         60    5

*** ���шꗗ�\ (���w) ***
No ��    ��   ���w ����
--- ---------- ---- ----
553 suzuki       92    1
447 watanabe     88    2
312 sato         82    3
147 takahashi    66    4
206 tanaka       66    4

*** ���шꗗ�\ (����) ***
No ��    ��   ���� ����
--- ---------- ---- ----
447 watanabe     90    1
147 takahashi    74    2
312 sato         74    2
553 suzuki       74    2
206 tanaka       70    5
*/

/*
�y�l�@�z
�u9-2_�Ј�����v�ƁA
�u9-3_���ѕ\�ꗗ�v�̉��p�A
�\�[�X�R�[�h�͒����Ȃ邪�A
�킩��₷���悤��
�Ȗږ��Ƀ\�[�g�Ə��ʕt���̏�����
�������B
*/