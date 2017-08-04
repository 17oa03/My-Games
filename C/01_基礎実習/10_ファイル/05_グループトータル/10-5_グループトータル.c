/*
�y�v���O�����T�v�z
����f�[�^���A
����ꗗ�\���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <stdlib.h> /* �f�[�^�ϊ������֐� */

#define ITEMS 12 /* ����f�[�^�̌��� */

#ifndef TRUE   /* TRUE ����`����Ă��Ȃ������� */
#define TRUE 1 /* TRUE �� 1 �ƒ�`���� */
#endif         /* �^�����߂̏I�� */

#ifndef FALSE   /* FALSE ����`����Ă��Ȃ������� */
#define FALSE 0 /* FALSE �� 0 �ƒ�`���� */
#endif          /* �^�����߂̏I�� */

typedef struct prodact { /* �\���̂̐錾 */
	int  check;       /* �`�[ */
	int  code;        /* ���i�R�[�h */
	char name[11];    /* ���i�� */
	int  unit_price;  /* �P�� */
	int  quantity;    /* ���� */
	int  price;       /* ���z(�P�� �~ ����) */
}Prodact; /* �\���̂̒�` */

int main(void)
{
	Prodact data[ITEMS]; /* Prodact�^�z��̒�` */

	FILE *fp; /* �X�g���[���|�C���^�錾 */

	char *fname = "uriage.dat"; /* �t�@�C���� */

	int sub_price = 0;   /* ���i�v */
	int total_price = 0; /* �����v */

	int sub_price_flag = FALSE; /* ���i�v�t���O(FALSE = OFF, TRUE = ON) */

	int i, j; /* �J�E���^�ϐ� */

	if ((fp = fopen("uriage.dat", "r")) == NULL) { /* �Ǎ��݃��[�h�Ńt�@�C���I�[�v�� */

		printf("���i�}�X�^(%s)���A�݂���܂���B\n", fname);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	for (i = 0;
		(fscanf(fp, "%d %d %s %d %d", /* �t�@�C���Ǎ��� */
			&data[i].check,
			&data[i].code,
			data[i].name,
			&data[i].unit_price,
			&data[i].quantity))
		!= EOF;
		i++) {

		data[i].price = data[i].unit_price * data[i].quantity; /* ���z�̌v�Z */
	}

	printf("          *** ����ꗗ�\ ***\n");
	printf("�`�[ �R�[�h ��  �i  �� �P�� ����   ���z\n");
	printf("---- ------ ---------- ---- ---- ------\n");

	for (j = 0; j < i; j++) { /* �o�̓��[�v */

		if (data[j].code != data[j + 1].code) { /* �����R�[�h�����݂̏��i�R�[�h�ƈ�v���Ȃ��ꍇ */

			sub_price_flag = TRUE; /* ���i�v�t���OON */
		}

		printf("%4d %6d %-10s %4d %4d %6d\n", /* �o�� */
			data[j].check,
			data[j].code,
			data[j].name,
			data[j].unit_price,
			data[j].quantity,
			data[j].price);

		sub_price += data[j].price; /* ���i�v�̌v�Z */

		total_price += data[j].price; /* �����v�̌v�Z */

		if (sub_price_flag == TRUE) { /* ���i�v�̏o�͔��� */

			printf("                  *** ���i�v *** %6d\n", sub_price);

			sub_price = 0; /* ���i�v�̃��Z�b�g */

			sub_price_flag = FALSE; /* ���i�v�t���OOFF */
		}
	}

	printf("                  *** �����v *** %6d\n", total_price);

	fclose(fp); /* �t�@�C���N���[�Y */

	return EXIT_SUCCESS; /* �v���O��������I��(EXIT_SUCCESS = 0) */
}

/*
�y���s����1�z
*** ����ꗗ�\ ***
�`�[ �R�[�h ��  �i  �� �P�� ����   ���z
---- ------ ---------- ---- ---- ------
1001     16 ���M         30   50   1500
1002     16 ���M         30  120   3600
1003     16 ���M         30    6    180
*** ���i�v ***   5280
1004     21 �m�[�g      100   15   1500
1005     21 �m�[�g      100   66   6600
1006     21 �m�[�g      100  108  10800
1007     21 �m�[�g      100    3    300
*** ���i�v ***  19200
1008     37 ��K        150   20   3000
1009     37 ��K        150  200  30000
*** ���i�v ***  33000
1010     40 �����S��     50   30   1500
1011     40 �����S��     50  150   7500
1012     40 �����S��     50    8    400
                  *** ���i�v ***   9400
                  *** �����v ***  66880
*/

/*
�y�l�@�z
fscanf�֐��ō\���̔z��Ƀt�@�C����Ǎ��ލۂɁA
�A�h���X���Z�q�ƁA
�J�E���^�ϐ����g�����Y���̎w���
�Y��Ȃ��悤�ɒ��ӁA
�s��l���o�͂��ꂽ�ꍇ�A
�Y���̎w��ԈႢ�̉\��������B
*/