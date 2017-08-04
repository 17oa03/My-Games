/*
�y�v���O�����T�v�z
���o�̓t�@�C��������͂��A
���̓t�@�C���̃f�[�^��
�o�̓t�@�C���ɃR�s�[����B
�R�s�[��ɃR�s�[�������R�[�h�����o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <stdlib.h> /* �f�[�^�ϊ������֐� */

/* �\���̂̐錾 */
typedef struct prodact {
	int  no;         /* ���i�R�[�h */
	char name[11];   /* ���i�� */
	int  unit_price; /* �P�� */
}Prodact; /* �\���̂̒�` */

int main(void)
{
	Prodact data; /* Prodact�^�ϐ��̒�` */

	FILE *fp_in, *fp_out; /* �X�g���[���|�C���^�錾 */

	char fname_in[FILENAME_MAX]; /* �t�@�C�������i�[���镶���z�� */
	char fname_out[FILENAME_MAX];
	
	int count = 0; /* �J�E���^�ϐ� */

	printf("���̓t�@�C���� ==> ");
	scanf("%s", fname_in); /* ���� */

	if ((fp_in = fopen(fname_in, "r")) == NULL) { /* �Ǎ��݃��[�h�Ńt�@�C���I�[�v�� */

		printf("���̓t�@�C��(%s)���A���݂��܂���B\n", fname_in);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	printf("�o�̓t�@�C���� ==> ");
	scanf("%s", fname_out); /* ���� */

	if ((fp_out = fopen(fname_out, "w")) == NULL){ /* �����݃��[�h�Ńt�@�C���I�[�v�� */

		printf("�o�̓t�@�C��(%s)�́A�쐬�ł��܂���B\n", fname_out);

		fclose(fp_in); /* ���̓t�@�C�����N���[�Y */

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	printf("\n***�t�@�C���R�s�[�J�n***\n");

	while ((fscanf(fp_in, "%d %s %d", /* �t�@�C���Ǎ��� */
			&data.no,
			 data.name,
			&data.unit_price))
			!= EOF){

		fprintf(fp_out, "%d %-10s %4d\n", /* �t�@�C�������� */
			data.no,
			data.name,
			data.unit_price);

		count++;
	}

	printf("%d ���R�[�h���R�s�[���܂����B\n", count);
	printf("***�t�@�C���R�s�[�I��***\n");

	fclose(fp_in); /* ���̓t�@�C���̃N���[�Y */
	fclose(fp_out); /* �o�̓t�@�C���̃N���[�Y */

	return EXIT_SUCCESS; /* �v���O��������I��(EXIT_SUCCESS = 0) */
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
*/