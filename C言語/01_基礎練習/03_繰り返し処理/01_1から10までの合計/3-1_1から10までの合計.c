/*
�y�v���O�����T�v�z
1����10�܂ł̍��v��for����p���āA
���v���o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	int gokei = 0;
	int i; /* �J�E���^�ϐ� */

	for (i = 0; i <= 10; ++i) /* ������; �p������; �J�E���^�ϐ��̍X�V(����́A�O�u�C���N�������g���Z�q���g�p) */
	{
		gokei += i; /* gokei = gokei + i�Ɠ��������ɂȂ�܂��B */
	}

	printf("1����10�܂ł̍��v��%d�ł��B\n", gokei);

	return 0;
}

/*
�y���s���ʁz
1����10�܂ł̍��v��55�ł��B
*/
