/*
�y�v���O�����T�v�z
����f�[�^�����_�C���N�V�������͂��A
�Y�����鏤�i�̏��i���A
�P�����������Ĕ���ꗗ�\���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ITEM 5 /* ���i�̐� */

struct product { /* �\���̂̐錾 */
	int  code;       /* ���i�R�[�h */
	char name[11];   /* ���i�� */
	int  unit_price; /* �P�� */
	int  quantity;   /* ���� */
	int  price;      /* ���z(�P�� �~ ����) */
};

int main(void)
{
	struct product data[] = { /* �\���̔z��̒�`�Ə����� */
		{ 21, "���M",      30 },
		{ 68, "�m�[�g",   100 },
		{ 37, "��K",     150 },
		{ 40, "�����S��",  50 },
		{ 85, "�R���p�X", 230 },
	};

	struct product *p_data; /* �\���̂̃|�C���^�ϐ��̐錾 */

	int code; /* ���i�R�[�h(���_�C���N�V��������) */

	int	quantity; /* ����(���_�C���N�V��������) */

	int total_price = 0; /* �����v */

	int end_flag = 0; /* �I���t���O */

	printf("       *** ����ꗗ�\ ***\n");
	printf("�R�[�h ��  �i  �� �P�� ����  ���z\n");
	printf("------ ---------- ---- ---- -----\n");
	
	while ((end_flag = scanf("%d %d", &code, &quantity)) != EOF) { /* �t�@�C���I�[�܂Ń��[�v */

		for (p_data = data;	/* ���i�R�[�h����v����܂ŌJ��Ԃ� */
			 p_data < data + ITEM && code != p_data->code;
			 p_data++);

		if (p_data < data + ITEM) { /* ���i�R�[�h����v�����ۂ̏����Əo�� */

			p_data->quantity = quantity; /* ���ʂ̑�� */

			p_data->price = p_data->unit_price * p_data->quantity; /* ���z(�P�� �~ ����)�̑�� */

			total_price += p_data->price; /* �����v�̑�� */

			printf("%6d %-10s %4d %4d %5d\n", /* �o�� */
				p_data->code, 
				p_data->name,
				p_data->unit_price, 
				p_data->quantity,
				p_data->price);
		}
	}

	printf("---------------------------------\n");
	printf("                  ���v���z %6d\n", total_price); /* ���v���z�̏o�� */

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