/*
�y�v���O�����T�v�z
����f�[�^���A
����ꗗ�\���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <stdlib.h>  /* exit�֐�, EXIT_FAILURE, EXIT_SUCCESS */
#include <windows.h> /* Sleep�֐� */

/* ����f�[�^�̌��� */
#define ITEMS 12

#ifndef TRUE   /* TRUE ����`����Ă��Ȃ������� */
#define TRUE 1 /* TRUE �� 1 �ƒ�`���� */
#endif         /* �^�����߂̏I�� */

#ifndef FALSE   /* FALSE ����`����Ă��Ȃ������� */
#define FALSE 0 /* FALSE �� 0 �ƒ�`���� */
#endif          /* �^�����߂̏I�� */

/* �\���̂̐錾 */
typedef struct prodact {
	int  check;       /* �`�[ */
	int  code;        /* ���i�R�[�h */
	char name[11];    /* ���i�� */
	int  unit_price;  /* �P�� */
	int  quantity;    /* ���� */
	int  price;       /* ���z(�P�� �~ ����) */
}Prodact; /* �\���̂̒�` */

int main(void)
{
	/* Prodact�^�z��̒�` */
	Prodact data[ITEMS];

	/* �X�g���[���|�C���^�錾 */
	FILE *fp;

	/* �t�@�C���� */
	char *fname = "uriage.dat";

	/* ���i�v�Ƒ����v */
	int sub_price = 0;
	int total_price = 0;

	/* ���i�v�t���O */
	int sub_price_flag = FALSE; /* FALSE = OFF, TRUE = ON */

	/* �J�E���^�ϐ� */
	int i, j;

	/* �Ǎ��݃��[�h�Ńt�@�C���I�[�v�� */
	if ((fp = fopen("uriage.dat", "r")) == NULL) {

		printf("���i�}�X�^(%s)���A�݂���܂���B\n", fname);

		/* 5000ms(5�b)�ҋ@ */
		Sleep(5000);

		/* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	/* �t�@�C���Ǎ��� */
	for (i = 0;
		(fscanf(fp, "%d %d %s %d %d",
			&data[i].check,
			&data[i].code,
			data[i].name,
			&data[i].unit_price,
			&data[i].quantity))
		!= EOF;
		i++) {

		/* ���z�̌v�Z */
		data[i].price = data[i].unit_price * data[i].quantity;
	}

	printf("          *** ����ꗗ�\ ***\n");
	printf("�`�[ �R�[�h ��  �i  �� �P�� ����   ���z\n");
	printf("---- ------ ---------- ---- ---- ------\n");

	/* �o�̓��[�v */
	for (j = 0; j < i; j++) {

		/* �����R�[�h���������i�R�[�h������ */
		if (data[j].code != data[j + 1].code) {

			/* ���i�v�t���O ON */
			sub_price_flag = TRUE;
		}

		/* �o�� */
		printf("%4d %6d %-10s %4d %4d %6d\n",
			data[j].check,
			data[j].code,
			data[j].name,
			data[j].unit_price,
			data[j].quantity,
			data[j].price);

		/* ���i�v�̌v�Z */
		sub_price += data[j].price;

		/* �����v�̌v�Z */
		total_price += data[j].price;

		/* ���i�v�̏o�͔��� */
		if (sub_price_flag == TRUE) {

			printf("                  *** ���i�v *** %6d\n", sub_price);

			/* ���i�v�̃��Z�b�g */
			sub_price = 0;

			/* ���i�v�t���O OFF */
			sub_price_flag = FALSE;
		}
	}

	printf("                  *** �����v *** %6d\n", total_price);

	/* ���̓t�@�C�����N���[�Y */
	fclose(fp);

	/* 10000ms(10�b)�ҋ@ */
	Sleep(10000);

	/* �v���O��������I��(EXIT_SUCCESS = 0) */
	return EXIT_SUCCESS;
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
�u9-5_����ꗗ�\�v�̉��p�A
����ƃt���O�̎g�������d�v�ɂȂ�B

fscanf�֐��ō\���̔z��Ƀt�@�C����Ǎ��ލۂɁA
�A�h���X���Z�q�ƁA
�J�E���^�ϐ����g�����Y���̎w���
�Y��Ȃ��悤�ɒ��ӁA
�s��l���o�͂��ꂽ�ꍇ�A
�Y���̎w��ԈႢ�̉\��������B
*/