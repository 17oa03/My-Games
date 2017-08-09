/*
【プログラム概要】
*/

/*【プログラム】*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define BUFFER 256

int main(void)
{
	char str[BUFFER];

	int sp_flag;  /* スペース(半角)エラーフラグ */
	int cm_flag;  /* 区切り文字(,)エラーフラグ */
	int cl_flag;  /* クラスエラーフラグ */
	int no_flag;  /* NOエラーフラグ */
	int na_flag;  /* 氏名エラーフラグ */
	int po_flag;  /* 得点エラーフラグ */
	int out_flag; /* エラー出力フラグ */

	int i, j, k = 0, n; /* カウンタ変数 */

	while (fgets(str, BUFFER, stdin) != NULL) { /* ファイル入力 */

		sp_flag  = 0; /* フラグリセット */
		cm_flag  = 0;
		cl_flag  = 0;
		no_flag  = 0;
		na_flag  = 0;
		po_flag  = 0;
		out_flag = 0;

		k++; /* リダイレクト回数 */

		for (i = 0, j = 0; i <= (int)strlen(str); i++) { /* スペース, 区切り文字判定ループ */

			if (str[i] == ' ') { sp_flag = 1; out_flag = 1; } /* スペース(半角)判定 */
			if (str[i] == ',') { j++; } /* 区切り文字(,)のカウント */
		}

		if (j != 3) { cm_flag = 1; out_flag = 1; } /* 区切り文字(,)判定 */

		if (sp_flag == 0 && cm_flag == 0) { /* エラー未発生の場合 */

			for (i = 0; str[i] != ','; i++) { /* クラス判定ループ */

				if (isupper(str[i])) { /* クラスが大文字の場合 */

					if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C') { /* 'A','B','C'の場合 */

					}
					else /* それ以外の場合 */
					{

						cl_flag = 1; /* クラスエラー発生 */
						out_flag = 1; /* エラー出力フラグON */
					}
				}
				else /* それ以外の場合 */
				{

					cl_flag = 1; /* クラスエラー発生 */
					out_flag = 1; /* エラー出力フラグON */
				}
			}

			for (i++; str[i] != ','; i++) { /* NO判定ループ */

				if (isdigit(str[i])) { /* NOが数字の場合 */

					if (str[i] >= 1 && str[i] <= 5) { /* 「1」から「5」までのいずれかの数字の場合 */

					}
					else /* それ以外の場合 */
					{

						no_flag = 1; /* NOエラー発生 */
						out_flag = 1; /* エラー出力フラグON */
					}
				}
				else /* それ以外の場合 */
				{

					no_flag = 1; /* NOエラー発生 */
					out_flag = 1; /* エラー出力フラグON */
				}
			}

			for (i++; str[i] != ','; i++) { /* 氏名判定ループ1 */

				if (isupper(str[i])) { /* 頭文字が大文字の場合 */

				}
				else /* それ以外の場合 */
				{

					na_flag = 1; /* 氏名エラー発生 */
					out_flag = 1; /* エラー出力フラグON */
				}
			}

			while (str[i] == ',') { /* 氏名判定ループ2 */

				if (islower(str[i])) { /* 頭文字以降が小文字の場合 */

				}
				else /* それ以外の場合 */
				{

					na_flag = 1; /* 氏名エラー発生 */
					out_flag = 1; /* エラー出力フラグON */
				}

				i++;
			}

			for (i++;  str[i] != '\n'; i++) { /* 得点判定ループ */

				if (isdigit(str[i])) { /* 得点が数字の場合 */

					if (str[i] >= 0 && str[i] <= 100) { /* 「0」から「100」までのいずれかの数字の場合 */

					}
					else /* それ以外の場合 */
					{

						po_flag = 1; /* 得点エラー発生 */
						out_flag = 1; /* エラー出力フラグON */
					}
				}
				else /* それ以外の場合 */
				{

					po_flag = 1; /* 得点エラー発生 */
					out_flag = 1; /* エラー出力フラグON */
				}
			}

			if (out_flag == 1) {

				printf("%d:", k); /* レコード番号の出力 */

				fputs(str, stdout); /* データの出力 */

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
【実行結果】
*/

/*
【考察】
*/