/*
�y�v���O�����T�v�z
�W�����͂��Q�̕��������͂��A
������𐔂���B
1�ڂɓ��͂���������̌��ɁA
2�ڂ̕������A������B
2�̕����񍇌v��������20�����𒴂���ꍇ�͘A�����Ȃ��B

��strlen, strcat�֐������삷��B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int str_length(char *); /* �������𐔂���֐� */
void str_cat(char *, char *); /* �������A������֐� */

int main(void)
{
	char input1[256]; /* �����z��̐錾 */
	char input2[256];

	int i, j; /* �J�E���^�ϐ� */

	printf("1�ڂ̕����� ==> ");
	scanf("%s", input1); /* ���� */

	printf("2�ڂ̕����� ==> ");
	scanf("%s", input2); /* ���� */

	i = str_length(input1); /* �������𐔂��� */
	j = str_length(input2);

	if (i + j <= 20) {

		str_cat(input1, input2); /* ������̘A�� */
		printf("�A�����1�ڂ̕�����  :  %s\n", input1);
	}
	else
	{
		printf("���v��20�����𒴂����̂ŘA�����܂���B\n");
	}
	
	return 0;
}

int str_length(char *p_input)
{
	int count = 0; /* �������̃J�E���^�ϐ� */

	while (*p_input++ != '\0') { count++; } /* �������̃J�E���g */

	return count; /* �������̃J�E���g����Ԃ� */
}

void str_cat(char *p_input1, char *p_input2)
{
	while (*p_input1++ != '\0'); /* �k�������܂ŃA�h���X���C���N�������g */

	*p_input1--; /* �A��������ׂɃA�h���X���f�N�������g */

	while ((*p_input1++ = *p_input2++) != '\0'); /* ������̘A�� */
	
	return;
}

/*
�y���s����1�z
1�ڂ̕����� ==> abcdefg
2�ڂ̕����� ==> hijklmn
�A�����1�ڂ̕�����  :  abcdefghijklmn

�y���s����2�z
1�ڂ̕����� ==> abcdefghi
2�ڂ̕����� ==> jklmnopqrst
�A�����1�ڂ̕�����  :  abcdefghijklmnopqrst

�y���s����3�z
1�ڂ̕����� ==> abcdefghijklmn
2�ڂ̕����� ==> opqrstuvwxyz
���v��20�����𒴂����̂ŘA�����܂���B

�y���s����4�z
1�ڂ̕����� ==> 123XYZ#$%&
2�ڂ̕����� ==> zyx)(~;:AA
�A�����1�ڂ̕�����  :  123XYZ#$%&zyx)(~;:AA
*/

/*
�y�l�@�z
while���̌p�������ŁA
�|�C���^�ϐ����C���N�������g���Ȃ���
�k�������܂ŃA�h���X��i�߂���@�͂ƂĂ��֗��ł��B
*/