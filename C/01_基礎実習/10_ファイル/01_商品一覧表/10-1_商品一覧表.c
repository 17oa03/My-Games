/*
�y�v���O�����T�v�z
���i�}�X�^��ǂݍ��݁A
���i�ꗗ�\���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <stdlib.h> /* exit�֐�, EXIT_FAILURE, EXIT_SUCCESS */

/* �\���̂̐錾 */
typedef struct prodact {
	int  no;
	char name[11];
	int  unit_price;
}Prodact;

int main(void)
{
	Prodact data;

	/* �t�@�C���|�C���^ */
	FILE *fp_i;

	/* �t�@�C���� */
	char *fname = "syohin.mst";

	if ((fp_i = fopen("syohin.mst", "r")) == NULL){
		printf("���i�}�X�^(%s)���A�݂���܂���B\n", fname);

		/* �v���O�����ُ�I��(EXIT_FAILURE = 1) */
		exit(EXIT_FAILURE);
	}

	printf("\n  *** ���i�ꗗ�\ ***\n");
	printf("�R�[�h ��  �i  �� �P��\n");
	printf("------ ---------- ----\n");

	while ((fscanf(fp_i, "%d %s %d",
			&data.no,
			data.name,
			&data.unit_price))
			!= EOF){

		printf("%6d %-10s %4d\n",
			data.no,
			data.name,
			data.unit_price);
	}

	/* ���̓t�@�C�����N���[�Y */
	fclose(fp_i);

	/* �v���O��������I��(EXIT_SUCCESS = 0) */
	return EXIT_SUCCESS;
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
�t�@�C���̃I�[�v���A
�ǂݍ��݁A�N���[�Y�ƁA
�t�@�C�������݂��Ȃ��ꍇ��
�G���[�������o���邩�̊m�F�ɂȂ�B

�֐����▽�ߕ������G�ɂȂ��Ă������A
���ꂪ�ǂ̂悤�ɗ�����Ă���̂��c������ƁA
���������₷���B

r        = Read(�ǂݍ���)
w        = Write(��������)
a        = Add(�ǉ�)
f(scanf) = File(�t�@�C��)
(print)f = format(����)
p        = Pointer(�|�C���^)
(fp_)i   = Input(����) 
(fp_)o   = Output(�o��)
s        = string (������)
c        = Character(����)

*/