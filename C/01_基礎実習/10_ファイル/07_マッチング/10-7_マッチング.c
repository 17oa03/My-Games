/*
�y�v���O�����T�v�z
���i�}�X�^1�Ə��i�}�X�^2����͂��A
�}�[�W�����ɂ�菤�i�}�X�^3���o�͂���B
�܂��A�������R�[�h����W���o�͂֏o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ITEMS_1 7 /* ���i�}�X�^1�̌��� */
#define ITEMS_2 5 /* ���i�}�X�^2�̌��� */

typedef struct prodact { /* �\���̂̐錾 */
	char division[5]; /* �敪 */
	int  code;        /* ���i�R�[�h */
	char name[11];    /* ���i�� */
	int  unit_price;  /* �P�� */
}Prodact; /* �\���̂̒�` */

int main(void)
{
	Prodact data1[ITEMS_1]; /* Prodact�^�z��̒�` */
	Prodact data2[ITEMS_2];

	FILE *fp1, *fp2, *fp3; /* �X�g���[���|�C���^�錾 */

	char *fname1 = "syohin3.mst"; /* �t�@�C���� */
	char *fname2 = "henko.trn";
	char *fname3 = "syohin4.mst";

	int i = 0, j = 0; /* �J�E���^�ϐ� */

	int no_count = 0; /* �ύX�Ȃ��̃J�E���^�ϐ� */
	int ad_count = 0; /* �ǉ������̃J�E���^�ϐ� */
	int up_count = 0; /* �ύX�����̃J�E���^�ϐ� */
	int dl_count = 0; /* �폜�����̃J�E���^�ϐ� */

	if ((fp1 = fopen(fname1, "r")) == NULL) { /* �t�@�C���I�[�v��(r)�ƃG���[���� */

		printf("�t�@�C���I�[�v��(%s)�Ɏ��s���܂����B\n", fname1);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	if ((fp2 = fopen(fname2, "r")) == NULL) { /* �t�@�C���I�[�v��(r)�ƃG���[���� */

		printf("�t�@�C���I�[�v��(%s)�Ɏ��s���܂����B\n", fname2);

		if (fclose(fp1)) { /* ���i�}�X�^3�̃t�@�C���N���[�Y */

			printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname1);
		}

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	if ((fp3 = fopen(fname3, "a")) == NULL) { /* �t�@�C���I�[�v��(a)�ƃG���[���� */

		printf("�t�@�C���I�[�v��(%s)�Ɏ��s���܂����B\n", fname3);

		if (fclose(fp1)) { /* ���i�}�X�^3�̃t�@�C���N���[�Y */

			printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname1);
		}

		if (fclose(fp2)) { /* �ύX�t�@�C���̃t�@�C���N���[�Y */

			printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname2);
		}

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	while ((fscanf(fp1, "%d %s %d", /* ���i�}�X�^3�̓Ǎ��� */
		&data1[i].code,
		 data1[i].name,
		&data1[i].unit_price))
		!= EOF) {

		i++;
	}

	while ((fscanf(fp2, "%s %d %s %d", /* �ύX�t�@�C���̓Ǎ��� */
		 data2[j].division,
		&data2[j].code,
		 data2[j].name,
		&data2[j].unit_price))
		!= EOF) {

		j++;
	}

	i = 0; /* �}�[�W�����ׂ̈ɏ����� */
	j = 0;

	while (i != ITEMS_1 && j != ITEMS_2) /* �}�[�W�������[�v */
	{
		if (data1[i].code < data2[j].code) { /* �ύX�Ȃ����� */

			fprintf(fp3, "%2d %-10s %3d\n", /* ���i�}�X�^3�̃f�[�^��ǉ������� */
				data1[i].code,
				data1[i].name,
				data1[i].unit_price);

			i++; /* ���̏��i�� */

			no_count++; /* �ύX�Ȃ��̃J�E���g */
		}
		else if(data1[i].code == data2[j].code)
		{

			if (strcmp(data2[j].division, "UP") == 0) { /* �ύX�������� */

				fprintf(fp3, "%2d %-10s %3d\n", /* �X�V�t�@�C���̃f�[�^��ǉ������� */
					data2[j].code,
					data2[j].name,
					data2[j].unit_price);

				i++; /* ���̏��i�� */
				j++;

				up_count++; /* �ύX�����̃J�E���g */
			}
			else /* �폜�������� */
			{

				i++; /* ���̏��i�� */
				j++;

				dl_count++; /* �폜�����̃J�E���g */
			}
		}
		else /* �ǉ��������� */
		{

			fprintf(fp3, "%2d %-10s %3d\n", /* �X�V�t�@�C���̃f�[�^��ǉ������� */
				data2[j].code,
				data2[j].name,
				data2[j].unit_price);

			j++; /* ���̏��i�� */

			ad_count++; /* �ǉ������̃J�E���g */
		}
	}

	printf("�ύX�Ȃ� : %3d ��\n", no_count); /* �ύX�Ȃ������o�� */
	printf("�ǉ����� : %3d ��\n", ad_count); /* �ǉ����������o�� */
	printf("�ύX���� : %3d ��\n", up_count); /* �ύX���������o�� */
	printf("�폜���� : %3d ��\n", dl_count); /* �폜���������o�� */

	if (fclose(fp1)) { /* ���i�}�X�^3�̃t�@�C���N���[�Y�ƃG���[���� */

		printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname1);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	if (fclose(fp2)) { /* �ύX�t�@�C���̃t�@�C���N���[�Y�ƃG���[���� */

		printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname2);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	if (fclose(fp3)) { /* ���i�}�X�^4�̃t�@�C���N���[�Y�ƃG���[���� */

		printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname3);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	return EXIT_SUCCESS; /* �v���O��������I��(EXIT_SUCCESS = 0) */
}

/*
�y���s���ʁz
�ύX�Ȃ� :   4 ��
�ǉ����� :   2 ��
�ύX���� :   2 ��
�폜���� :   1 ��

�ysyohin4.mst�z
16 ���M        30
20 ���~��     110
21 �m�[�g     120
40 �����S��    50
53 �O�p��K   300
63 �{�[���y��  80
74 ���x��     370
85 �R���p�X   260
*/

/*
�y�l�@�z
�u10-6_�}�[�W.c�v�̉��p�ɂȂ�A
�ύX�����̕�����̔���ɂ́A
strcmp�֐����g���ƊȒP�ɂȂ�B
*/