/*
�y�v���O�����T�v�z
�������J��Ԃ����͂���B
�t�@�C���̏I���(EOF)�œ��͂��I�����A
���v���o�͂���B

���R�}���h�v�����v�g�ɂāA
�u���s�t�@�C���� < data1.txt > data2.txt�v����͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	int seisu;

	int gokei = 0;

	int end_flag; /* �t�@�C���I�[�t���O */

	end_flag = scanf("%d", &seisu);

	while (end_flag != EOF) {
		
		gokei += seisu;

		end_flag = scanf("%d", &seisu);
	}

	printf("%d\n", gokei);

	return 0;
}

/*
�y���s���ʁz
27
51
83
35
60
^Z
^Z
^Z
256
*/

/*
�y�l�@�z
EOF(End Of File)�́A
�t�@�C���̏I������������R�[�h�̂��ƂŁA
EOF�͕W���w�b�_�t�@�C��(stdio.h)��
�u-1�v�Ƃ��ă}�N����`����Ă���B
*/