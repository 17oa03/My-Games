/*
�y�v���O�����T�v�z
�A���t�@�x�b�g�A�L���A��������͂���B
�A���t�@�x�b�g�̏������Ȃ�啶���ɁA
�啶���Ȃ珬�����ɕϊ�����B
�L���A�����̏ꍇ�͕ϊ������ɏo�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

char Conversion(char); /* �v���g�^�C�v�錾 */

int main(void) /* ���C�����[�`���̒�` */
{
	char input, answer;

	printf("���� ==> ");
	scanf("%c", &input);

	answer = Conversion(input); /* �������́uinput�v�A�߂�l�́uanswer�v */

	printf("%c �̕ϊ���́A%c �ł��B\n", input, answer);

	return 0;
}

char Conversion(char input) /* �T�u���[�`���̒�`�A�������́uinput�v */
{
	char answer;

	if (input >= 0x41 && input <= 0x5A) { /* ����"A"(0x41)����"Z"(0x5A)�̊Ԃɂ���l�̏ꍇ */

		answer = input + 0x20; /* 0x20�����Z���ď������ϊ� */
	}
	else if (input >= 0x61 && input <= 0x7A) { /* ����"a"(0x61)����"z"(0x7A)�̊Ԃɂ���l�̏ꍇ */

		answer = input - 0x20; /* 0x20�����Z���đ啶���ϊ� */
	}
	else
	{

		answer = input; /* ����ȊO�̏ꍇ�͖��ϊ� */
	}

	return answer; /* �߂�l = answer */
}


/*
�y���s����1�z
���� ==> y
y �̕ϊ���́AY �ł��B

�y���s����2�z
���� ==> Z
Z �̕ϊ���́Az �ł��B

�y���s����3�z
���� ==> \
\ �̕ϊ���́A\ �ł��B

�y���s����4�z
���� ==> 9
9 �̕ϊ���́A9 �ł��B
*/

/*
�y�l�@�z
"A"�́AASCII�R�[�h�\���16�i��(HEX)�Łu0x41�v�A
"Z"�́AASCII�R�[�h�\���16�i��(HEX)�Łu0x5A�v�A
"a"�́AASCII�R�[�h�\���16�i��(HEX)�Łu0x61�v�A
"z"�́AASCII�R�[�h�\���16�i��(HEX)�Łu0x7A�v�ɂȂ�B

"A"��"a"�̍��� +0x20�A
"z"��"Z"�̍��� -0x20�B

�܂�A
0x20 �����Z����Ώ������ϊ��A
0x20 �����Z����Α啶���ϊ����ł���B

���݂ɁA
HEX(�w�L�T)�́A
Hexadecimal(�w�L�T�f�V�}��)�̗��́A
Hexa(�w�L�T)�́A
�M���V����Łu6�v�Ƃ����Ӗ��ŁA
Decimal(�f�V�}��)�́A
�u�\�i�@�v�Ƃ����Ӗ��ɂȂ�B
*/