/*
THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH

�@�@�@�@�@�@�@�@�@   �u���b�N���Ƃ�

THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH
*/


/* �� ---------- �W���w�b�_�t�@�C�� ---------- �� */

#include <stdio.h>  /* �W�����o�͊֐� */
#include <stdlib.h> /* �X�^���_�[�h�֐� */
#include <conio.h>  /* �R���\�[�����o�͊֐� */
#include <time.h>   /* time�֐� */


/* �� ---------- �萔��` ---------- �� */

#define BLK_H  4 /* �u���b�N�̏c�̑傫�� */
#define BLK_W  4 /* �u���b�N�̉��̑傫�� */
#define BD_H  23 /* �Q�[����ʂ̏c�̑傫�� */
#define BD_W  18 /* �Q�[����ʂ̉��̑傫�� */


/* �� ---------- �O���֐� ---------- �� */

void BD_img(void);            /* �������z��̃f�[�^���L���ŕ\��������O���ϐ� */
void BD_init_1(void);         /* �ǂ̃f�[�^�̑���ƊO���ϐ��̏�����������O���ϐ� */
void BD_init_2(void);         /* ���ݍ��W�ƕϐ��̏�����������O���ϐ� */
void BD_reflect_1(void);      /* �u���b�N�ƃQ�[����ʂ̃f�[�^�𔽉f������O���ϐ� */
void BD_reflect_2(void);      /* �u���b�N�̏�����̃f�[�^�𔽉f������O���ϐ� */
void BLK_clear_row(void);     /* �u���b�N�̏�����Ƀf�[�^��������O���ϐ� */
void BLK_clear_search(void);  /* �u���b�N�������ɑ����Ă�ӏ���T���O���ϐ� */
void BLK_control(void);       /* �L�[���͎��Ƀu���b�N�𓮍삳����O���ϐ� */
void BLK_hit_left(void);      /* �u���b�N�̍����̓��蔻�������O���ϐ� */
void BLK_hit_right(void);     /* �u���b�N�̉E���̓��蔻�������O���ϐ� */
void BLK_hit_down(void);      /* �u���b�N�̉����̓��蔻�������O���ϐ� */
void BLK_hit_up(void);        /* �u���b�N�̏o���ʒu�̓��蔻�������O���ϐ� */
void BLK_hit_turn(void);      /* �u���b�N����]������̓��蔻�������O���ϐ� */
void BLK_CW(void);            /* �u���b�N���E�ɉ񂷊O���ϐ�(Clockwise = CW) */
void BLK_CCW(void);           /* �u���b�N�����ɉ񂷊O���ϐ�(Counter clockwise = CCW) */
void BLK_fall(void);          /* �u���b�N�����݂�y���W����+1����������O���ϐ� */
void BLK_fix(void);           /* ������̃u���b�N���Œ肷��O���ϐ� */
void BLK_respawn(void);       /* ���̃u���b�N�̐���������O���ϐ� */
void BLK_save(void);          /* ���݂̃u���b�N�̕\����BD_back�ɕۑ�����O���ϐ� */
void BLK_speed(void);         /* �u���b�N�̗������x(����)�𒲐߂���O���ϐ� */
void GAME_OVER(void);         /* �Q�[���I�[�o�[�̏�������O���ϐ� */

