/*
�y�v���O�����T�v�z
�W�����͂��Q�̕��������͂��A
��������r����B
��r�������ʂ�s������t���ďo�͂���B

��strcmp�֐���K���g�p����B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	/* �����z��ƕϐ��̒�` */
	char input1[256];
	char input2[256];
	char inequality = '=';

	/* ���� */
	printf("1�ڂ̕����� ==> ");
	scanf("%s", input1);

	printf("2�ڂ̕����� ==> ");
	scanf("%s", input2);

	/* ���������r */
	inequality += strcmp(input1, input2);
	
	/* �o�� */
	printf("%s %c %s\n", input1, inequality, input2);

	return 0;
}

/*
�y���s����1�z
1�ڂ̕����� ==> abc
2�ڂ̕����� ==> abbc
abc > abbc

�y���s����2�z
1�ڂ̕����� ==> abcde
2�ڂ̕����� ==> abd
abcde < abd

�y���s����3�z
1�ڂ̕����� ==> abc
2�ڂ̕����� ==> abc
abc = abc

�y���s����4�z
1�ڂ̕����� ==> 1234
2�ڂ̕����� ==> 123
1234 > 123

�y���s����5�z
1�ڂ̕����� ==> #$%&
2�ڂ̕����� ==> #$%&
#$%& = #$%&
*/

/*
�yMemo�z
�g���b�L�[�ȃ\�[�X�R�[�h�������_������B
strcmp�֐��̖߂�l�́A
input1 = input2�Ȃ��0�A
input1 > input2�Ȃ�ΐ��̒l�A
input1 < input2�Ȃ�Ε��̒l��Ԃ��B
�܂�A
�u���̒l�v�Ɓu���̒l�v�́A
�R���p�C���ɂ���ĕς��Ƃ������ƁA
�s�����łȂ��������o�͂����\��������Ƃ������Ƃł��B
*/