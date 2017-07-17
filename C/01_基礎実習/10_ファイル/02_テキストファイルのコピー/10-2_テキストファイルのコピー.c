/*
�y�v���O�����T�v�z
���o�̓t�@�C��������͂��A
���̓t�@�C���̃f�[�^��
�o�̓t�@�C���ɃR�s�[����B
�R�s�[��ɃR�s�[�������R�[�h�����o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <stdlib.h> /* exit�֐�, EXIT_FAILURE, EXIT_SUCCESS */
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
	FILE *fp_in, *fp_out;

	/* �t�@�C���� */
	char fname_in[FILENAME_MAX];
	char fname_out[FILENAME_MAX];
	
	/* �J�E���^�ϐ� */
	int count = 0;

	printf("���̓t�@�C���� ==> ");
	scanf("%s", fname_in);

	/* �Ǎ��݃��[�h�Ńt�@�C���I�[�v�� */
	if ((fp_in = fopen(fname_in, "r")) == NULL) {

		printf("���̓t�@�C��(%s)���A���݂��܂���B\n", fname_in);

		/* 5000ms(5�b)�ҋ@ */
		Sleep(5000);

		/* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	printf("�o�̓t�@�C���� ==> ");
	scanf("%s", fname_out);

	/* �����݃��[�h�Ńt�@�C���I�[�v�� */
	if ((fp_out = fopen(fname_out, "w")) == NULL){

		printf("�o�̓t�@�C��(%s)�́A�쐬�ł��܂���B\n", fname_out);

		/* ���̓t�@�C�����N���[�Y */
		fclose(fp_in);

		/* 5000ms(5�b)�ҋ@ */
		Sleep(5000);

		/* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	printf("\n***�t�@�C���R�s�[�J�n***\n");

	/* �t�@�C���Ǎ��� */
	while ((fscanf(fp_in, "%d %s %d",
			&data.no,
			 data.name,
			&data.unit_price))
			!= EOF){

		/* �t�@�C�������� */
		fprintf(fp_out, "%d %-10s %4d\n",
			data.no,
			data.name,
			data.unit_price);

		count++;
	}

	printf("%d ���R�[�h���R�s�[���܂����B\n", count);
	printf("***�t�@�C���R�s�[�I��***\n");

	/* ���̓t�@�C�����N���[�Y */
	fclose(fp_in);

	/* �o�̓t�@�C�����N���[�Y */
	fclose(fp_out);

	/* 5000ms(5�b)�ҋ@ */
	Sleep(5000);

	/* �v���O��������I��(EXIT_SUCCESS = 0) */
	return EXIT_SUCCESS;
}

/*
�y���s����1�z
���̓t�@�C���� ==> syohin.mst
�o�̓t�@�C���� ==> syohin.bak

***�t�@�C���R�s�[�J�n***
5 ���R�[�h���R�s�[���܂����B
***�t�@�C���R�s�[�I��***
�y���s����2�z
���̓t�@�C���� ==> uriage.mst
���̓t�@�C��(uriage.mst)���A���݂��܂���B
�y���s����3�z
���̓t�@�C���� ==> syohin.mst
�o�̓t�@�C���� ==> /
�o�̓t�@�C��(/)�́A�쐬�ł��܂���B
*/

/*
�y�l�@�z
fopen�֐��̃��[�h��������("w")�Ŏg�p�A
fscanf�֐��Ńt�@�C���I�[(EOF)�܂œǍ��݁A
fprintf�֐��Ńt�@�C���o�͂��Ă���B

Sleep�֐��Ɋւ��ẮA
���s�t�@�C�����J�����ۂɁA
���s���ʂ��m�F����ׂɎg���Ă���B

60�s�ڂœ��̓t�@�C�����N���[�Y�A
����͏o�̓t�@�C�������N���[�Y����āA
���̓t�@�C���̃������̉��������Ȃ��̂�
�h���ׂɂȂ�B
*/