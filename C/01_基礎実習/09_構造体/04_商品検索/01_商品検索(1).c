/*
�y�v���O�����T�v�z
���i�R�[�h��W�����͂����͂��A
�Y�����鏤�i�̏��i���A
�P�����������ĕW���o�͂֏o�͂���B
99�����͂��ꂽ�ꍇ�̓v���O�����I���A
���ʏo�͂ɂ͍\���̂̃|�C���^�ϐ����g�p����B
*/

/*�y�v���O�����z*/
#include <stdio.h>

/* ���i�̐� */
#define ITEM 5

/* �\���̂̐錾 */
struct product {
	int  no;
	char name[11];
	int  price;
};

int main(void)
{
	/* �\���̔z��̒�` */
	struct product data[] = {
		{ 21, "���M",      30 },
		{ 68, "�m�[�g",   100 },
		{ 37, "��K",     150 },
		{ 40, "�����S��",  50 },
		{ 85, "�R���p�X", 230 },
	};

	/* �\���̂̃|�C���^�ϐ��̐錾 */
	struct product *p_data;

	/* �A�h���X�Z�b�g */
	p_data = data;

	/* ���i�R�[�h�̓��͒l���i�[����ϐ� */
	int code = 0;

	/* �J�E���^�ϐ� */
	int i;

	/* �I���R�[�h�����͂����܂ŏ������J��Ԃ� */
	while (code != 99) { 

		/* ���� */
		printf("���i�R�[�h ==> ");
		scanf("%d", &code);

		if (code != 99) {

			/* �Y�����鏤�i������΁A�J�E���^�ϐ��̃C���N�������g���~�߂� */
			for (i = 0; i < ITEM && code != (p_data + i)->no; i++);

			if (i < ITEM) {

				/* �o�� */
				printf("���i��  :  %s\n", (p_data + i)->name);
				printf("�P  ��  :  %d\n", (p_data + i)->price);
			}
			else
			{

				/* �o�� */
				printf("�Y�����鏤�i�͂���܂���B\n");
			}
		}
	}

	return 0;
}

/*
�y���s����1�z
���i�R�[�h ==> 37
���i��  :  ��K
�P  ��  :  150
���i�R�[�h ==> 12
�Y�����鏤�i�͂���܂���B
���i�R�[�h ==> 85
���i��  :  �R���p�X
�P  ��  :  230
���i�R�[�h ==> 99

�y���s����2�z
���i�R�[�h ==> 99
*/

/*
�y�l�@�z
�u05_�z��v�t�H���_��
�u06_�݌ɐ������v���Q�l�ɏ����܂����B

�\���̂̃|�C���^�ϐ��̐錾�ƁA
�u�A���[���Z�q(->)�v�̎g�������w�Ԉׂ̓��e�ł��B
*/