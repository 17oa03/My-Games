/*
�y�v���O�����T�v�z
*/

/*�y�v���O�����z*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BUFFER 256

int main(void)
{
	char str[BUFFER];

	int sp_flag;  /* �X�y�[�X(���p)�G���[�t���O */
	int cm_flag;  /* ��؂蕶��(,)�G���[�t���O */
	int cl_flag;  /* �N���X�G���[�t���O */
	int no_flag;  /* NO�G���[�t���O */
	int na_flag;  /* �����G���[�t���O */
	int po_flag;  /* ���_�G���[�t���O */
	int out_flag; /* �G���[�o�̓t���O */

	int i, j, k = 0, n; /* �J�E���^�ϐ� */

	while (fgets(str, BUFFER, stdin) != NULL) { /* �t�@�C������ */

		sp_flag  = 0; /* �t���O���Z�b�g */
		cm_flag  = 0;
		cl_flag  = 0;
		no_flag  = 0;
		na_flag  = 0;
		po_flag  = 0;
		out_flag = 0;

		k++; /* ���_�C���N�g�� */

		for (i = 0, j = 0; i <= (int)strlen(str); i++) { /* �X�y�[�X, ��؂蕶�����胋�[�v */

			if (str[i] == ' ') { sp_flag = 1; out_flag = 1; } /* �X�y�[�X(���p)���� */
			if (str[i] == ',') { j++; } /* ��؂蕶��(,)�̃J�E���g */
		}

		if (j != 3) { cm_flag = 1; out_flag = 1; } /* ��؂蕶��(,)���� */

		if (sp_flag == 0 && cm_flag == 0) { /* �G���[�������̏ꍇ */

			for (i = 0; str[i] != ','; i++) { /* �N���X���胋�[�v */

				if (isupper(str[i])) { /* �N���X���啶���̏ꍇ */

					if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C') { /* 'A','B','C'�̏ꍇ */

					}
					else /* ����ȊO�̏ꍇ */
					{

						cl_flag = 1; /* �N���X�G���[���� */
						out_flag = 1; /* �G���[�o�̓t���OON */
					}
				}
				else /* ����ȊO�̏ꍇ */
				{

					cl_flag = 1; /* �N���X�G���[���� */
					out_flag = 1; /* �G���[�o�̓t���OON */
				}
			}

			for (i++; str[i] != ','; i++) { /* NO���胋�[�v */

				if (isdigit(str[i])) { /* NO�������̏ꍇ */

					if (str[i] >= 1 && str[i] <= 5) { /* �u1�v����u5�v�܂ł̂����ꂩ�̐����̏ꍇ */

					}
					else /* ����ȊO�̏ꍇ */
					{

						no_flag = 1; /* NO�G���[���� */
						out_flag = 1; /* �G���[�o�̓t���OON */
					}
				}
				else /* ����ȊO�̏ꍇ */
				{

					no_flag = 1; /* NO�G���[���� */
					out_flag = 1; /* �G���[�o�̓t���OON */
				}
			}

			for (i++; str[i] != ','; i++) { /* �������胋�[�v1 */

				if (isupper(str[i])) { /* ���������啶���̏ꍇ */

				}
				else /* ����ȊO�̏ꍇ */
				{

					na_flag = 1; /* �����G���[���� */
					out_flag = 1; /* �G���[�o�̓t���OON */
				}
			}

			while (str[i] == ',') { /* �������胋�[�v2 */

				if (islower(str[i])) { /* �������ȍ~���������̏ꍇ */

				}
				else /* ����ȊO�̏ꍇ */
				{

					na_flag = 1; /* �����G���[���� */
					out_flag = 1; /* �G���[�o�̓t���OON */
				}

				i++;
			}

			for (i++;  str[i] != '\n'; i++) { /* ���_���胋�[�v */

				if (isdigit(str[i])) { /* ���_�������̏ꍇ */

					if (str[i] >= 0 && str[i] <= 100) { /* �u0�v����u100�v�܂ł̂����ꂩ�̐����̏ꍇ */

					}
					else /* ����ȊO�̏ꍇ */
					{

						po_flag = 1; /* ���_�G���[���� */
						out_flag = 1; /* �G���[�o�̓t���OON */
					}
				}
				else /* ����ȊO�̏ꍇ */
				{

					po_flag = 1; /* ���_�G���[���� */
					out_flag = 1; /* �G���[�o�̓t���OON */
				}
			}

			if (out_flag == 1) {

				printf("%d:", k); /* ���R�[�h�ԍ��̏o�� */

				fputs(str, stdout); /* �f�[�^�̏o�� */

				printf(":"); /*  */

				if (sp_flag == 1 && cm_flag == 1) {

					printf("SP,CM");
				}
				else if (sp_flag == 1) {

					printf("SP");
				}
				else if (cm_flag == 1) {

					printf("CM");
				}
				else
				{

					if (cl_flag == 1) { printf("CL");

						if (no_flag == 1) { printf("NO");

							if (na_flag == 1) { printf(",NA");

								if (po_flag == 1) { printf(",PO");

								}
							}
							else
							{
								if (po_flag == 1) { printf(",PO");

								}
							}
						}
						else
						{
							if (na_flag == 1) {
								printf(",NA");

								if (po_flag == 1) {
									printf(",PO");

								}
							}
						}
					}
					else
					{
						if (no_flag == 1) {
							printf(",NO");

							if (na_flag == 1) {
								printf(",NA");

								if (po_flag == 1) {
									printf(",PO");

								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}

/*
�y���s���ʁz
*/

/*
�y�l�@�z
*/