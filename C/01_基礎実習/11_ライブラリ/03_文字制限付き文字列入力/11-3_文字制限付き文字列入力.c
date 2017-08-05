/*
�y�v���O�����T�v�z
�W�����͂��ő�10����(10 byte)�̕��������͂��A
���̕������W���o�͂ɏo�͂���B
10�����𒴂���ꍇ��0�������͂̏ꍇ�́A
�G���[���b�Z�[�W���o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ELEMENT 11 /* �ő啶���� */

int  Input (char *, int); /* ���������͂���֐� */
void Output(char *, int); /* ��������o�͂���֐� */

int main(void)
{
	char str[ELEMENT]; /* �����z��̐錾 */

	int out_flag; /* �o�̓t���O */
	
	out_flag = Input(str, ELEMENT - 1); /* ������̓��� */

	if (out_flag == 0) /* �u0�v�̏ꍇ */
	{

		printf("���͂�����܂���B\n");
	}
	else if(out_flag == EOF) /* �uEOF�v�̏ꍇ */
	{

		printf("%d �o�C�g�𒴂��Ă��܂��B\n", ELEMENT - 1);
	}
	else /* ����ȊO�̏ꍇ */
	{

		Output(str, ELEMENT - 1); /* ������̏o�� */
	}

	return 0;
}

int Input(char *p_str, int n) /* ���������͂���֐� */
{
	int i = 0; /* �J�E���^�ϐ� */

	int answer = 1; /* �߂�l */

	printf("*** ��������o�� (�ő� %d �o�C�g) ***\n", n);
	printf("���� ==> ");

	for (i = 0; (*(p_str + i) = getchar()) != '\n' && answer == 1; i++) /* ���s�܂Ń��[�v */
	{

		if(i >= n) /* 10 �o�C�g�𒴂���ꍇ */
		{

			answer = EOF;

			p_str--; /* for���̍ď��������ɂ���ă������̈�O�ɃA�N�Z�X���邱�Ƃ�h�~ */
		}
	}
	
	if (i == 0) { /* 0�������͂̏ꍇ */

		answer = i;
	}
		
	*(p_str + i) = '\0'; /* �k��������t�� */

	return answer;
}

void Output(char *p_str, int n) /* ��������o�͂���֐� */
{
	int i; /* �J�E���^�ϐ� */

	printf("�o�� ==> ");

	for (i = 0; *(p_str + i) != '\0'; i++) { /* ���s�܂Ń��[�v */

		putchar(*(p_str + i)); /* �o�� */
	}

	putchar('\n'); /* ���s */

	return;
}


/*
�y���s����1�z
*** ��������o�� (�ő� 10 �o�C�g) ***
���� ==> abcde
�o�� ==> abcde

�y���s����2�z
*** ��������o�� (�ő� 10 �o�C�g) ***
���� ==> a
�o�� ==> a

�y���s����3�z
*** ��������o�� (�ő� 10 �o�C�g) ***
���� ==> abcdefghij
�o�� ==> abcdefghij

�y���s����4�z
*** ��������o�� (�ő� 10 �o�C�g) ***
���� ==> abcdefghijk
10 �o�C�g�𒴂��Ă��܂��B

�y���s����5�z
*** ��������o�� (�ő� 10 �o�C�g) ***
���� ==>
���͂�����܂���B

*/

/*
�y�l�@�z
putchar�֐��́A
�W���o�͂Ɉ����Ŏw�肳�ꂽ������
unsigned char�^�ɕϊ����ď������݁A
�������ݎ��s���́uEOF�v��Ԃ��B
*/