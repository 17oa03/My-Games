/*
�y�v���O�����T�v�z
�W�����͂��Q�̕��������͂��A
������𐔂���B
1�ڂɓ��͂���������̌��ɁA
2�ڂ̕������A������B
2�̕����񍇌v��������20�����𒴂���ꍇ�͘A�����Ȃ��B

��strlen, strcat�֐������삷��B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int str_length(char *);
void str_cat(char *, char *);

int main(void)
{
	/* �����z��ƕϐ��̒�` */
	char input1[256];
	char input2[256];
	int i, j;

	/* ���� */
	printf("1�ڂ̕����� ==> ");
	scanf("%s", input1);

	printf("2�ڂ̕����� ==> ");
	scanf("%s", input2);

	/* ������̐��𐔂��� */
	i = str_length(input1);
	j = str_length(input2);


	/* �A���L���̔��� */
	if (i + j <= 20) {

		/* ��������A������ */
		str_cat(input1, input2);
		printf("�A�����1�ڂ̕�����  :  %s\n", input1);
	}
	else
	{
		printf("���v��20�����𒴂����̂ŘA�����܂���B\n");
	}
	
	return 0;
}

/* ������̐��𐔂���֐��@*/
int str_length(char *p_input)
{
	int count = 0;

	while (*p_input++ != '\0') { count++; }

	return count;
}

/* �������A������֐� */
void str_cat(char *p_input1, char *p_input2)
{
	while (*p_input1++ != '\0');
	*p_input1--;

	while ((*p_input1++ = *p_input2++) != '\0');
	
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
�yMemo�z
�����while���ƃ|�C���^�ϐ���p���ď������A
�p�������̒��Ń|�C���^�ϐ��ɃC���N�������g����
�A�h���X��i�߂���@�͂ƂĂ��֗��ł��B
*/