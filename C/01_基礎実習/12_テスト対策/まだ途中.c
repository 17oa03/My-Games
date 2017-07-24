/*
�y�v���O�����T�v�z
�u9-5_����ꗗ�\�v��
���܂łɊw�񂾒m������g���ċL�q����B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <stdlib.h>

/* �}�N���萔 */
#define ITEMS 5 /* ���i�� */

/* �^������ */
#ifndef TRUE   /* ���� TRUE ����`����Ă��Ȃ������� */
#define TRUE 1 /* TRUE �� 1 �ƒ�`���� */
#endif         /* #endif �͏����u���b�N�̍Ō������ */

#ifndef FALSE   /* ���� FALSE ����`����Ă��Ȃ������� */
#define FALSE 0 /* FALSE �� 0 �ƒ�`���� */
#endif          /* #endif �͏����u���b�N�̍Ō������ */

/* �\���̂̐錾 */
typedef struct product {
	int  code;       /* ���i�R�[�h */
	char name[11];   /* ���i�� */
	int  unit_price; /* �P�� */
	int  quantity;   /* ���� */
	int  price;      /* ���z */
}Product; /* �\���̂̒�` */

/* ���i�}�X�^�̓Ǎ��� */
void prodact_in(Product *);

/* ���i�̒T�� */
int product_search(Product *);

/* ����ꗗ�\�̏o�� */
void prodact_out(Product *);

/* ----------------------------------------------------------------- */
int main(void)
{
	/* �\���̔z��̒�`�Ə����� */
	Product data;

	/* ���i�R�[�h��v�t���O */
	int match_flag = FALSE;

	/* ���i�}�X�^�̏����� */
	prodact_in(&data);

	/* ���i�̒T�� */
	while ((match_flag = product_search(&data)) != EOF){

	/* ����ꗗ�\�̏o�� */
	if (match_flag) { prodact_out(&data); }

	}

	return 0;
}

/* ----------------------------------------------------------------- */
void prodact_in(Product *p_data) 
{
	/* �\���̂̃|�C���^�ϐ� */
	Product *tmp;

	/* �X�g���[���|�C���^�錾 */
	FILE *fp1, *fp2;

	/* �t�@�C�������i�[����ϐ� */
	char fname1[FILENAME_MAX]; /* "syohin.mst" */
	char fname2[FILENAME_MAX]; /* "uriage.dat" */

	/* �J�E���^�ϐ� */
	int i, j;

	/* �t�@�C���s�� */
	int count;

	/* �t�@�C�����̓��� */
	printf("���i�}�X�^ ==> ");
	scanf("%s", fname1);

	/* ���i�}�X�^�̃G���[�`�F�b�N */
	if ((fp1 = fopen(fname1, "r")) == NULL) {

		printf("���̓t�@�C��(%s)���A�݂���܂���B\n", fname1);

		/* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	/* �t�@�C�����̓��� */
	printf("����f�[�^ ==> ");
	scanf("%s", fname2);

	/* ����f�[�^�̃G���[�`�F�b�N */
	if ((fp2 = fopen(fname2, "r")) == NULL) {

		printf("���̓t�@�C��(%s)���A�݂���܂���B\n", fname2);

		/* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	/* "syohin.mst" �Ǎ��� */
	for (i = 0;
		(fscanf(fp1, "%d %s %d",
			&(p_data + i)->code,
			 (p_data + i)->name,
			&(p_data + i)->unit_price))
		!= EOF;
		i++);

	count = i;

	/* �����\�[�g */
	for (i = 0; i < count - 1; i++) {
		for (j = i + i; j < count; j++) {

			/* ���ӂ��E�ӂ̒l���傫���ꍇ */
			if ((p_data + i)->code > (p_data + i)->code) {

				/* ���i�R�[�h�̌��� */
				tmp->code          = (p_data + i)->code;
				(p_data + i)->code = (p_data + j)->code;
				(p_data + j)->code = tmp->code;

				/* ���i���̌��� */
				strcpy(tmp->name, (p_data + i)->name);
				strcpy((p_data + i)->name, (p_data + j)->name);
				strcpy((p_data + j)->name, tmp->name);

				/* �P���̌��� */
				tmp->unit_price = (p_data + i)->unit_price;
				(p_data + i)->unit_price = (p_data + j)->unit_price;
				(p_data + j)->unit_price = tmp->unit_price;
			}
		}
	}

	return;
}

/* ----------------------------------------------------------------- */
int product_search(Product *p_data1) 
{
	/* �\���̂̃|�C���^�ϐ� */
	Product *p_data2;

	/* �X�g���[���|�C���^�錾 */
	FILE *fp;

	/* ���i�R�[�h(�t�@�C������) */
	int code;

	/* ����(�t�@�C������) */
	int	quantity;

	/* ���i�R�[�h��v�t���O */
	int match_flag = FALSE;

	/* �t�@�C���Ǎ��� */
	fscanf(fp, "%d %d", &code, &quantity);
	
	/* ���i�̒T�� */
	for (p_data2 = p_data1;
		 p_data2 < p_data1 + ITEMS && code != p_data2->code;
		 p_data2++) {

		/* ���i�R�[�h����v���Ă���ꍇ */
		if (p_data2 < p_data1 + ITEMS) {

			/* ���i�R�[�h��v�t���O��ON */
			match_flag = TRUE;
		}
	}

	if (fp == EOF) { match_flag = EOF; }

	return match_flag;
}

void prodact_in(Product *p_data)
{



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


}






/*
�y���s���ʁz

*/

/*
�y�l�@�z

*/