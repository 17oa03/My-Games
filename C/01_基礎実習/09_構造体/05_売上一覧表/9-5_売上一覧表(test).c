/*
�y�v���O�����T�v�z
����f�[�^�����_�C���N�V�������͂��A
�Y�����鏤�i�̏��i���A
�P�����������Ĕ���ꗗ�\���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

/* ���i�̐� */
#define ITEM 5

/* �\���̂̐錾 */
struct product {
	int  code;       /* ���i�R�[�h */
	char name[11];   /* ���i�� */
	int  unit_price; /* �P�� */
	int  quantity;   /* ���� */
	int  price;      /* ���z(�P�� �~ ����) */
};

int main(void)
{
	/* �\���̔z��̒�`�Ə����� */
	struct product data[] = {
		{ 21, "���M",      30 },
		{ 68, "�m�[�g",   100 },
		{ 37, "��K",     150 },
		{ 40, "�����S��",  50 },
		{ 85, "�R���p�X", 230 },
	};

	/* �\���̂̃|�C���^�ϐ��̐錾 */
	struct product *p_data;

	/* ���i�R�[�h(���_�C���N�V��������) */
	int code;

	/* ����(���_�C���N�V��������) */
	int	quantity;

	/* �����v */
	int total_price = 0;

	/* �I���t���O */
	int end_flag = 0;

	/* �\�� */
	printf("       *** ����ꗗ�\ ***\n");
	printf("�R�[�h ��  �i  �� �P�� ����  ���z\n");
	printf("------ ---------- ---- ---- -----\n");

	/* ���_�C���N�V�������͂�EOF�܂ŏ������J��Ԃ� */
	while ((end_flag =
			scanf("%d %d", &code, &quantity)) != EOF) {

		/* ���i�R�[�h����v����܂ŌJ��Ԃ� */
		for (p_data = data;
			p_data < data + ITEM && code != p_data->code;
			p_data++);

		/* ���i�R�[�h����v�����ۂ̏����Əo�� */
		if (p_data < data + ITEM) {

			/* ���ʂ̑�� */
			p_data->quantity = quantity;

			/* ���z(�P�� �~ ����)�̑�� */
			p_data->price = p_data->unit_price * p_data->quantity;

			/* �����v�̑�� */
			total_price += p_data->price;

			/* �o�� */
			printf("%6d %-10s %4d %4d %5d\n",
				p_data->code, 
				p_data->name,
				p_data->unit_price, 
				p_data->quantity,
				p_data->price);
		}
	}

	/* ���v���z�̏o�� */
	printf("---------------------------------\n");
	printf("                  ���v���z %6d\n", total_price);

	return 0;
}

/*
�y���s���ʁz
*** ����ꗗ�\ ***
�R�[�h ��  �i  �� �P�� ����  ���z
------ ---------- ---- ---- -----
    68 �m�[�g      100   30  3000
    85 �R���p�X    230   11  2530
    21 ���M         30  120  3600
    40 �����S��     50   22  1100
    37 ��K        150   18  2700
---------------------------------
                  ���v���z  12930
*/

/*
�y�l�@�z
while���̏�������
���_�C���N�V�����̋L�q���ł���A
��́u9-4_���i����(test)�v��
�����悤�ȏ����ɂȂ�B
*/