/*
�y�v���O�����T�v�z
����f�[�^�����_�C���N�V�������͂��A
�Y�����鏤�i�̏��i���A
�P�����������Ĕ���ꗗ�\��
�R�}���h�v�����v�g�ƃt�@�C���ɏo�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>  /* �R���\�[�����o�� */
#include <stdlib.h> /* �f�[�^�ϊ������֐� */

#define ITEMS 5 /* ���i�� */

typedef struct { /* �\���̂̐錾 */
	int  code;       /* ���i�R�[�h */
	char name[11];   /* ���i�� */
	int  unit_price; /* �P�� */
	int  quantity;   /* ���� */
}Product; /* �\���̂̒�` */

int Search(Product *, int); /* �T������������֐� */

int main(void)
{
	Product data[] = { /* �\���̔z��̏����� */
		{ 21, "���M",      30 },
		{ 68, "�m�[�g",   100 },
		{ 37, "��K",     150 },
		{ 40, "�����S��",  50 },
		{ 85, "�R���p�X", 230 },
	};

	FILE *fp; /* �X�g���[���|�C���^�̐錾 */

	char *title = "       *** ����ꗗ�\ ***\n�R�[�h ��  �i  �� �P�� ����  ���z\n------ ---------- ---- ---- -----\n";
	char *total = "---------------------------------\n                  ���v���z";

	char *fname = "syohin.bak"; /* �o�̓t�@�C���� */

	int price;           /* ���z(�P�� �~ ����) */
	int total_price = 0; /* �����v���z */

	int code;     /* ���i�R�[�h(���_�C���N�V��������) */
	int	quantity; /* ����(���_�C���N�V��������) */

	int i; /* �J�E���^�ϐ� */

	int end_flag = 0; /* �I���t���O */

	if ((fp = fopen(fname, "w")) == NULL) { /* �t�@�C���I�[�v��"w"(�����݃��[�h)�ƃG���[���� */

		printf("�t�@�C��(%s)�̃I�[�v���Ɏ��s���܂����B\n", fname);

		if (fclose(fp)) { /* �t�@�C���N���[�Y�ƃG���[���� */

			printf("�t�@�C���N���[�Y�Ɏ��s���܂����B\n");
		}
		
		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	printf("%s", title);      /* �\��̏o�� */
	fprintf(fp, "%s", title); /* �\��̃t�@�C�������� */

	while ((end_flag = scanf("%d %d", &code, &quantity)) != EOF) { /*�uEOF�v�܂Ńt�@�C���Ǎ��� */

		i = Search(data, code); /* �T������ */

		if (i < ITEMS) { /* �J�E���^�ϐ��̒l�����i����菬�����ꍇ(���i�R�[�h����v�����ꍇ) */

			data[i].quantity = quantity; /* ���ʂ̑�� */

			price = data[i].unit_price * quantity; /* ���z(�P�� �~ ����)�̑�� */

			total_price += price; /* �����v�̌v�Z�Ƒ�� */

			printf("%6d %-10s %4d %4d %5d\n", /* ��ʏo�� */
				data[i].code,
				data[i].name,
				data[i].unit_price,
				data[i].quantity,
				price);

			fprintf(fp, "%6d %-10s %4d %4d %5d\n", /* �t�@�C���o�� */
				data[i].code,
				data[i].name,
				data[i].unit_price,
				data[i].quantity,
				price);
		}
		else /* ����ȊO�̏ꍇ(���i�R�[�h����v���Ȃ������ꍇ) */
		{
			printf("���i�R�[�h(%d)�́A���݂��܂���B\n", code);
			fprintf(fp, "���i�R�[�h(%d)�́A���݂��܂���B\n", code);
		}
	}
	
	printf("%s %6d\n", total, total_price);      /* �����v���z�̏o�� */
	fprintf(fp, "%s %6d\n", total, total_price); /* �����v���z�̃t�@�C�������� */

	if (fclose(fp)) { /* �t�@�C���N���[�Y�ƃG���[���� */

		printf("�t�@�C���N���[�Y�Ɏ��s���܂����B\n");

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	return EXIT_SUCCESS; /* �v���O��������I��(EXIT_SUCCESS = 0) */
}

int Search(Product *p_data, int code)
{
	int i; /* �J�E���^�ϐ� */

	for (i = 0; i < ITEMS && code != (p_data + i)->code; i++); /* �T������ */
	
	return i; /* �J�E���^�ϐ��̒l��Ԃ� */
}

/*
�y���s���ʁz
C:\Users\uesr>test < uriage.dat
*** ����ꗗ�\ ***
�R�[�h ��  �i  �� �P�� ����  ���z
------ ---------- ---- ---- -----
    68 �m�[�g      100   30  3000
���i�R�[�h(77)�́A���݂��܂���B
    85 �R���p�X    230   11  2530
    21 ���M         30  120  3600
���i�R�[�h(66)�́A���݂��܂���B
    40 �����S��     50   22  1100
    37 ��K        150   18  2700
���i�R�[�h(22)�́A���݂��܂���B
---------------------------------
                  ���v���z  12930

�yuriage.dat�z
68  30
77  62
85  11
21 120
66  20
40  22
37  18
22  92

�ysyohin.bak�z
�R�[�h ��  �i  �� �P�� ����  ���z
------ ---------- ---- ---- -----
    68 �m�[�g      100   30  3000
���i�R�[�h(77)�́A���݂��܂���B
    85 �R���p�X    230   11  2530
    21 ���M         30  120  3600
���i�R�[�h(66)�́A���݂��܂���B
    40 �����S��     50   22  1100
    37 ��K        150   18  2700
���i�R�[�h(22)�́A���݂��܂���B
---------------------------------
���v���z  12930
*/

/*
�y���z
�\���̂̐錾�ƒ�`���K�v�A
���͂̓��_�C���N�V�����A
�o�͂̓R�}���h�v�����v�g�ƃt�@�C���ɏo�́A
���i�R�[�h�s��v�̃G���[�������K�v�B

�܂��A
�T���������֐��ɂ���\��������B
*/