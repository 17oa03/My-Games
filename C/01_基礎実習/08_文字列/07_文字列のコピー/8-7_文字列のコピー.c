/*
�y�v���O�����T�v�z
�W�����͂��p�X���[�h(������)����͂��A
�ʂ̕�����ɃR�s�[����B

��strcpy�֐���K���g�p����B
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[256]; /* �����z��̐錾 */
	char copy_to[256];

	printf("�R�s�[�������� ==> ");
	scanf("%s", input); /* ���� */

	strcpy(copy_to, input);	/* ������̃R�s�[ */

	printf("�R�s�[��������  :  %s\n", input); /* �o�� */
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