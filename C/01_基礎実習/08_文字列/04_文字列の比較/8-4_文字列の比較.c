/*
�y�v���O�����T�v�z
�W�����͂�蕶�������͂��A
��������r����B
��r�������ʂ͕s�������g�p���ďo�͂���B

��strcmp�֐��͎g�p�֎~�B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	char input1[256]; /* �����z��̐錾 */
	char input2[256];

	char inequality = '='; /* �u=�v�́A+1�Łu>�v�A-1�Łu<�v */

	int i; /* �J�E���^�ϐ� */

	printf("1�ڂ̕����� ==> ");
	scanf("%s", input1); /* ���� */

	printf("2�ڂ̕����� ==> ");
	scanf("%s", input2); /* ���� */

	for (i = 0; input1[i] == input2[i] && !(input1[i] == '\0' || input2[i] == '\0'); i++); /* ������̔�r */

	if (input1[i] > input2[i]) {inequality += 1;} /* ������̏I�[���r */
	if (input1[i] < input2[i]) {inequality -= 1;}

	printf("%s %c %s\n", input1, inequality, input2); /* �o�� */

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
�y�l�@�z
�Ƃ���u��������v���l�����L�q���@�ŁA
char�^�̕ϐ���'='�������A
���̕ϐ��ɑ΂��āu1�v�����Z(>)�E���Z(<)���邱�Ƃɂ��A
�s�������ȒP�ɏo�͂ł�����@�ł��B

��L���e���u�������v�Ə���ɌĂ�ł��܂��B
*/