/*
�y�v���O�����T�v�z
2�̏���������Ă���z��̊e�v�f��
�|�C���^�ϐ����g�p���Č�������B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ELEMENT 10 /* �}�N���萔�̒�` */

int main(void)
{
	int data1[ELEMENT] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }; /* �z��ϐ��̒�`�Ə����� */
	int data2[ELEMENT] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
	int tmp[ELEMENT];

	int i; /* �J�E���^�ϐ��̒�` */

	int *p_data1; /* �|�C���^�ϐ��̐錾 */
	int *p_data2;
	int *p_tmp;

	p_data1 = data1; /* �z��ϐ��̐擪�A�h���X���Z�b�g */
	p_data2 = data2;
	p_tmp = tmp;

	printf("*** �����O ***\n");
	printf("data1 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", *(p_data1 + i)); /* �����O�́up_data1�v�̎Q�Ƃ���l���o�� */
		*(p_tmp + i) = *(p_data1 + i); /* �up_data1�v�̎Q�Ƃ���l���up_tmp�v�̎Q�Ɛ�ɑ�� */
	}

	printf("\n");
	printf("data2 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", *(p_data2 + i)); /* �����O�́up_data2�v�̎Q�Ƃ���l���o�� */
		*(p_data1 + i) = *(p_data2 + i); /* �up_data2�v�̎Q�Ƃ���l���up_data1�v�̎Q�Ɛ�ɑ�� */
	}

	printf("\n*** ������ ***\n");
	printf("data1 = ");

	for (i = 0; i < ELEMENT; i++) {

		printf("%3d", *(p_data1 + i)); /* ������́up_data1�v�̎Q�Ƃ���l���o�� */
	}

	printf("\n");
	printf("data2 = ");

	for (i = 0; i < ELEMENT; i++) {

		*(p_data2 + i) = *(p_tmp + i); /* �up_tmp�v�̎Q�Ƃ���l���up_data2�v�̎Q�Ɛ�ɑ�� */
		printf("%3d", *(p_data2 + i)); /* ������́up_data2�v�̎Q�Ƃ���l���o�� */
	}

	printf("\n");

	return 0;
}

/*
�y���s���ʁz
*** �����O ***
data1 =   2  4  6  8 10 12 14 16 18 20
data2 =   3  6  9 12 15 18 21 24 27 30
*** ������ ***
data1 =   3  6  9 12 15 18 21 24 27 30
data2 =   2  4  6  8 10 12 14 16 18 20
*/

/*
�y�l�@�z
�|�C���^�ϐ����g�����f�[�^�����ɂȂ�A
for���̏����ŁA
�u�Ԑډ��Z�q(�|�C���^�ϐ� + �J�E���^�ϐ�)�v���L�q���A
�Q�Ɛ�ł���z��ϐ��̒l���������Ȃ��烋�[�v��������B
*/