int BD_back[BD_H][BD_W];      /* �ǂ̒l���i�[����z�� */
int BD_front[BD_H][BD_W];     /* �u���b�N�ƕǂ����킹���l���i�[����z�� */
int BLK[BLK_H][BLK_W];        /* �u���b�N�̕\���̒l���i�[����z�� */
int BLK_clear_flag;           /* �u���b�N�̏������ׂ���̔���̌��ʂ��i�[����O���ϐ� */
int BLK_clear_mark[BD_H - 3]; /* �u���b�N�̏������ׂ���̖ڈ��t����O���ϐ�([20]�͓����̗v�f��) */
int BLK_clear_speed;          /* �u���b�N�̏������̎��Ԃ𒲐߂���O���ϐ� */
int BLK_hit_flag;             /* �u���b�N�̓��蔻��̌��ʂ��i�[����O���ϐ� */
int BLK_rand_no;              /* �u���b�N��I������ۂ̗������i�[����O���ϐ� */
int BLK_respawn_flag;         /* �u���b�N�̐����̔���̌��ʂ��i�[����O���ϐ� */
int BLK_turn[BLK_H][BLK_W];   /* �u���b�N�̉�]��̒l���i�[����2�����z�� */
int BLK_turn_flag;            /* �u���b�N�̉�]��Ԃ��i�[����O���ϐ� */
int BLK_x;                    /* �u���b�N��x���W���i�[����O���ϐ� */
int BLK_y;                    /* �u���b�N��y���W���i�[����O���ϐ� */
int GAME_OVER_flag;           /* �Q�[���I�[�o�[�̔���̌��ʂ��i�[����O���ϐ� */


/* �� ---------- �u���b�N�̎�� ---------- �� */

int BLK_type[BLK_H * 6][BLK_W * 4] = { /* 6��ނ̌`��4��ނ̉�]��Ԃ�ǉ����� */
	/*
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	*/
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	{ 0,1,1,0, 0,1,1,0, 0,1,1,0, 0,1,1,0 },
	{ 0,1,1,0, 0,1,1,0, 0,1,1,0, 0,1,1,0 },
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	/*
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	*/
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	{ 0,1,1,0, 0,0,1,0, 0,1,0,0, 0,1,1,0 },
	{ 0,0,1,0, 0,1,1,0, 0,1,1,0, 0,1,0,0 },
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	/*
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	*/
	{ 0,0,0,0, 1,0,0,0, 0,0,0,1, 0,0,0,0 },
	{ 0,0,1,0, 0,1,0,0, 0,0,1,0, 0,1,0,0 },
	{ 0,1,0,0, 0,0,1,0, 0,1,0,0, 0,0,1,0 },
	{ 1,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,1 },

	/*
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	*/
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	{ 0,1,0,1, 0,0,1,1, 0,0,0,0, 0,1,1,0 },
	{ 0,1,1,1, 0,0,1,0, 0,1,1,1, 0,0,1,0 },
	{ 0,0,0,0, 0,0,1,1, 0,1,0,1, 0,1,1,0 },
	/*
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	*/
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	{ 0,1,0,0, 0,0,0,0, 0,1,0,0, 0,1,0,0 },
	{ 0,1,1,0, 1,1,1,0, 1,1,0,0, 1,1,1,0 },
	{ 0,1,0,0, 0,1,0,0, 0,1,0,0, 0,0,0,0 },
	/*
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	�������� �������� �������� ��������
	*/
	{ 0,1,0,0, 0,0,0,0, 0,1,0,0, 0,0,0,0 },
	{ 0,1,0,0, 1,1,1,1, 0,1,0,0, 1,1,1,1 },
	{ 0,1,0,0, 0,0,0,0, 0,1,0,0, 0,0,0,0 },
	{ 0,1,0,0, 0,0,0,0, 0,1,0,0, 0,0,0,0 }
};


/* �� ---------- ���C���v���O���� ---------- �� */

