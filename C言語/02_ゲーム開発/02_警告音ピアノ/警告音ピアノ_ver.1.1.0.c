/*
【プログラム概要】
画面上に指定されたキーの入力でハ長調の音階をビープ音で再生させる。
また、ESCキーの入力でプログラムを終了させる。
*/

/*
【プログラム】
*/
#include <stdio.h>
#include <windows.h>

int main(void)
{
	int key;

	printf("THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTTHTHTHTHTH\n");
	printf("　　　　　＿＿＿＿＿＿\n");
	printf("　　　　　　　 ＼|　　　　(＿＿＿\n");
	printf("　　　　♪__ . | ＼　　　　　　｀ヽ、 ﾋﾟｰ♪\n");
	printf("　　　▼´　  ｀▼ ＼　　　　　　　 ＼ 　ﾎﾟｰ♪\n");
	printf("　　　i ｲ(（ｲﾞﾒ）ﾙ 　＼　　　　　　　〉\n");
	printf(".　　　ﾙｨ! ﾟ ヮﾟﾉｨ!    ＼　ﾊﾟｰ♪    /\n");
	printf("　∥　/ つ|￣￣￣￣￣￣!￣￣￣￣￣￣ﾉ\n");
	printf("　∥（ 匚＿＿＿＿＿＿ζ--ー―ーrー´\n");
	printf("　 〓〓ＵＵ　∥　　　　||　　　 .||\n");
	printf("　∥ 　  ∥. ∥）　　  ◎　　　 .||\n");
	printf(".　　　　　　◎　　　　　　　　 .◎\n");
	printf("THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTTHTHTHTHTH\n");
	printf("│      ■      ■      │       ■      ■      ■      │      ■\n");
	printf("│      ■      ■      │       ■      ■      ■      │      ■\n");
	printf("│ド(s) │レ(d) │ミ(f) │ファ(g)│ソ(h) │ラ(j) │シ(k) │ド(l) │\n");
	printf("└------┴------┴------┴-------┴------┴------┴------┴------┘\n");

	printf("\n・()内のキーを押すと音が鳴ります。\n");
	printf("・[ESC]キーで終了します。\n");


	_kbhit(); /* 標準入力(キーボード入力)データがバッファー内で待機する */

	while ((key = _getch()) != 0x1b) /* _getch()で受け取ったデータが[ESC]の場合はループを終了させる */
	{
		switch (key)
		{
		case 's': Beep(523, 300); break;    /* ドの音(523Hz)を300ms鳴らす */
		case 'd': Beep(587, 300); break;    /* レの音(587Hz)を300ms鳴らす */
		case 'f': Beep(659, 300); break;    /* ミの音(659Hz)を300ms鳴らす */
		case 'g': Beep(698, 300); break;    /* ファの音(698Hz)を300ms鳴らす */
		case 'h': Beep(784, 300); break;    /* ソの音(784Hz)を300ms鳴らす */
		case 'j': Beep(880, 300); break;    /* ラの音(880Hz)を300ms鳴らす */
		case 'k': Beep(988, 300); break;    /* シの音(988Hz)を300ms鳴らす */
		case 'l': Beep(1047, 300); break;   /* ドの音(1047Hz)を300ms鳴らす */
		default: break;
		}
	}

	system("cls"); /* 画面の表示をクリアする */

	return 0;
}