/*
�y�v���O�����T�v�z
�W�����͂�蕶�������͂��A
�ʂ̕�������R�s�[����B

��strcpy�֐������삷��B
*/

/*�y�v���O�����z*/
#include <stdio.h>

void str_copy(char *, char *); /* ��������R�s�[����֐� */

int main(void)
{
	char input[256]; /* �����z��̐錾 */
	char copy_to[256];

	printf("�R�s�[�������� ==> ");
	scanf("%s", input); /* ���� */

	str_copy(input, copy_to); /* ������̃R�s�[ */
	
	printf("�R�s�[��������  :  %s\n", input); /* �o�� */
	printf("�R�s�[�敶����  :  %s\n", copy_to);

	return 0;
}

void str_copy(char *p_input, char *p_copy_to)
{
	while (*p_input != '\0') { /* �k�������܂Ń��[�v */

		*p_copy_to++ = *p_input++; /* ������̃R�s�[ */
	}

	*p_copy_to = '\0'; /* ������̃R�s�[��́A�k�������������� */

	return;
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

�y���s����3�z
�R�s�[�������� ==> a
�R�s�[��������  :  a
�R�s�[�敶����  :  a
*/