int main() {

	BD_init_1(); /* �ǂ̍쐬�ƊO���ϐ��̏����� */

	printf("��                        ��\n"); /* �^�C�g����� */
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��     �u���b�N���Ƃ�     ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��  HTHTHTHTHTHTHTHTHHTH  ��\n");
	printf("��  HT                TH  ��\n");
	printf("��  HT PUSH ENTER KYE TH  ��\n");
	printf("��  HT                TH  ��\n");
	printf("��  HTHTHTHTHTHTHTHHTHTH  ��\n");
	printf("��                        ��\n");
	printf("��  ---- ��� γγ ----    ��\n");
	printf("��                        ��\n");
	printf("��    �� ��  ��޳         ��\n");
	printf("��   �� z    ����         ��\n");
	printf("��   ��      ���ׯ�       ��\n");
	printf("��                        ��\n");
	printf("����������������������������\n\n");

	getchar(); /* getcher�֐��Ń^�C�g����ʂ̃L�[���͑҂��������� */

	while (GAME_OVER_flag == 0) {  /* �Q�[���I�[�o�[�̏����𖞂����Ȃ����艺�L���s���J��Ԃ� */

		if (BLK_clear_flag == 0) { /* �����u���b�N�������ɑ����Ă��Ȃ��ꍇ */
			BLK_respawn();         /* ���̃u���b�N�̐���������O���ϐ� */
			GAME_OVER();           /* �Q�[���I�[�o�[�̉�ʂ�\��������O���ϐ� */
			BLK_control();         /* �L�[���͎��Ƀu���b�N�𓮍삳����O���ϐ� */
			BD_reflect_1();        /* �u���b�N�ƃQ�[����ʂ̃f�[�^�𔽉f������ */
			BLK_fix();             /* �������u���b�N���Œ肷�鏈�� */
			BLK_fall();            /* �u���b�N�����݂�y���W����+1����������O���ϐ� */
		}
		else                       /* ���邢�̓u���b�N�������ɑ������ꍇ */
		{
			BLK_clear_row(); /* �u���b�N�̏�����Ƀf�[�^��������O���ϐ� */
			BD_reflect_2();  /* �u���b�N�̏�����̃f�[�^�𔽉f������ */
		}

		BD_img();    /* 2�����z��̃f�[�^���L���ŕ\������O���ϐ� */
		BLK_speed(); /* �u���b�N�̗������x�̏��� */
	}

	system("cls"); /* �R���\�[���̕\�����e���N���A���� */

	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��  HTHTHTHTHTHTHTHTHHT   ��\n");
	printf("��  HT               HT   ��\n");
	printf("��  HT   GAME OVER   HT   ��\n");
	printf("��  HT               HT   ��\n");
	printf("��  HTHTHTHTHTHTHTHHTHT   ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("��                        ��\n");
	printf("����������������������������\n\n");

	getchar(); /* getcher�֐��ŃQ�[���I�[�o�[��ʂ̃L�[���͑҂��������� */

	return 0;
}


/* �� ---------- �Q�[����ʂ̋L���\�� ---------- �� */

void BD_img() {
	int i, j;

	system("cls"); /* �R���\�[���̕\�����e���N���A���� */

	for (i = 0; i<BD_H - 2; i++) {
		for (j = 2; j<BD_W - 2; j++) {
			if (BD_front[i][j] == 9)printf("��");      /* �z��̒l��9�̕����́��\��(�Ǖ\��) */
			else if (BD_front[i][j] == 1)printf("��"); /* �z��̒l��1�̕����́��\��(�u���b�N�\��) */
			else if (BD_front[i][j] == 2)printf("��"); /* �z��̒l��2�̕����́��\��(�u���b�N�d��) */
			else printf("�@");                         /* �z��̒l��0�̕����͑S�p�X�y�[�X�\��(�ړ��\�̈�) */
		}
		printf("\n"); /* �����̃��[�v��ɉ��s���Ȃ��Ɖ��z�񂪂Ȃ����ĉ�ʕ\�����Œ��ꒃ�ɂȂ� */
	}
}


/* �� ---------- �ǂ̍쐬�ƊO���ϐ��̏����� ---------- �� */

void BD_init_1() {
	int i, j;

	for (i = 0; i<BD_H; i++) {
		for (j = 0; j<BD_W; j++) {

			BD_back[i][2] = 9;     /* �Q�[����ʂ̔z��ɍ����ǉ����ĕǂ��쐬 */
			BD_back[i][15] = 9;     /* �Q�[����ʂ̔z��ɉE���ǉ����ĕǂ��쐬 */
			BD_back[20][j] = 9;     /* �Q�[����ʂ̔z��̉��s��ǉ����ĕǂ��쐬 */
		}
	}

	BLK_x = 7;               /* ���݂�x���W���u���b�N�̏o���ʒu�ɂ��� */
	BLK_y = 0;               /* ���݂�y���W���u���b�N�̏o���ʒu�ɂ��� */
	BLK_hit_flag = 0;        /* False = ���薳��  True = ����L�� */
	GAME_OVER_flag = 0;      /* False = ���薳��  True = ����L�� */
	BLK_respawn_flag = 1;    /* False = ��������  True = �����L�� */
	BLK_clear_flag = 0;      /* False = ���薳��  True = ����L�� */
	BLK_rand_no = 0;         /* ���������K�v�ȕϐ� */
	BLK_clear_speed = 0;     /* ���������K�v�ȕϐ� */
	BLK_turn_flag = 0;       /* ���������K�v�ȕϐ� */

	srand((unsigned)time(NULL)); /* rand�֐��̒l�����s�̓x�ɕω�����l�ɂ��� */
}


/* �� ---------- ���ݍ��W�ƕϐ��̏����� ---------- �� */

void BD_init_2() {
	BLK_x = 7;            /* ���݂�x���W���u���b�N�̏o���ʒu�ɂ��� */
	BLK_y = 0;            /* ���݂�y���W���u���b�N�̏o���ʒu�ɂ��� */
	BLK_respawn_flag = 1; /* False = ��������  True = �����L�� */
	BLK_turn_flag = 0;    /* �u���b�N�̉�]��Ԃ����������� */
}


/* �� ---------- �u���b�N�ƃQ�[����ʂ̃f�[�^�𔽉f ---------- �� */

void BD_reflect_1() {
	int i, j, x, y;

	for (i = 0; i<BD_H; i++) {
		for (j = 0; j<BD_W; j++) {
			BD_front[i][j] = BD_back[i][j]; /* �Q�[����ʂ̃f�[�^�𔽉f������ */
		}
	}

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			BD_front[BLK_y + y][BLK_x + x] += BLK[y][x]; /* �u���b�N�̃f�[�^�������� */
		}
	}
}


