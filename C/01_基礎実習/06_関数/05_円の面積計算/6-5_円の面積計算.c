/*
�y�v���O�����T�v�z
���a����͂��A
�ʂ̖ʐς������_�ȉ���2�ʂ܂ŏo�͂���B
*/

/*
�y�v���O�����z
*/
#include <stdio.h>

/* ���͂���������֐� */
int Input(void);
/* �ʐς��v�Z����֐� */
double Calculate(int radius);
/* �o�͂���������֐� */
void Output(int, double);

int main(void)
{
	/* ���a */
	int radius;
	/* �ʐ� */
	double area;

	/* ������ : �Ȃ� | �߂�l : radius */
	radius = Input();
	/* ������ : radius | �߂�l : area */
	area = Calculate(radius);
	/* ������ : radius, area | �߂�l : �Ȃ� */
	Output(radius, area);

	return 0;
}

/* ������ : �Ȃ� */
int Input(void)
{

	int radius;

	printf("���a ==> ");
	scanf("%d", &radius);

	/* �߂�l : radius */
	return radius;
}

/* ������ : radius */
double Calculate(int radius)
{

	double area;

	/* �ʐς̌v�Z */
	area = (double) radius * radius * 3.14;

	/* �߂�l : area */
	return area;
}

/* ������ : area */
void Output(int radius, double area)
{

	printf("���a %d �̉~�̖ʐς� %.2f �ł��B\n", radius, area);

	/* �߂�l : �Ȃ� */
	return;
}



/*
�y���s����1�z
���a ==> 12
���a 12 �̉~�̖ʐς� 452.16 �ł��B

�y���s����2�z
���a ==> 10
���a 10 �̉~�̖ʐς� 314.00 �ł��B
*/