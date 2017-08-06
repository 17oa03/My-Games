/*
�y�v���O�����T�v�z
���i�}�X�^1�Ə��i�}�X�^2����͂��A
�}�[�W�����ɂ�菤�i�}�X�^3���o�͂���B
�܂��A�������R�[�h����W���o�͂֏o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <stdlib.h>

#define ITEMS_1 4 /* ���i�}�X�^1�̌��� */
#define ITEMS_2 3 /* ���i�}�X�^2�̌��� */

typedef struct prodact { /* �\���̂̐錾 */
	int  code;       /* ���i�R�[�h */
	char name[11];   /* ���i�� */
	int  unit_price; /* �P�� */
}Prodact; /* �\���̂̒�` */

int main(void)
{
	Prodact data_1[ITEMS_1]; /* Prodact�^�z��̒�` */
	Prodact data_2[ITEMS_2];

	FILE *fp1, *fp2, *fp3; /* �X�g���[���|�C���^�錾 */

	char *fname1 = "syohin1.mst"; /* �t�@�C���� */
	char *fname2 = "syohin2.mst";
	char *fname3 = "syohin3.mst";

	int i = 0, j = 0; /* �J�E���^�ϐ� */

	if ((fp1 = fopen(fname1, "r")) == NULL) { /* �t�@�C���I�[�v��(r)�ƃG���[���� */

		printf("�t�@�C���I�[�v��(%s)�Ɏ��s���܂����B\n", fname1);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	if ((fp2 = fopen(fname2, "r")) == NULL) { /* �t�@�C���I�[�v��(r)�ƃG���[���� */

		printf("�t�@�C���I�[�v��(%s)�Ɏ��s���܂����B\n", fname2);

		if (fclose(fp1)) { /* ���i�}�X�^1�̃t�@�C���N���[�Y */

			printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname1);
		}

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	if ((fp3 = fopen(fname3, "a")) == NULL) { /* �t�@�C���I�[�v��(a)�ƃG���[���� */

		printf("�t�@�C���I�[�v��(%s)�Ɏ��s���܂����B\n", fname3);

		if (fclose(fp1)) { /* ���i�}�X�^1�̃t�@�C���N���[�Y */

			printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname1);
		}

		if (fclose(fp2)) { /* ���i�}�X�^2�̃t�@�C���N���[�Y */

			printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname2);
		}

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	while ((fscanf(fp1, "%d %s %d", /* ���i�}�X�^1�̓Ǎ��� */
		&data_1[i].code,
		 data_1[i].name,
		&data_1[i].unit_price))
		!= EOF) {

		i++;
	}

	while ((fscanf(fp2, "%d %s %d", /* ���i�}�X�^2�̓Ǎ��� */
		&data_2[j].code,
		 data_2[j].name,
		&data_2[j].unit_price))
		!= EOF) {

		j++;
	}

	printf("���̓t�@�C��(���i�}�X�^1) : %3d ���R�[�h\n", i); /* ���͏������R�[�h���o�� */
	printf("���̓t�@�C��(���i�}�X�^2) : %3d ���R�[�h\n", j);

	i = 0; /* �}�[�W�����ׂ̈ɏ����� */
	j = 0;

	while (i != ITEMS_1 && j != ITEMS_2) /* �}�[�W�������[�v */
	{
		if (data_1[i].code < data_2[j].code) { /* ���i�R�[�h�̑召��r */

			fprintf(fp3, "%2d %-10s %3d\n", /* ���i�}�X�^1�̃f�[�^��ǉ������� */
				data_1[i].code,
				data_1[i].name,
				data_1[i].unit_price);

			i++; /* ���̏��i�� */
		}
		else
		{

			fprintf(fp3, "%2d %-10s %3d\n", /* ���i�}�X�^2�̃f�[�^��ǉ������� */
				data_2[j].code,
				data_2[j].name,
				data_2[j].unit_price);

			j++; /* ���̏��i�� */
		}
	}

	if (i != ITEMS_1) { /* ���i�}�X�^1�̃f�[�^���A�܂��S�ď������܂�Ă��Ȃ��ꍇ */

		while (i < ITEMS_1) { /* �ǉ������݃��[�v */

			fprintf(fp3, "%2d %-10s %3d\n", /* ���i�}�X�^1�̃f�[�^��ǉ������� */
				data_1[i].code,
				data_1[i].name,
				data_1[i].unit_price);

			i++; /* ���̏��i�� */
		}
	}

	if (j != ITEMS_2) { /* ���i�}�X�^2�̃f�[�^���A�܂��S�ď������܂�Ă��Ȃ��ꍇ */

		while (j < ITEMS_2) { /* �ǉ������݃��[�v */

			fprintf(fp3, "%2d %-10s %3d\n", /* ���i�}�X�^2�̃f�[�^��ǉ������� */
				data_2[j].code,
				data_2[j].name,
				data_2[j].unit_price);

			j++; /* ���̏��i�� */
		}
	}

	printf("�o�̓t�@�C��(���i�}�X�^3) : %3d ���R�[�h\n", i + j); /* �o�͏������R�[�h���o�� */

	if (fclose(fp1)) { /* ���i�}�X�^1�̃t�@�C���N���[�Y�ƃG���[���� */

		printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname1);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	if (fclose(fp2)) { /* ���i�}�X�^2�̃t�@�C���N���[�Y�ƃG���[���� */

		printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname2);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	if (fclose(fp3)) { /* ���i�}�X�^3�̃t�@�C���N���[�Y�ƃG���[���� */

		printf("�t�@�C���N���[�Y(%s)�Ɏ��s���܂����B\n", fname3);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	return EXIT_SUCCESS; /* �v���O��������I��(EXIT_SUCCESS = 0) */
}

/*
�y���s����(syohin3.mst)�z
16 ���M       30
21 �m�[�g    100
37 ��K      150
40 �����S��   50
63 �{�[���y�� 80
74 ���x��    370
85 �R���p�X  230
*/

/*
�y�l�@�z
while���̌p�������̏����ԈႢ�ɒ��ӁA
�s������������ꍇ�́A
�J�E���^�ϐ��̃g���[�X�������Ɨǂ��B
*/