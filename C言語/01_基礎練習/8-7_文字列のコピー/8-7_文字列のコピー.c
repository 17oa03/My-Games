/*
�y�v���O�����T�v�z
�W�����͂��p�X���[�h(������)����͂��A
�ʂ̕�����ɃR�s�[����B

��strcpy�֐���K���g�p����B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* �����z��̒�` */
	char input[256];
	char copy_to[256];

	/* ���� */
	printf("�R�s�[�������� ==> ");
	scanf("%s", input);

	/* ������̃R�s�[ */
	strcpy(copy_to, input);

	/* �o�� */
	printf("�R�s�[��������  :  %s\n", input);
	printf("�R�s�[�敶����  :  %s\n", copy_to);

	return 0;
}

/*
�y���s����1�z
�R�s�[�������� ==> abcdefg
�R�s�[��������  :  abcdefg
�R�s�[�敶����  :  abcdefg

�y���s����2�z
�R�s�[�������� ==> 123XYZ#$%
�R�s�[��������  :  123XYZ#$%
�R�s�[�敶����  :  123XYZ#$%
*/

/*
�yMemo�z
*/