/*
�y�v���O�����T�v�z
2�̐�������͂��A
�|�C���^�ϐ����g�p���Ęa���v�Z�A
�v�Z���ʂ��o�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	int input1, input2, answer;/* �ϐ��̒�` */

	int *p_input1, *p_input2, *p_answer; /* �|�C���^�ϐ��̐錾 */

	p_input1 = &input1; /* �A�h���X�Z�b�g */
	p_input2 = &input2;
	p_answer = &answer;

	printf("1�ڂ̐�������͂��Ă������� ==> ");
	scanf("%d", p_input1); /* �|�C���^�ϐ��̎Q�Ɛ�ɓ��� */

	printf("2�ڂ̐�������͂��Ă������� ==> ");
	scanf("%d", p_input2); /* �|�C���^�ϐ��̎Q�Ɛ�ɓ��� */

	*p_answer = *p_input1 + *p_input2; /* �Ԑډ��Z�q�ŃA�N�Z�X��̒l���Q�Ƃ��A���Z���ʂ��� */

	printf("%d + %d = %d\n", *p_input1, *p_input2, *p_answer); /* �Q�Ɛ�̒l���o�͂��� */

	return 0;
}

/*
�y���s���ʁz
1�ڂ̐�������͂��Ă������� ==> 30
2�ڂ̐�������͂��Ă������� ==> 20
30 + 20 = 50
*/

/*
�y�l�@�z
�|�C���^�ϐ��ƊԐډ��Z�q���g���ĉ��Z���A
���ʂ�ʂ̃|�C���^�ϐ��ɑ�����邱�Ƃ��ł���B
*/