#include <stdio.h>

int main(void)
{
	/* �\���̂̌^�g�̐錾 */
	struct student {
		int no;
		char name[11];
		double height;
		double weight;
	};

	/* �\���̕ϐ��̒�` */
	struct student data1, data2;

	/* ���� */
	printf("�R�s�[���̓���\n");

	printf("�ԍ� ==> ");
	scanf("%d", &data1.no);

	printf("���� ==> ");
	scanf("%s", data1.name);

	printf("�g�� ==> ");
	scanf("%lf", &data1.height);

	printf("�̏d ==> ");
	scanf("%lf", &data1.weight);

	/* �\���̂̃R�s�[ */
	data2 = data1;

	/* �o�� */
	printf("\n�R�s�[���̐��k\n");
	printf("�ԍ�  :  %d\n", data1.no);
	printf("����  :  %s\n", data1.name);
	printf("�g��  :  %.1f\n", data1.height);
	printf("�̏d  :  %.1f\n", data1.weight);

	printf("\n�R�s�[��̐��k\n");
	printf("�ԍ�  :  %d\n", data2.no);
	printf("����  :  %s\n", data2.name);
	printf("�g��  :  %.1f\n", data2.height);
	printf("�̏d  :  %.1f\n", data2.weight);

	return 0;
}