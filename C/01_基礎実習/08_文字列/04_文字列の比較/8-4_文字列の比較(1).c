/*
�y�v���O�����T�v�z
�W�����͂�蕶�������͂��A
��������r����B
��r�������ʂ͕s�������g�p���ďo�͂���B

��strcmp�֐��͎g�p�֎~�B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	/* �����z��̒�` */
	char input1[256];
	char input2[256];

	/* �J�E���^�ϐ��̒�` */
	int i;

	/* ���͏��� */
	printf("1�ڂ̕����� ==> ");
	scanf("%s", input1);

	printf("2�ڂ̕����� ==> ");
	scanf("%s", input2);

	/* ��r����2�̕����z��̗v�f��T�����鏈�� */
	for (i = 0; input1[i] == input2[i] && (input1[i] != '\0' && input2[i] != '\0'); i++);

	/* ��r����Əo�͏��� */
	if (input1[i] > input2[i]) {

		printf("%s > %s\n", input1, input2);
	}
	else if (input1[i] < input2[i]) {

		printf("%s < %s\n", input1, input2);
	}
	else
	{

		printf("%s = %s\n", input1, input2);
	}

	return 0;
}


/*
�y���s����1�z
1�ڂ̕����� ==> abc
2�ڂ̕����� ==> abbc
abc > abbc

�y���s����2�z
1�ڂ̕����� ==> abc
2�ڂ̕����� ==> abd
abc < abd

�y���s����3�z
1�ڂ̕����� ==> abc
2�ڂ̕����� ==> abc
abc = abc

�y���s����4�z
1�ڂ̕����� ==> abc
2�ڂ̕����� ==> adc
abc < adc

�y���s����5�z
1�ڂ̕����� ==> abcdef
2�ڂ̕����� ==> abc
abcdef > abc

�y���s����6�z
1�ڂ̕����� ==> a
2�ڂ̕����� ==> a
a = a
*/

/*
�yMemo�z
�u�h�E�����K���̖@���v�ŁA
�������𕡎G�ɂł���B
�Ⴆ�΁A

input1[i] != '\0' && input2[i] != '\0'
��
!(input1[i] == '\0' || input2[i] == '\0')

�ʔ��������l�ɂ͓ǂݓ�B
*/