/* �� ---------- �u���b�N�̏�����̃f�[�^�̔��f ---------- �� */

void BD_reflect_2() {
	int i, j;

	for (i = 0; i<BD_H; i++) {
		for (j = 0; j<BD_W; j++) {
			BD_front[i][j] = BD_back[i][j]; /* �u���b�N�̏�����̃f�[�^�𔽉f������ */
		}
	}
}


/* �� ---------- �u���b�N�̏�����̏��� ---------- �� */

void BLK_clear_row() {
	int i, j;
	int leave_row[20] = { 0 };   /* �������Ȃ��u���b�N�̕ۑ��� */
	int plus_row = 0;            /* �Y���̐����l�߂� */

	if (BLK_clear_speed < 2) {                 /* �u���b�N�̏������̑ҋ@���� */
		for (i = 0; i<BD_H - 3; i++) {
			if (BLK_clear_mark[i] == 0) {      /* ������������u���b�N���������ꍇ */
				for (j = 3; j<BD_W - 3; j++) {
					BD_back[i][j] = 0;         /* ���̃u���b�N�̃f�[�^���������� */
				}
			}
		}
		BLK_clear_speed++;
	}
	else
	{
		for (i = BD_H - 4; i >= 0; i--) {
			if (BLK_clear_mark[i] != 0) { /* ������������u���b�N���Ȃ������ꍇ */
				leave_row[plus_row] = i;
				plus_row++;               /* �u���b�N�̍s���l�߂� */
			}
		}

		plus_row = 0;
		for (i = BD_H - 4; i >= 0; i--) {
			for (j = 3; j<BD_W - 3; j++) {
				BD_back[i][j] = BD_back[leave_row[plus_row]][j];
			}
			plus_row++;
		}

		BLK_clear_flag = 0;  /* �u���b�N�̏������ׂ���̔���������� */
		BLK_clear_speed = 0; /* �u���b�N�̏������̑ҋ@���Ԃ������� */
		BD_init_2();         /* ���ݍ��W�ƕϐ��̏����� */
	}
}


