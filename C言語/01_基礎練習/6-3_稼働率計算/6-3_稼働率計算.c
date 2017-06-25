/*
�y�v���O�����T�v�z
���ό̏�Ԋu(MTBF)�ƕ��ϏC������(MTTR)�𐮐��œ��͂��A
�ғ���(%)�������_�ȉ���1�ʂ܂ŏo�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

/* �ғ������v�Z����֐� */
float Operation(int mtbf, int mttr);

int main(void)
{
	int mtbf, mttr;
	float answer;

	/* ���ό̏�Ԋu(MTBF)�̓��� */
	printf("MTBF ==> ");
	scanf("%d", &mtbf);

	/* ���ϏC������(MTTR)�̓��� */
	printf("MTTR ==> ");
	scanf("%d", &mttr);

	answer = Operation(mtbf, mttr);

	printf("             MTBF\n");
	printf("�ғ��� = ------------- = %.1f %%\n", answer);
	printf("          MTBF + MTTR\n");

	return 0;
}

/* ������ : mtbf, mttr */
float Operation(int mtbf, int mttr)
{
	float answer;

	/* �ғ��������߂�v�Z */
	answer = (float)mtbf / (mtbf + mttr) * 100;

	/* �߂�l : answer */
	return answer;
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
�y�s������z
�֐��̒�`�ɂāA
float Operation(int mtbf, int mttr);
�ƋL�q���Ă���A
�u�G�v���]�v�ɋL�q����Ă������߁A
�֐����錾������Ă��Ȃ���ԂƂȂ��Ă����A
�u�G�v���폜���ďC�������B
*/