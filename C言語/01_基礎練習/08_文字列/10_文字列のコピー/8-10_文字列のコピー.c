/*
�y�v���O�����T�v�z
�W�����͂�蕶�������͂��A
�ʂ̕�������R�s�[����B

��strcpy�֐������삷��B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

void str_copy(char *, char *);

int main(void)
{
	/* �����z��ƕϐ��̒�` */
	char input[256];
	char copy_to[256];

	/* ���� */
	printf("�R�s�[�������� ==> ");
	scanf("%s", input);

	/* ���������r */
	str_copy(input, copy_to);
	
	/* �o�� */
	printf("�R�s�[��������  :  %s\n", input);
	printf("�R�s�[�敶����  :  %s\n", copy_to);

	return 0;
}

/* ��������R�s�[����֐� */
void str_copy(char *p_input, char *p_copy_to)
{
	for (; *p_input != '\0';) {

		*p_copy_to++ = *p_input++;
	}

	*p_copy_to = '\0';

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

/*
�yMemo�z
������̃R�s�[�́A
�擪�A�h���X�ɃC���N�������g���Ȃ���R�s�[����B
���[�v������̓R�s�[��̕����z��ɁA
NULL�����������Ă�����B
*/