/* �� ---------- �u���b�N�̏���������T�� ---------- �� */

void BLK_clear_search() {
	int i, j;

	for (i = 0; i<BD_H - 3; i++) {
		BLK_clear_mark[i] = 0;     /* 0 = �������ׂ��� 1 = �������ׂ���ł͂Ȃ� */
	}

	for (i = 0; i<BD_H - 3; i++) {
		for (j = 3; j<BD_W - 3; j++) {
			if (BD_back[i][j] == 0) {  /* �����󔒂̃f�[�^�����݂���ꍇ */
				BLK_clear_mark[i] = 1; /* �u���b�N�̏������ׂ���ł͂Ȃ� */
				break;
			}
		}
	}

	for (i = 0; i<BD_H - 3; i++) {
		if (BLK_clear_mark[i] == 0) { /* �����󔒂̃f�[�^�����݂���ꍇ */
			BLK_clear_flag = 1;       /* �u���b�N�̏������ׂ���ł͂Ȃ�  */
			break;
		}
	}
}


/* �� ---------- �u���b�N�̑��� ---------- �� */

void BLK_control() {
	int key = 0;

	if (_kbhit()) { /* _kbhit�֐��������L�[�������ꂽ�ꍇ��0�ȊO�̒l��Ԃ� */

		key = _getch(); /* getch�֐����o�b�t�@���Ɏc���ꂽ�L�[�������o�� */
		if (key == 0 || key == 224)key = _getch();

		switch (key) {
		case 0x4b:                   /* �����L�[�̓��͂��������ꍇ */
			BLK_hit_left();          /* �u���b�N�̍����̓��蔻����m�F���� */
			if (BLK_hit_flag == 0) { /* ���������ɓ��蔻�肪�Ȃ����x���W+1 */
				BLK_x--;
			}
			break;

		case 0x4d:                   /* �E���L�[�̓��͂��������ꍇ */
			BLK_hit_right();         /* �u���b�N�E���̓��蔻����m�F���� */
			if (BLK_hit_flag == 0) { /* �����E���ɓ��蔻�肪�Ȃ����x���W+1 */
				BLK_x++;
			}
			break;

		case 0x50:                      /* �����L�[�̓��͂��������ꍇ */
			BLK_hit_down();             /* �u���b�N�̉����̓��蔻����m�F���� */
			while (BLK_hit_flag == 0) { /* ���������ɓ��蔻�肪�Ȃ����y���W+1���J��Ԃ� */
				BLK_y++;
				BLK_hit_down();         /* �u���b�N�̉����̓��蔻����m�F���� */
			}
			break;

		case 0x48:     /* ����L�[�̓��͂��������ꍇ */
			BLK_CW();  /* �u���b�N���E��]������ */
			break;

		case 'z':      /* z�L�[�̓��͂��������ꍇ */
			BLK_CCW(); /* �u���b�N������]������ */
			break;

		default:       /* ����ȊO�̃L�[���͂��������ꍇ */
			break;     /* �������Ȃ� */
		}

	}
}


/* �� ---------- �u���b�N�̍����̓��蔻�� ---------- �� */

void BLK_hit_left() {
	int x, y;

	BLK_hit_flag = 0; /* �u���b�N�̓��蔻��������� */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			if (BLK[y][x] != 0) {                               /* �����󔒂łȂ��ꍇ */
				if (BD_back[BLK_y + y][BLK_x + (x - 1)] != 0) { /* �����u���b�N�̈ړ��悪�󔒂łȂ��ꍇ */
					BLK_hit_flag = 1;                           /* �u���b�N�̓��蔻��̏����𖞂��� */
				}
			}
		}
	}
}


