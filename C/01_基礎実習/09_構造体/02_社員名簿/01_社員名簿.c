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
		int no;              /* �Ј��ԍ� */
		char name[11];       /* ���� */
		struct ymd entrance; /* ���ДN���� */
		struct ymd birth;    /* ���N���� */
	};

	/* �J�E���^�ϐ� */
	int i, j;

	/* �\���̕ϐ��̒�`�Ə����� */
	struct employee data[ELEMENT] = {
		{ 1212, "sato",      { 2002,  4,  1 }, { 1982,  6, 23 }}, /* 1�l�� */
		{ 2353, "suzuki",    { 2001,  4,  1 }, { 1984,  9, 30 }}, /* 2�l�� */
		{ 3147, "takahashi", { 2001, 10,  1 }, { 1986, 10, 11 }}, /* 3�l�� */
		{ 1212, "tanaka",    { 1995,  4, 20 }, { 1986, 10, 10 }}, /* 4�l�� */
		{ 1212, "watanabe",  { 1988,  3, 25 }, { 1985,  4, 20 }}, /* 5�l�� */
	};

	struct employee temp;

	/* �N��̍~���Ƀ\�[�g���� */
	for (i = 0; i < ELEMENT - 1; i++) {
		for (j = i - 1; j < ELEMENT; j++) {

			if (data[i].birth.y  < data[j].birth.y  ||
			   (data[i].birth.y == data[j].birth.y  &&
				data[i].birth.m  < data[j].birth.m) ||
			   (data[i].birth.y == data[j].birth.y  &&
				data[i].birth.m == data[j].birth.m) &&
				data[i].birth.d  < data[j].birth.m) {

				temp = data[j];
				data[j] = data[i];
				data[i] = temp;
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
�y�l�@�z
�\���̔z��̏������͈ꊇ�łł���A
�l�X�g���Ă���\���̂ɂ́A
�����{}���L�q����Ώ������ł���B

if���̓��e�����G�ɂȂ��Ă���A
���G�ȕ���͏������x���Ȃ邽�߁A
�Ȃ�ׂ����Z�����Ŕ���ł���悤�ɂ���ׂ��B

�o�͂Ɋւ��āA
�u-�v��ϊ��w��q�̊ԂɋL�q����ƍ��񂹂ɂł���B
*/