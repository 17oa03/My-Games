/*
THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH

�@�@�@�@�@�@�@�@�@   �����ăQ�[��

THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH
*/

#include <stdio.h>
#include <stdlib.h> /* rand�֐�, srand�֐� */
#include <time.h>   /* time�֐� */

int main(void) {

	int i;     /* �Q�[���̉񐔂𐔂���ׂ̕ϐ� */
	int x, y;  /* for���̓�d���[�v�őҋ@���Ԃ����ׂ̕ϐ� */
	int kotae; /* �Q�[���̓����̐�������ׂ̕ϐ� */
	int seisu; /* ���[�U�[���L�[���͂�����������ׂ̕ϐ� */

	printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
	printf("\n�@�₠ �i�L�E�ցE�M)\n");
	printf("�@�悤�����A�o�[�{���n�E�X�ցB\n");
	printf("�@���̃e�L�[���̓T�[�r�X������A�܂�����ŗ��������ė~�����B\n\n");
	printf("�@����A�u�N�\�Q�[�v�Ȃ񂾁B�ς܂Ȃ��B\n");
	printf("�@���̊�����Č������ˁA�ӂ��ċ����Ă��炨���Ƃ��v���Ă��Ȃ��B\n\n");
	printf("�@�ł��A���̃\�[�X�R�[�h�������Ƃ��A�N�́A�����ƌ��t�ł͌����\���Ȃ�\n");
	printf("�@�u�Ƃ��߂��v�݂����Ȃ��̂������Ă��ꂽ�Ǝv���B\n");
	printf("�@�E���Ƃ������̒��ŁA���������C������Y��Ȃ��ŗ~����\n");
	printf("�@�����v���āA���̃\�[�X�R�[�h���������񂾁B\n\n");
	printf("�@���Ⴀ�A�u�����ăQ�[���v����낤���B\n\n");
	printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
	printf("\n (�L��֥) �� [ENTER]�L�[�������Ǝ��̃y�[�W��\�������B");

	getchar();     /* �v���C���[�̓��͑҂� */
	system("cls"); /* ��ʂ̃N���A */

	printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
	printf("\n�@���� �i�L�E�ցE�M)\n\n");
	printf("�@�u�����ăQ�[���v�̃��[������������B\n\n");
	printf("�@���ꂩ�玄��1�`100�̐���1�I�ԁB\n");
	printf("�@���̐���10��ȓ��ɓ��Ă邱�Ƃ��ł���΁A�N�̏������B\n\n");
	printf("�@�ԈႦ����q���g�������邩����S���Ă���B\n");
	printf("�@���Ⴀ�A����Ă݂悤���B\n");
	printf("�@\n\n\n\n\n");
	printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
	printf("\n (�L��֥) �� [ENTER]�L�[�������ƃQ�[���J�n����B");

	getchar();
	system("cls");

	srand((unsigned)time(NULL)); /* ���s���̎��Ԃ����ɂ��āA���������闐���̌������߂� */
	kotae = rand() % 100 + 1;    /* ������100�Ŋ��������𐳉��̐��ɂ��ĕϐ��ɑ������ */

	for (i = 1; i <= 10; i++) {
		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
		printf("\n�@1����100�܂ł̐�������͂��Ă���B�i�L�E�ցE�M)\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
		printf("\n (�L��֥) �� %d��ڂ̓��� ==> ", i);

		if (scanf("%d", &seisu) != 1) /* ����scanf�̖߂�l��Turu�łȂ��ꍇ(�����񓙂̓��͂��������ꍇ) */
		scanf("%*s");                 /* �u*�v�Łu%s�v(������)�̓ǎ̂Ă������� */

		system("cls");

		while (seisu < 1 || seisu > 100) /* 1����100�ȊO�̐��̓��͂��������ꍇ�̑Ώ� */
		{
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
			printf("\n�@���̐��́A1����100�܂ł̐�������Ȃ���B�i�L�E�ցE�M)\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
			printf("\n (�L��֥) �� %d��ڂ̓��� ==> ", i);

			if (scanf("%d", &seisu) != 1)
				scanf("%*s");

			system("cls");
		}

		if (kotae == seisu) break; /* �����̐��Ɠ��͂��ꂽ�������v�����ꍇ */

		if (kotae < seisu) /* �����������͂��ꂽ�����傫���ꍇ */
		{
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
			printf("\n�@���͂������́A�傫������݂������ˁB�i�L�E�ցE�M)\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
			printf("\n (�L��֥) �� ���ʂ�...");

			for (y = 0; y<20000; y++) {
				for (x = 0; x<30000; x++) {

				}
			}
			system("cls");
		}

		if (kotae > seisu) /* �����������͂��ꂽ�����������ꍇ */
		{
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
			printf("\n�@���͂������́A����������݂������ˁB�i�L�E�ցE�M)\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
			printf("\n (�L��֥) �� ���ʂ�...");

			for (y = 0; y<20000; y++) {
				for (x = 0; x<20000; x++) {

				}
			}
			system("cls");
		}
		while (getchar() != '\n'); /* ���̓o�b�t�@�̓ǂݎ̂� */
	}

	if (i < 10)
	{
		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
		printf("���@ �@�@�@+�@�@ �@�@ �� �R\n");
		printf("�@�@�@�@�@�@�@�@�@�@�@ ���@!�@�@�@+�@�@�@�@�B�@�@�@�@�@+�@�@�@�@�B�@�@�@�@�@���@ �@�@�@�B\n");
		printf("�@ �@�@�@�@+�@�@�@�@�B  |  |\n");
		printf("�@�@�@���@ �@�@�@+�@�@ /�@/�@�@�@�C���b�b�z�H�H�H�I�I�H�I�E�I�����́A�u%d�v���I\n", seisu);
		printf("�@�@�@�@�@�@  �ȁQ��  /�@/\n");
		printf("�@�@�@�@�@�@�i�L�́M /�@/�@+�@�@�@�@�B�@�@�@�@�@+�@�@�@�@�B�@�@�@���@ �@�@�@�B\n");
		printf("�@�@�@�@�@�@,-�@�@�@�@ ��\n");
		printf("�@�@�@�@�@ / �́@�@�@  | ���@ �@�@�@+�@�@�@�@�B�@�@�@�@�@+�@�@�@�B�@+\n");
		printf("�@�@�@�@ �q�Q�p�j�@�@�@|\n");
		printf("�@�@�@�@�@�@�@/�@�@�@�@! +�@�@�@�@�B�@�@�@�@�@+�@�@�@�@+�@�@�@�@�@��\n");
		printf("�@�@�@�@�@�@./�@�@,́@ |\n");
		printf("�@���݁@||| j�@�@/  |�@| |||\n");
		printf("�\�\�\�\�\�\�\�\�\�\�\�\\n");
		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");

		while (getchar() != '\n');

	}
	else
	{

		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
		printf("\n�@�����́u%d�v�������񂾁A���߂�ˁB�i�L�E�ցE�M)\n\n\n\n\n\n\n\n\n\n\n\n\n", kotae);
		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
		printf("\n (�L;��;�M)��ܯ < �Q�[���I�[�o�[����B\n\n");
	}

	getchar();

	return 0;
}