/* �� ---------- �u���b�N�̉E���̓��蔻�� ---------- �� */

void BLK_hit_right() {
	int x, y;

	BLK_hit_flag = 0; /* �u���b�N�̓��蔻��������� */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			if (BLK[y][x] != 0) {                               /* �����󔒂łȂ��ꍇ */
				if (BD_back[BLK_y + y][BLK_x + (x + 1)] != 0) { /* �����u���b�N�̈ړ��悪�󔒂łȂ��ꍇ */
					BLK_hit_flag = 1;                           /* �u���b�N�̓��蔻��̏����𖞂��� */
				}
			}
		}
	}
}


/* �� ---------- �u���b�N�̉����̓��蔻�� ---------- �� */

void BLK_hit_down() {
	int x, y;

	BLK_hit_flag = 0; /* �u���b�N�̓��蔻��������� */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			if (BLK[y][x] != 0) {                               /* �����󔒂łȂ��ꍇ */
				if (BD_back[BLK_y + (y + 1)][BLK_x + x] != 0) { /* �����u���b�N�̈ړ��悪�󔒂łȂ��ꍇ */
					BLK_hit_flag = 1;                           /* �u���b�N�̓��蔻��̏����𖞂��� */
				}
			}
		}
	}
}


/* �� ---------- �u���b�N�̏o���ʒu�̓��蔻�� ---------- �� */

void BLK_hit_up() {
	int x, y;

	BLK_hit_flag = 0; /* �u���b�N�̓��蔻��������� */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			if (BLK[y][x] != 0) {                         /* �����󔒂łȂ��ꍇ */
				if (BD_back[BLK_y + y][BLK_x + x] != 0) { /* �����u���b�N�̏o���ʒu���󔒂łȂ��ꍇ */
					BLK_hit_flag = 1;                     /* �u���b�N�̓��蔻��̏����𖞂��� */
				}
			}
		}
	}
}


/* �� ---------- �u���b�N�̉�]��̓��蔻�� ---------- �� */

void BLK_hit_turn() {
	int x, y;

	BLK_hit_flag = 0; /* �u���b�N�̓��蔻��������� */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			if (BLK_turn[y][x] != 0) {                    /* �����u���b�N�܂��͕ǂ̃f�[�^�����݂���ꍇ */
				if (BD_back[BLK_y + y][BLK_x + x] != 0) { /* ������]��ɕǂ̓��蔻�肪�������ꍇ */
					BLK_hit_flag = 1;                     /* ���蔻��̏����𖞂��� */
				}
			}
		}
	}
}


/* �� ---------- �u���b�N�̉E��] ---------- �� */

void BLK_CW() {
	int x, y;

	BLK_turn_flag++; /* �u���b�N�̉�]��� */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			BLK_turn[y][x] =        /* ��]��̃u���b�N�\�����쐬���� */
				BLK_type[(BLK_rand_no * BLK_H) + y][(BLK_turn_flag % 4 * BLK_W) + x];
		}
	}

	BLK_hit_turn(); /* �u���b�N��]��̓��蔻�菈�� */

	if (BLK_hit_flag == 0) {          /* �����ǂ̓��蔻�肪�Ȃ���� */
		for (y = 0; y<BLK_H; y++) {         /* �u���b�N�̏c�z��𒲂ׂ� */
			for (x = 0; x<BLK_W; x++) {     /* �u���b�N�̉��z��𒲂ׂ� */
				BLK[y][x] = BLK_turn[y][x]; /* ��]��̃u���b�N�\���𔽉f������ */
			}
		}
	}
	else
	{
		BLK_turn_flag--; /* �u���b�N�̉�]��� */
	}
}


