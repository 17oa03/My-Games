/*
�y�v���O�����T�v�z
�W�����͂�蕶�������͂��A
char�^�z��ɏ����������p�X���[�h(������)�Ɣ�r���A
��v�����ꍇ��"�p�X���[�h��v"�A
��v���Ȃ��ꍇ��"�p�X���[�h�s��v"�ƁA
�W���o�͂ɏo�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	char password[] = "Tokyo"; /* �����z��̏����� */
	char input[256];

	int match_flag = 0;	/* �p�X���[�h��v�t���O(OFF(�s��v) = 0, ON(��v) = 1) */

	int i; /* �J�E���^�ϐ��̒�` */

	printf("�p�X���[�h����͂��Ă������� ==> ");
	scanf("%s", input); /* ���� */

	for (i = 0; password[i] == input[i] && match_flag == 0; i++) { /* ������̈�v�m�F */

		if (input[i] == '\0') {/* �������̈�v�m�F */

			match_flag = 1; /* �p�X���[�h��v�t���OON */
		}
	}

	if (match_flag != 0) { /* �p�X���[�h����v���Ă���ꍇ */

		printf("�p�X���[�h��v\n");
	}
	else /* ����ȊO�̏ꍇ */
	{

		printf("�p�X���[�h�s��v\n");
	}

	return 0;
}

/*
�y���s����1�z
�p�X���[�h����͂��Ă������� ==> Tokyo
�p�X���[�h��v

�y���s����2�z
�p�X���[�h����͂��Ă������� ==> Kyoto
�p�X���[�h�s��v

�y���s����3�z
�p�X���[�h����͂��Ă������� ==> Fukuoka
�p�X���[�h�s��v

�y���s����4�z
�p�X���[�h����͂��Ă������� ==> tokyo
�p�X���[�h�s��v

�y���s����5�z
�p�X���[�h����͂��Ă������� ==> Tokyo2017
�p�X���[�h�s��v

�y���s����6�z
�p�X���[�h����͂��Ă������� ==> To
�p�X���[�h�s��v
*/