/*
�y�v���O�����T�v�z
�W�����͂�蕶�������͂��A
�ʂ̕�����ɃR�s�[����B
2�̕����z��̕�������20�����𒴂����ꍇ�A
�A�������������Ȃ��B
*/

/*�y�v���O�����z*/
#include <stdio.h>

int main(void)
{
	char string1[256]; /* �����z��̐錾 */
	char string2[256];

	int i, j; /* �J�E���^�ϐ� */

	printf("1�ڂ̕����� ==> ");
	scanf("%s", string1); /* ������̓��� */

	printf("2�ڂ̕����� ==> ");
	scanf("%s", string2); /* ������̓��� */

	for (i = 0; string1[i] != '\0'; i++); /* �����z��̕��������J�E���g */
	for (j = 0; string2[j] != '\0'; j++);

	if (i + j <= 20) { /* �����z��̍��v��������20�����ȉ��̏ꍇ */

		for (j = 0; string2[j] != '\0'; i++, j++) {

			string1[i] = string2[j]; /* ������̘A������ */
		}

		string1[i] = '\0'; /* �k������(\0)�̑�� */

		printf("�A�����1�ڂ̕����� : %s\n", string1); /* �A����̏o�� */
	}
	else /* �����z��̍��v��������20�������傫���ꍇ */
	{

		printf("���v��20�����𒴂����̂ŘA�����܂���B\n");
	}

	return 0;
}

/*
�y���s����1�z
1�ڂ̕����� ==> abcdefg
2�ڂ̕����� ==> hijklmn
�A�����1�ڂ̕����� : abcdefghijklmn

�y���s����2�z
1�ڂ̕����� ==> abcdefghi
2�ڂ̕����� ==> jklmnopqrst
�A�����1�ڂ̕����� : abcdefghijklmnopqrst

�y���s����3�z
1�ڂ̕����� ==> abcdefghijklmn
2�ڂ̕����� ==> opqrstuvwxyz
���v��20�����𒴂����̂ŘA�����܂���B
*/