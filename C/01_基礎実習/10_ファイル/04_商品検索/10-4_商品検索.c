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
#include <stdlib.h> /* �f�[�^�ϊ������֐� */

#ifndef TRUE   /* TRUE ����`����Ă��Ȃ������� */
#define TRUE 1 /* TRUE �� 1 �ƒ�`���� */
#endif         /* �^�����߂̏I�� */

#ifndef FALSE   /* FALSE ����`����Ă��Ȃ������� */
#define FALSE 0 /* FALSE �� 0 �ƒ�`���� */
#endif          /* �^�����߂̏I�� */

typedef struct prodact { /* �\���̂̐錾 */
	int  no;         /* ���i�R�[�h */
	char name[11];   /* ���i�� */
	int  unit_price; /* �P�� */
}Prodact; /* �\���̂̒�` */

int main(void)
{
	Prodact data; /* Prodact�^�ϐ��̒�` */

	FILE *fp; /* �X�g���[���|�C���^�錾 */

	char *fname = "syohin.mst"; /* �t�@�C���� */

	int code = 0; /* ���̓R�[�h */

	int match_flag = FALSE; /* ��v�t���O(FALSE = OFF, TRUE = ON) */

	if ((fp = fopen("syohin.mst", "r")) == NULL) { /* �t�@�C���I�[�v��(r)�ƃG���[���� */

		printf("���i�}�X�^(%s)���A�݂���܂���B\n", fname);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	while (code != 99) {

		printf("���i�R�[�h ==> ");
		scanf("%d", &code); /* ���� */

		if (code != 99) {

			fseek(fp, 0, SEEK_SET); /* �t�@�C���|�C���^�̈ʒu��擪�ɖ߂� */

			while ((fscanf(fp, "%d %s %d", /* �t�@�C���Ǎ��� */
						&data.no,
						data.name,
						&data.unit_price))
						!= EOF &&
					match_flag == FALSE) {

				if (code == data.no) { /* ���i�R�[�h����v�����ꍇ */

					printf("���i�� : %s\n", data.name);
					printf("�P  �� : %d\n", data.unit_price);

					match_flag = TRUE; /* �t���OON */
				}
			}

			if (match_flag == FALSE) { /* ���i�R�[�h����v���Ă��Ȃ��ꍇ */

				printf("�Y�����鏤�i�͂���܂���B\n");

				match_flag = FALSE; /* �t���OOFF */
			}
		}

		match_flag = FALSE; /* �t���OOFF */
	}

	fclose(fp); /* �t�@�C���N���[�Y */

	return EXIT_SUCCESS; /* �v���O��������I��(EXIT_SUCCESS = 0) */
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
���i�R�[�h�̈�v���胋�[�v���ɁA
�t�@�C���|�C���^�̈ʒu��擪�ɖ߂��Ȃ��ƁA
��v�������i�R�[�h�ȑO�̏��i�R�[�h�ɊY�����Ȃ��Ȃ��Ă��܂��B

�܂��AC����ł́A
�W���Ńu�[���l(FALSE, TRUE)�́A
�}�N���萔�Ƃ��Ē�`����Ă��Ȃ��̂ŁA
�^�����߂ɂ���ă}�N����`���Ă���B
*/