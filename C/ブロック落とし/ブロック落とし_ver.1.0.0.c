#include <stdio.h>
#include <stdlib.h> /* rand�֐�, srand�֐� */
#include <time.h>   /* time�֐� */

int main(void) {
	int i;     /* �Q�[���̉񐔂𐔂���ϐ� */
	int kotae; /* �Q�[���̓����̐�������ϐ� */
	int seisu; /* ���[�U�[�����͂�����������ϐ� */

	printf("�₠ �i�L�E�ցE�M)\n")
	printf("�悤�����A�o�[�{���n�E�X�ցB\n")
	printf("���̃e�L�[���̓T�[�r�X������A�܂�����ŗ��������ė~�����B\n\n")
	printf("����A�u�N�\�Q�[�v�Ȃ񂾁B�ς܂Ȃ��B\n")
	printf("���̊�����Č������ˁA�ӂ��ċ����Ă��炨���Ƃ��v���Ă��Ȃ��B\n\n")
	printf("�ł��A���̃\�[�X�R�[�h�������Ƃ��A�N�́A�����ƌ��t�ł͌����\���Ȃ�\n")
	printf("�u�Ƃ��߂��v�݂����Ȃ��̂������Ă��ꂽ�Ǝv���B\n")
	printf("�E���Ƃ������̒��ŁA���������C������Y��Ȃ��ŗ~����\n")
	printf("�����v���āA���̃\�[�X�R�[�h���������񂾁B\n\n")
	printf("���Ⴀ�A�u�����ăQ�[���v����낤���B\n")

	getchar();
	printf("\033[2J");

	srand((unsigned)time(NULL)); /* ���s���̎��Ԃ����ɂ��āA���������闐���̌������߂� */
	kotae = rand() % 100 + 1;    /* ������100�Ŋ��������𐳉��̐��ɂ��ĕϐ��ɑ������ */

	for (i = 1, 10 < i, i++) {

		printf("1����100�܂ł̐�������͂��Ă���B�i�L�E�ցE�M)\n")
		scanf("%d" &seisu);

		while (seisu < 1 || seisu > 100) {

			printf("1����100�܂ł̐������A�킩���Ă���񂾂낤�H�i�L�E�ցE�M)\n")
			scanf("%d" &seisu);

		}

		if (kotae = seisu) break;
		if (kotae < seisu) printf("�傫�������B�i�L�E�ցE�M)");
		if (kotae > seisu) printf("�����������B�i�L�E�ցE�M)");

	}
	if (i <= 10) printf("%d��ڂœ�����\n", i);

	return 0;
}