/*
�y�v���O�����T�v�z
�W�����͂�蕶�������͂��A
char�^�z��ɏ����������p�X���[�h(������)�Ɣ�r���A
��v�����ꍇ��"�p�X���[�h��v"�A
��v���Ȃ��ꍇ��"�p�X���[�h�s��v"�ƁA
�W���o�͂ɏo�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	/* �����z��̒�` */
	char password[] = "Tokyo";
	char input[256];

	/* �p�X���[�h��v�t���O( 0 : OFF(�s��v), 1 : ON(��v) */
	int match_flag = 0;

	/* �J�E���^�ϐ��̒�` */
	int i;

	/* ���͏��� */
	printf("�p�X���[�h����͂��Ă������� ==> ");
	scanf("%s", input);

	/* 2�̕����񂪓������ԁA���A�t���O��OFF�ŌJ��Ԃ��B */
	for (i = 0; password[i] == input[i] && match_flag == 0; i++) {

		/* ��v���镶���ł���NULL����'\0'�����t�������B */
		if (input[i] == '\0') {

			/* �p�X���[�h��v�t���O��ON�ɂ���B */
			match_flag++;
		}
	}

	/* �p�X���[�h�̈�v�m�F */
	if (match_flag != 0) {

		printf("�p�X���[�h��v\n");
	}
	else
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

/*
�y�����z
�������������A
��������������ꍇ�̑΍�Ƃ��āA
for���ŕ������r������ɁA
���͂��������z���NULL���������邩���肵�Ă���B
*/