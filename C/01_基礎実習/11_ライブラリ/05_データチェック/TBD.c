/*
【プログラム概要】
整数型データ領域にデータを入力し、
昇順に並び替える。
*/

/*【プログラム】*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFFER 256 /* バッファサイズ */

int main(void)
{
	char str[BUFFER];

	int sp_flag = 0; /* 各エラーフラグ */
	int cm_flag = 0;
	int cl_flag = 0;
	int no_flag = 0;
	int na_flag = 0;
	int po_flag = 0;

	int i, j; /* カウンタ変数 */

	while (fgets(str, BUFFER, stdin) != NULL) { /* ファイル入力 */

		for (i = 0; i < strlen(str); i++) {

			if (str[i] == ' ') { sp_flag = 1; } /* スペース(半角)判定 */
			if (str[i] == ',') { j++; } /* 区切り文字(,)のカウント */
		}

		if (j != 3) { cm_flag = 1; } /* 区切り文字(,)判定 */

		if (sp_flag == 0 && cm_flag == 0) {

			/* クラス判定 */
			/* 氏名判定 */
			/* 得点判定 */
		}
	}

	/* 出力 */

	return 0;
}

/*
【実行結果】
*/

/*
【考察】
*/