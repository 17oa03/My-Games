/*
�y�v���O�����T�v�z
���ό̏�Ԋu(MTBF)�ƕ��ϏC������(MTTR)�𐮐��œ��͂��A
�ғ���(%)�������_�ȉ���1�ʂ܂ŏo�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

float Utilization(int, int); /* �v���g�^�C�v�錾 */

int main(void) /* ���C�����[�`���̒�` */
{
	int mtbf, mttr;
	float answer;

	printf("MTBF ==> ");
	scanf("%d", &mtbf); /* ���ό̏�Ԋu(MTBF)�̓��� */

	printf("MTTR ==> ");
	scanf("%d", &mttr); /* ���ϏC������(MTTR)�̓��� */

	answer = Utilization(mtbf, mttr); /* �������́umtbf, mttr�v�A�߂�l�́uanswer�v */

	printf("             MTBF\n");
	printf("�ғ��� = ------------- = %.1f %%\n", answer);
	printf("          MTBF + MTTR\n");

	return 0;
}

float Utilization(int mtbf, int mttr) /* �T�u���[�`���̒�`�A�������́umtbf, mttr�v */
{
	float answer;

	answer = (float)mtbf / (mtbf + mttr) * 100; /* �ғ��� = ���ό̏�Ԋu �� (���ό̏�Ԋu + ���ϏC������) �~ 100 */

	return answer; /* �߂�l�́uanswer�v */
}


/*
�y���s����1�z
MTBF ==> 80
MTTR ==> 20
MTBF
�ғ��� = ------------- = 80.0 %
MTBF + MTTR

�y���s����2�z
MTBF ==> 90
MTTR ==> 15
MTBF
�ғ��� = ------------- = 85.7 %
MTBF + MTTR
*/

/*
�y�l�@�z
���C���v���O�����ɂāA
�T�u���[�`�����Ăяo���ۂɁA
��������2�n����Ă���B

�������̐���������ƁA
�v���g�^�C�v�錾�̈����̌^�̋L�q�ƁA
�T�u���[�`���̉������̋L�q���ς��̂Œ��ӂ���A
�����̐�����v���Ȃ���
�R���p�C���G���[����������B
*/