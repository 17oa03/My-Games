/*
�y�v���O�����T�v�z
���i�}�X�^��ǂݍ��݁A
���i�ꗗ�\���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <stdlib.h> /* �f�[�^�ϊ������֐� */

typedef struct prodact { /* �\���̂̐錾 */
	int  no;         /* ���i�R�[�h */
	char name[11];   /* ���i�� */
	int  unit_price; /* �P�� */
}Prodact; /* �\���̂̒�` */

int main(void)
{
	Prodact data; /* Prodact�^�ϐ��̒�` */

	FILE *fp_i; /* �X�g���[���|�C���^�錾 */

	char *fname = "syohin.mst"; /* �t�@�C���� */

	if ((fp_i = fopen("syohin.mst", "r")) == NULL){ /* �t�@�C���I�[�v��(r)�ƃG���[���� */

		printf("���i�}�X�^(%s)���A�݂���܂���B\n", fname);

		exit(EXIT_FAILURE); /* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
	}

	printf("\n  *** ���i�ꗗ�\ ***\n");
	printf("�R�[�h ��  �i  �� �P��\n");
	printf("------ ---------- ----\n");

	while ((fscanf(fp_i, "%d %s %d", /* �t�@�C���Ǎ��� */
			&data.no,
			 data.name,
			&data.unit_price))
			!= EOF){

		printf("%6d %-10s %4d\n",
			data.no,
			data.name,
			data.unit_price);
	}

	fclose(fp_i); /* �t�@�C���N���[�Y */

	return EXIT_SUCCESS; /* �v���O��������I��(EXIT_SUCCESS = 0) */
}

/*
�y���s���ʁz

*** ���i�ꗗ�\ ***
�R�[�h ��  �i  �� �P��
------ ---------- ----
    16 ���M         30
    21 �m�[�g      100
    37 ��K        150
    40 �����S��     50
    63 �{�[���y��   80
*/

/*
�y�l�@�z
�t�@�C���̃I�[�v���A�ǂݍ��݁A�N���[�Y�ƁA
�G���[�������o���邩�Ƃ��������e�ɂȂ�B�B

�֐����▽�ߕ������G�ɂȂ��Ă������A
���ꂪ�ǂ̂悤�ɗ�����Ă���̂��c������ƁA
���������₷���B

r        = read(�ǂݍ���)
w        = write(��������)
a        = append(�t������)
f(scanf) = file(�t�@�C��)
(print)f = format(����)
p        = pointer(�|�C���^)
(fp_)i   = input(����) 
(fp_)o   = output(�o��)
s        = string (������)
c        = character(����)

*/