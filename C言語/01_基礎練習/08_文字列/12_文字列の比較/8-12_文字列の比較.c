/*
�y�v���O�����T�v�z
�W�����͂��Q�̕��������͂��A
��������r����B
����ɁA��r�������ʂ��o�͂���B

��strcmp�֐������삷��B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int str_comp(char *, char *);

int main(void)
{
	/* �����z��ƕϐ��̒�` */
	char input1[256];
	char input2[256];
	int inequality = '=';
	int i;

	/* ���� */
	printf("1�ڂ̕����� ==> ");
	scanf("%s", input1);

	printf("2�ڂ̕����� ==> ");
	scanf("%s", input2);

	/* ������̐��𐔂��� */
	i = str_comp(input1, input2);

	/* �o�� */
	printf("%s %c %s\n", input1, inequality + i, input2);
	
	return 0;
}

/* ��������r����֐� */
int str_comp(char *p_input1, char *p_input2)
{
	while (*p_input1++ == *p_input2++ && (*p_input1 != '\0' && *p_input2 != '\0'));

	*p_input1--;
	*p_input2--;

	if (*p_input1 > *p_input2) { return 1; }
	else if (*p_input1 < *p_input2) { return -1; }
	else { return 0; }

}


/*
�y���s����1�z
1�ڂ̕����� ==> abc
2�ڂ̕����� ==> abbc
abc > abbc

�y���s����2�z
1�ڂ̕����� ==> abcd
2�ڂ̕����� ==> abd
abcd < abd

�y���s����3�z
1�ڂ̕����� ==> abc
2�ڂ̕����� ==> abc
abc = abc

�y���s����4�z
1�ڂ̕����� ==> #$%&
2�ڂ̕����� ==> ABCD
#$%& < ABCD

�y���s����5�z
1�ڂ̕����� ==> 777
2�ڂ̕����� ==> 666
777 > 666
*/

/*
�yMemo�z
���[�v������̃A�h���X�̈ʒu���d�v�ɂȂ�A
�f�N�������g���Ȃ��ƕs��̒l���Q�Ƃ��Ă��܂��B
*/