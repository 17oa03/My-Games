/*
�y�v���O�����T�v�z
���i�R�[�h�A���i���A�P������͂��A
���i�}�X�^�ɒǉ��o�͂���B
1��̎��s��1���R�[�h�̂ݏo�͂���B
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
	FILE *fp_in;

	/* �t�@�C���� */
	char *fname = "syohin.mst";
	
	printf("���i�}�X�^��1���R�[�h�ǉ����܂��B\n");

	/* ���� */
	printf("���i�R�[�h ==> ");
	scanf("%d", &data.no);

	printf("    ���i�� ==> ");
	scanf("%s", data.name);

	printf("      �P�� ==> ");
	scanf("%d", &data.unit_price);

	/* �Ǎ��݃��[�h�Ńt�@�C���I�[�v�� */
	if ((fp_in = fopen("syohin.mst", "a")) == NULL) {

		printf("���̓t�@�C��(%s)���A���݂��܂���B\n", fname);

		/* 5000ms(5�b)�ҋ@ */
		Sleep(5000);

		/* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	/* �t�@�C�������� */
	fprintf(fp_in, "%d %-10s %4d\n",
		data.no,
		data.name,
		data.unit_price);

	printf("���i�}�X�^��1���R�[�h�ǉ����܂����B\n");

	/* �������̉�� */
	fclose(fp_in);

	/* 5000ms(5�b)�ҋ@ */
	Sleep(5000);

	/* �v���O��������I��(EXIT_SUCCESS = 0) */
	return EXIT_SUCCESS;
}

/*
�y���s����1�z
���i�}�X�^��1���R�[�h�ǉ����܂��B
���i�R�[�h ==> 74
���i�� ==> ���x��
�P�� ==> 370
���i�}�X�^��1���R�[�h�ǉ����܂����B
�y���s����2�z
���i�}�X�^��1���R�[�h�ǉ����܂��B
���i�R�[�h ==> 85
���i�� ==> �R���p�X
�P�� ==> 230
���i�}�X�^��1���R�[�h�ǉ����܂����B
*/

/*
�y�l�@�z
fopen�֐��̃��[�h��ǉ�������("a")�Ŏg�p�A
fprintf�֐��œ��͂��ꂽ�f�[�^��
�usyohin.mst�v�Ƀt�@�C�������݂��Ă���B

�usyohin.mst�v�����݂��Ȃ��ꍇ�A
�J�����g�f�B���N�g����
�usyohin.mst�v���V�K�쐬�����B
*/