/* �� ---------- �u���b�N�̍���] ---------- �� */

void BLK_CCW() {
	int x, y;

	BLK_turn_flag += 3; /* �u���b�N�̉�]��Ԃ�ω������� */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			BLK_turn[y][x] =
				BLK_type[(BLK_rand_no * BLK_H) + y][(BLK_turn_flag % 4 * BLK_W) + x];
		}
	}

	BLK_hit_turn(); /* �u���b�N�̉�]��̓��蔻����m�F���� */

	if (BLK_hit_flag == 0) {                /* �������蔻�肪�Ȃ������ꍇ */
		for (y = 0; y<BLK_H; y++) {
			for (x = 0; x<BLK_W; x++) {
				BLK[y][x] = BLK_turn[y][x]; /* ��]��Ԃ��u���b�N�̕\���ɔ��f������ */
			}
		}
	}
	else
	{
		BLK_turn_flag -= 3; /* ���蔻�肪�������ꍇ�͉�]��Ԃ�߂� */
	}
}


/* �� ---------- �u���b�N�̋}���� ---------- �� */

void BLK_fall() {
	if (BLK_respawn_flag == 0) { /* �����u���b�N�̐��������Ȃ��ꍇ */
		BLK_y++;                 /* y���W+1 */
	}
}


/* �� ---------- ������̃u���b�N�̌Œ� ---------- �� */

void BLK_fix() {

	BLK_hit_down(); /* �u���b�N�̉����̓��蔻������� */

	if (BLK_hit_flag != 0) {       /* �������蔻�肪�������ꍇ */
		BLK_save();                /* ������̃u���b�N���Q�[����ʂɉ����� */
		BLK_clear_search();        /* �u���b�N���������ׂ����T�� */
		if (BLK_clear_flag == 0) { /* �����u���b�N�̏������ׂ��񂪑��݂��Ȃ��ꍇ */
			BD_init_2();           /* ���̃u���b�N�̐������鏀�������� */
		}
	}
}


/* �� ---------- �u���b�N�̐��� ---------- �� */

void BLK_respawn() {
	int x, y;

	if (BLK_respawn_flag == 1) {        /* �����u���b�N�̐���������ꍇ */
		BLK_rand_no = (rand() % 6);     /* rand�֐��Ńu���b�N�������_���ɑI������ׂ̗������i�[ */
		for (y = 0; y<BLK_H; y++) {
			for (x = 0; x<BLK_W; x++) {
				BLK[y][x] =
					BLK_type[(BLK_H * BLK_rand_no) + y][x]; /* �u���b�N�̉�]���(y)�͂��̂܂܂Ō`(x)��ς��� */
			}
		}
		BLK_respawn_flag = 0; /* True����False�ɖ߂� */
	}
}


/* �� ---------- �u���b�N�̕\���̔��f ---------- �� */

void BLK_save() {
	int x, y;

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			BD_back[BLK_y + y][BLK_x + x] += BLK[y][x]; /* �u���b�N�̕\�����Q�[����ʂɉ����� */
		}
	}
}


/* �� ---------- �u���b�N�̗������x���� ---------- �� */

void BLK_speed() {
	int x, y;
	for (y = 0; y<9000; y++) {     /* ���ʂ�for���̓�d���[�v�ɂ��u���b�N�̑ҋ@���Ԃ𔭐������� */
		for (x = 0; x<9000; x++) {
		}
	}
}


/* �� ---------- �Q�[���I�[�o�[ ---------- �� */

void GAME_OVER() {
	BLK_hit_up(); /* �u���b�N�̏o�����W�̓��蔻������� */

	if (BLK_hit_flag != 0) { /* �����u���b�N�̏o���ʒu�Ɋ��Ƀu���b�N�����݂���ꍇ */
		GAME_OVER_flag = 1;  /* �Q�[���I�[�o�[�̏����𖞂��� */
	}
}