/*
�y�v���O�����T�v�z
�W�����͂�蕶�������͂��A
�ʂ̕�����ɃR�s�[����B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	char string1[256]; /* �����z��̐錾 */
	char string2[256];

	int i; /* �J�E���^�ϐ� */

	printf("�R�s�[�������� ==> ");
	scanf("%s", string1); /* ������̓��� */

	for (i = 0; string1[i] != '\0'; i++) { /* ������̃R�s�[���� */

		string2[i] = string1[i]; /* 1��������� */
	}

	string2[i] = '\0'; /* �k������(\0)�������ĕ�����̏I�[������ */

	printf("�R�s�[��������  :  %s\n", string1); /* �����z��̏o�� */
	printf("�R�s�[�敶����  :  %s\n", string2);
	
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