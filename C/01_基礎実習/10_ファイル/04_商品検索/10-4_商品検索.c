/*
�y�v���O�����T�v�z
���i�R�[�h����͂��A
�Y�����鏤�i�̏��i���A
�P�����������ďo�͂���B
�J��Ԃ������\�ŁA
���i�R�[�h��99�����͂��ꂽ��I������B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <stdlib.h>  /* exit�֐�, EXIT_FAILURE, EXIT_SUCCESS */
#include <windows.h> /* Sleep�֐� */

/* �\���̂̐錾 */
typedef struct prodact {
	int  no;
	char name[11];
	int  unit_price;
}Prodact; /* �\���̂̒�` */

int main(void)
{
	/* Prodact�^�ϐ��̒�` */
	Prodact data;

	/* �X�g���[���|�C���^�錾 */
	FILE *fp;

	/* �t�@�C���� */
	char *fname = "syohin.mst";

	/* ���̓R�[�h */
	int code = 0;

	/* ���i�R�[�h��v�t���O */
	int match_flag = FALSE; /* FALSE = OFF, TRUE = ON */

	/* �Ǎ��݃��[�h�Ńt�@�C���I�[�v�� */
	if ((fp = fopen("syohin.mst", "r")) == NULL) {

		printf("���i�}�X�^(%s)���A�݂���܂���B\n", fname);

		/* 5000ms(5�b)�ҋ@ */
		Sleep(5000);

		/* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	while (code != 99) {

		/* ���� */
		printf("���i�R�[�h ==> ");
		scanf("%d", &code);

		if (code != 99) {

			/* �Ǎ��݃��[�h�Ńt�@�C���I�[�v�� */
			fp = fopen("syohin.mst", "r");

			/* �t�@�C���Ǎ��� */
			while ((fscanf(fp, "%d %s %d",
						&data.no,
						data.name,
						&data.unit_price))
					!= EOF && 
					match_flag == FALSE){

				/* ���i�R�[�h��v���� */
				if (code == data.no) {

					/* �o�� */
					printf("���i�� : %s\n", data.name);
					printf("�P  �� : %d\n", data.unit_price);

					/* �t���O ON */
					match_flag = TRUE;
				}
			}

			/* ���i�R�[�h�s��v���� */
			if (match_flag == FALSE) {

				/* �o�� */
				printf("�Y�����鏤�i�͂���܂���B\n");

				/* �t���O OFF */
				match_flag = FALSE;
			}
		}

		/* �t���O OFF */
		match_flag = FALSE;
	}

	/* ���̓t�@�C�����N���[�Y */
	fclose(fp);

	/* �v���O��������I��(EXIT_SUCCESS = 0) */
	return EXIT_SUCCESS;
}

/*
�y���s����1�z
���i�R�[�h ==> 85
���i�� : �R���p�X
�P  �� : 230
���i�R�[�h ==> 43
�Y�����鏤�i�͂���܂���B
���i�R�[�h ==> 21
���i�� : �m�[�g
�P  �� : 100
���i�R�[�h ==> 99
�y���s����2�z
���i�R�[�h ==> 99
*/

/*
�y�l�@�z
58�s�ڂ��폜����ƁA
fscanf�֐��Ńt�@�C���Ǎ��݌�A
�������i�R�[�h����͂���ƁA
�Y�����鏤�i���Ȃ��Ƃ������ʂ��o���B

�܂�A�t�@�C���I�[�v����������
�ēx�t�@�C���Ǎ��݂��s���ƁA
�f�[�^���������Ǎ��܂�Ȃ��悤�ł��B