/*
�y�v���O�����T�v�z
�W�����͂�蕶�������͂��A
�ʂ̕�����ɃR�s�[����B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	/* �������i�[����ϐ��̒�` */
	char string1[256];
	char string2[256];

	/* �J�E���^�ϐ� */
	int i;

	printf("�R�s�[�������� ==> ");
	scanf("%s", string1);

	/* ������̃R�s�[���� */
	for (i = 0; string1[i] != '\0'; i++) {

		string2[i] = string1[i];
	}

	/* �o�͑O��NULL������z��̍Ō�ɑ�����Ă��K�v������B */
	string2[i] = '\0';

	/* �ϊ��w��q�u%s�v�ŕ�������o�͂���B */
	printf("�R�s�[��������  :  %s\n", string1);
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

/*
�y�����z
�ϊ��w��q�u%s�v�́A
�����^�̔z��ւ̃|�C���^�̎������𕶎���ŏo�͂���B
�܂��A'\0'�̒��O�܂ŏo�͂���B
*/