/*
�y�v���O�����T�v�z
2�̐�������͂��A
�|�C���^�ϐ����g�p���Ęa���v�Z�A
�v�Z���ʂ��o�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

int main(void)
{
	/* ���[�J���ϐ��̒�` */
	int input1, input2, answer;

	/* �|�C���^�ϐ��̒�` */
	int *p_input1, *p_input2, *p_answer;

	/* �A�h���X�Z�b�g */
	p_input1 = &input1;
	p_input2 = &input2;
	p_answer = &answer;

	printf("1�ڂ̐�������͂��Ă������� ==> ");
	scanf("%d", p_input1);

	printf("2�ڂ̐�������͂��Ă������� ==> ");
	scanf("%d", p_input2);
	
	/* �Ԑډ��Z�q�ŃA�N�Z�X��̒l���Q�Ƃ��Čv�Z���� */
	*p_answer = *p_input1 + *p_input2;

	printf("%d + %d = %d\n", *p_input1, *p_input2, *p_answer);

	return 0;
}

/*
�y���s���ʁz
1�ڂ̐�������͂��Ă������� ==> 30
2�ڂ̐�������͂��Ă������� ==> 20
30 + 20 = 50
*/

/*
�y�s������z
���Z���ɂāA
�Ԑډ��Z�q�̋L�q�����������ׁA
�s��̒l���\�����ꂽ�A
�u*�v���L�q���ďC�����܂����B
*/