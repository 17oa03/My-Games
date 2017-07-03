/*
�y�v���O�����T�v�z
�Ј�����(5����)�̍\���̔z������������A
�N��̍~���ɏo�͂���B
*/

/*�y�v���O�����z*/
#include <stdio.h>

#define ELEMENT 5 /* �l�� */

int main(void)
{
	/* �\���̂̌^�g�̐錾 */
	struct ymd {
		int y; /* �N */
		int m; /* �� */
		int d; /* �� */
	};

	struct employee {
		int    no;           /* �Ј��ԍ� */
		char   name[11];     /* ���� */
		struct ymd entrance; /* ���ДN���� */
		struct ymd birth;    /* ���N���� */
	};

	/* �J�E���^�ϐ� */
	int i, j;

	/* ���N������8���̐����Ŕ�r����ׂ̔z��ƕϐ� */
	int comparison[ELEMENT];
	int temp_1;

	/* �\���̕ϐ��̒�`�Ə����� */
	struct employee data[ELEMENT] = {
		{ 1212, "sato",      { 2002,  4,  1 },{ 1982,  6, 23 } }, /* 1�l�� */
		{ 2353, "suzuki",    { 2001,  4,  1 },{ 1984,  9, 30 } }, /* 2�l�� */
		{ 3147, "takahashi", { 2001, 10,  1 },{ 1986, 10, 11 } }, /* 3�l�� */
		{ 5206, "tanaka",    { 1995,  4, 20 },{ 1986, 10, 10 } }, /* 4�l�� */
		{ 6447, "watanabe",  { 1988,  3, 25 },{ 1985,  4, 20 } }, /* 5�l�� */
	};

	struct employee temp_2;

	/* ���N������8���̐����ɕϊ����Ĕz��ɑ�� */
	for (i = 0; i < ELEMENT; i++) {
		comparison[i] = comparison[i] + (data[i].birth.y * 10000);
		comparison[i] = comparison[i] + (data[i].birth.m * 100);
		comparison[i] = comparison[i] + (data[i].birth.d);
	}

	/* �N��̍~���Ƀ\�[�g���� */
	for (i = 0; i < ELEMENT - 1; i++) {
		for (j = i + 1; j < ELEMENT; j++) {

			if (comparison[i] > comparison[j]) {

				temp_2 = data[i];
				data[i] = data[j];
				data[j] = temp_2;

				temp_1 = comparison[i];
				comparison[i] = comparison[j];
				comparison[j] = temp_1;
			}
		}
	}

	/* �o�� */
	printf("�Ј��ԍ� ��    ��   ���ДN����  ���N���� \n");
	printf("-------- ---------- ---------- ----------\n");

	for (i = 0; i < ELEMENT; i++) {
		printf("%8d ", data[i].no);
		printf("%-11s", data[i].name);
		printf("%4d/%2d/%2d ", data[i].entrance);
		printf("%4d/%2d/%2d\n", data[i].birth);
	}

	return 0;
}

/*
�y���s���ʁz
�Ј��ԍ� ��    ��   ���ДN����  ���N����
-------- ---------- ---------- ----------
    1212 sato       2002/ 4/ 1 1982/ 6/23
    2353 suzuki     2001/ 4/ 1 1984/ 9/30
    6447 watanabe   1988/ 3/25 1985/ 4/20
    5206 tanaka     1995/ 4/20 1986/10/10
    3147 takahashi  2001/10/ 1 1986/10/11
*/

/*
�y�l�@�z
�Ј�����(2)����A
����ɉǐ����グ���B

���N������8���̐����ɕϊ����邱�Ƃɂ��A
�\�[�g�𔻒肷��if���̏��������ȒP�ɂȂ����B

���ӓ_�Ƃ��ẮA
����Ɏg�p�����z����������鏈�����K�v�ɂȂ�B
*/