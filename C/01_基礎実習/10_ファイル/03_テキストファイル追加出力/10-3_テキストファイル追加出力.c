/*
�y�v���O�����T�v�z
���i�R�[�h�A���i���A�P������͂��A
���i�}�X�^�ɒǉ��o�͂���B
1��̎��s��1���R�[�h�̂ݏo�͂���B
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

	FILE *fp_in; /* �X�g���[���|�C���^�錾 */

	char *fname = "syohin.mst"; /* �t�@�C���� */
	
	printf("���i�}�X�^��1���R�[�h�ǉ����܂��B\n");

	printf("���i�R�[�h ==> ");
	scanf("%d", &data.no); /* ���� */

	printf("    ���i�� ==> ");
	scanf("%s", data.name); /* ���� */

	printf("      �P�� ==> ");
	scanf("%d", &data.unit_price); /* ���� */

	if ((fp_in = fopen("syohin.mst", "a")) == NULL) { /* �t�@�C���I�[�v��(a)�ƃG���[���� */

		printf("���̓t�@�C��(%s)���A���݂��܂���B\n", fname);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	fprintf(fp_in, "%d %-10s %4d\n", /* �t�@�C���ǉ������� */
		data.no,
		data.name,
		data.unit_price);

	printf("���i�}�X�^��1���R�[�h�ǉ����܂����B\n");

	fclose(fp_in); /* �t�@�C���N���[�Y */

	return EXIT_SUCCESS; /* �v���O��������I��(EXIT_SUCCESS = 0) */
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
�usyohin.mst�v���V�K�쐬�����B
*/