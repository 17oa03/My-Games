/*
�y�v���O�����T�v�z
�W�����͂��Q�̕��������͂��A
������𐔂���B
1�ڂɓ��͂���������̌��ɁA
2�ڂ̕������A������B
2�̕����񍇌v��������20�����𒴂���ꍇ�͘A�����Ȃ��B

��strlen, strcat�֐���K���g�p����B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* �����z��ƃJ�E���^�ϐ��̒�` */
	char input1[256];
	char input2[256];
	int i, j;

	/* ���� */
	printf("�R�s�[�������� ==> ");
	scanf("%s", input1);

	printf("�R�s�[�������� ==> ");
	scanf("%s", input2);

	/* �������𐔂��� */
	i = strlen(input1);
	j = strlen(input2);

	/* �A���̗L���Əo�� */
	if (i + j <= 20) {

		strcat(input1, input2);
		printf("�A�����1�ڂ̕�����  :  %s\n", input1);
	}
	else
	{
		printf("���v��20�����𒴂����̂ŘA�����܂���B\n");
	}

	return 0;
}

/*
�y���s����1�z
�R�s�[�������� ==> abcdefg
�R�s�[�������� ==> hijklmn
�A�����1�ڂ̕�����  :  abcdefghijklmn

�y���s����2�z
�R�s�[�������� ==> abcdefghj
�R�s�[�������� ==> jklmnopqrst
�A�����1�ڂ̕�����  :  abcdefghjjklmnopqrst

�y���s����3�z
�R�s�[�������� ==> abcdefghijklm
�R�s�[�������� ==> opqrstuvwxyz
���v��20�����𒴂����̂ŘA�����܂���B
*/

/*
�yMemo�z
*/