#include <stdio.h>
#include <stdlib.h> /* rand�֐�, srand�֐� */
#include <time.h>   /* time�֐� */


/* �� ---------- �}���z�� ---------- �� */

char L_reel[9] = { '1','2','3','4','5','6','7','8','9' }; /* �����[���}���z�� */
char C_reel[9] = { '1','2','3','4','5','6','7','8','9' }; /* �����[���}���z�� */
char R_reel[9] = { '1','2','3','4','5','6','7','8','9' }; /* �E���[���}���z�� */


/* �� ---------- ���C���v���O���� ---------- �� */

int main()
{
	int seisu1, seisu2, seisu3; /* ��~�}�� */
	int coin = 50;              /* �R�C���̏������� */
	int key = 0;                /* �L�[���� */
	int end_flag = 0;           /* �Q�[���I���t���O */

	printf("�@�@-----------�@THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
	printf("�@�@|[ ][ ][ ]|�@TH                                  TH\n");
	printf("�@�@|[ ][ ][ ]|�@TH�@�Q�[���̐���                    TH\n");
	printf("�@�@|[ ][ ][ ]|�@TH                                  TH\n");
	printf("�@�@-----------�@TH�@[]���̐�����                    TH\n");
	printf("�@�@|         |�@TH�@�c�A���A�΂߂̉��ꂩ�ɑ����āA  TH\n");
	printf("�@�@|         |�@TH�@�����R�C��(�ŏ���50��)��        TH\n");
	printf("�@�@|         |�@TH�@100�ȏ㒙�߂悤�I               TH\n");
	printf("�@�@|         |�@TH�@1�Q�[��1���A����̓R�C��+13���B TH\n");
	printf("�@�@-----------�@TH                                  TH\n");
	printf("�@�@           �@THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");

	getchar(); /* �L�[���͑҂� */



/* �� ---------- �Q�[���I������ ---------- �� */

	while (end_flag == 0) {

		srand((unsigned)time(NULL)); /* ���s���̎��Ԃ����ɂ��āA���������闐���̌������߂� */


/* �� ---------- �L�[���͑ҋ@(���[����]��) ---------- �� */

		while (key == 0) {

			if (_kbhit()) { /* _kbhit�֐��������L�[�������ꂽ�ꍇ��0�ȊO�̒l��Ԃ� */

				key = _getch(); /* getch�֐����o�b�t�@���Ɏc���ꂽ�L�[�������o�� */
			}

				seisu1 = rand() % 10; /* 1�ȏ�A9�ȉ��̐����������� */
				seisu2 = rand() % 10; /* 1�ȏ�A9�ȉ��̐����������� */
				seisu3 = rand() % 10; /* 1�ȏ�A9�ȉ��̐����������� */

				printf("�@�@-----------\n");
				printf("�@�@|[%c][%c][%c]|\n", L_reel[seisu1], C_reel[seisu2], R_reel[seisu3]);
				printf("�@�@|[%c][%c][%c]|\n", L_reel[seisu1 + 1], C_reel[seisu2 + 1], R_reel[seisu3 + 1]);
				printf("�@�@|[%c][%c][%c]|\n", L_reel[seisu1 + 2], C_reel[seisu2 + 2], R_reel[seisu3 + 2]);
				printf("�@�@-----------\n");
				printf("�@�@|         |\n");
				printf("�@�@|         |\n");
				printf("�@�@|         |\n");
				printf("�@�@|         |\n");
				printf("�@�@-----------\n");
				printf("���݂̃R�C����%d���ł��B\n", coin);

				system("cls"); /* ��ʂ̃N���A */

			}

			coin = coin - 1; /* �����R�C����13�����Z */

			seisu1 = rand() % 7; /* 0�ȏ�A6�ȉ��̐����������� */
			seisu2 = rand() % 7; /* 0�ȏ�A6�ȉ��̐����������� */
			seisu3 = rand() % 7; /* 0�ȏ�A6�ȉ��̐����������� */


 /* �� ---------- ���۔��� ---------- �� */

			if ((L_reel[seisu1] == C_reel[seisu2] && C_reel[seisu2] == R_reel[seisu3]) ||                 /* ��i�}������ */
				(L_reel[seisu1 + 1] == C_reel[seisu2 + 1] && C_reel[seisu2 + 1] == R_reel[seisu3 + 1]) || /* ���i�}������ */
				(L_reel[seisu1 + 2] == C_reel[seisu2 + 2] && C_reel[seisu2 + 2] == R_reel[seisu3 + 2]) || /* ���i�}������ */
				(L_reel[seisu1] == C_reel[seisu2 + 1] && C_reel[seisu2 + 1] == R_reel[seisu3 + 2]) ||     /* �E���}������ */  
				(R_reel[seisu3] == C_reel[seisu2 + 1] && C_reel[seisu2 + 1] == R_reel[seisu1 + 2]))       /* �E����}������ */

			{
				coin = coin + 13; /* �����R�C����13�����Z */

				printf("�@�@-----------\n");
				printf("�@�@|[%c][%c][%c]|\n", L_reel[seisu1], C_reel[seisu2], R_reel[seisu3]);
				printf("�@�@|[%c][%c][%c]|\n", L_reel[seisu1 + 1], C_reel[seisu2 + 1], R_reel[seisu3 + 1]);
				printf("�@�@|[%c][%c][%c]|\n", L_reel[seisu1 + 2], C_reel[seisu2 + 2], R_reel[seisu3 + 2]);
				printf("�@�@-----------\n");
				printf("�@�@|         |\n");
				printf("�@�@|  ���!!  |\n");
				printf("�@�@|  +13��  |\n");
				printf("�@�@|         |\n");
				printf("�@�@-----------\n");
				printf("���݂̃R�C����%d���ł��B\n", coin);

				getchar(); /* �L�[���͑҂� */
			}
			else {

				printf("�@�@-----------\n");
				printf("�@�@|[%c][%c][%c]|\n", L_reel[seisu1], C_reel[seisu2], R_reel[seisu3]);
				printf("�@�@|[%c][%c][%c]|\n", L_reel[seisu1 + 1], C_reel[seisu2 + 1], R_reel[seisu3 + 1]);
				printf("�@�@|[%c][%c][%c]|\n", L_reel[seisu1 + 2], C_reel[seisu2 + 2], R_reel[seisu3 + 2]);
				printf("�@�@-----------\n");
				printf("�@�@|         |\n");
				printf("�@�@|  ʽ��!  |\n");
				printf("�@�@|         |\n");
				printf("�@�@|         |\n");
				printf("�@�@-----------\n");
				printf("���݂̃R�C����%d���ł��B\n", coin);

				getchar(); /* �L�[���͑҂� */
			}


/* �� ---------- �Q�[���I�[�o�[���� ---------- �� */

			if (coin <= 0 || coin >= 100)
			{
				end_flag = 1;
			}

			key = 0;
		}

	system("cls"); /* ��ʂ̃N���A */


/* �� ---------- �Q�[���N���A���� ---------- �� */

	if ( coin >= 100 )
	{
		printf("�@�@-----------�@THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
		printf("�@�@|[ ][ ][ ]|�@TH                                  TH\n");
		printf("�@�@|[ ][ ][ ]|�@TH�@                                TH\n");
		printf("�@�@|[ ][ ][ ]|�@TH                                  TH\n");
		printf("�@�@-----------�@TH�@          ���߂łƂ��I          TH\n");
		printf("�@�@|         |�@TH          �Q�[���N���A�ł��I      TH\n");
		printf("�@�@|         |�@TH�@            ('��')�m            TH\n");
		printf("�@�@|         |�@TH�@                                TH\n");
		printf("�@�@|         |�@TH                                  TH\n");
		printf("�@�@-----------�@TH                                  TH\n");
		printf("�@�@           �@THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");

		getchar(); /* �L�[���͑҂� */
	}


/* �� ---------- �Q�[���I�[�o�[���� ---------- �� */

	if ( coin <= 0 )
	{
		printf("�@�@-----------�@THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
		printf("�@�@|[ ][ ][ ]|�@TH                                  TH\n");
		printf("�@�@|[ ][ ][ ]|�@TH�@                                TH\n");
		printf("�@�@|[ ][ ][ ]|�@TH                                  TH\n");
		printf("�@�@-----------�@TH�@                                TH\n");
		printf("�@�@|         |�@TH            GAME OVER!            TH\n");
		printf("�@�@|         |�@TH�@                                TH\n");
		printf("�@�@|         |�@TH�@                                TH\n");
		printf("�@�@|         |�@TH                                  TH\n");
		printf("�@�@-----------�@TH                                  TH\n");
		printf("�@�@           �@THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");

		getchar(); /* �L�[���͑҂� */
	}

	return 0;
}