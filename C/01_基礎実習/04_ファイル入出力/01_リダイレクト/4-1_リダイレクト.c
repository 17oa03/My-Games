/*
【プログラム概要】
整数を繰り返し入力する。
ファイルの終わり(EOF)で入力を終了し、
合計を出力する。

※コマンドプロンプトにて、
「実行ファイル名 < data1.txt > data2.txt」を入力する。
*/

/*【プログラム】*/
#include <stdio.h>

int main(void)
{
	int seisu;

	int gokei = 0;

	int end_flag; /* ファイル終端フラグ */

	end_flag = scanf("%d", &seisu);

	while (end_flag != EOF) {
		
		gokei += seisu;

		end_flag = scanf("%d", &seisu);
	}

	printf("%d\n", gokei);

	return 0;
}

/*
【実行結果】
27
51
83
35
60
^Z
^Z
^Z
256
*/

/*
【考察】
EOF(End Of File)は、
ファイルの終わりを示す制御コードのことで、
EOFは標準ヘッダファイル(stdio.h)で
「-1」としてマクロ定義されている。
*/