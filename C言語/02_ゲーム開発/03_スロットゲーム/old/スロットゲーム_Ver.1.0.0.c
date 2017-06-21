#include <stdio.h>
#include <stdlib.h> /* rand関数, srand関数 */
#include <time.h>   /* time関数 */


/* ▼ ---------- 図柄配列 ---------- ▼ */

char L_reel[9] = { '1','2','3','4','5','6','7','8','9' }; /* 左リール図柄配列 */
char C_reel[9] = { '1','2','3','4','5','6','7','8','9' }; /* 中リール図柄配列 */
char R_reel[9] = { '1','2','3','4','5','6','7','8','9' }; /* 右リール図柄配列 */


/* ▼ ---------- メインプログラム ---------- ▼ */

int main()
{
	int seisu1, seisu2, seisu3; /* 停止図柄 */
	int coin = 50;              /* コインの初期枚数 */
	int key = 0;                /* キー入力 */
	int end_flag = 0;           /* ゲーム終了フラグ */

	printf("　　-----------　THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
	printf("　　|[ ][ ][ ]|　TH                                  TH\n");
	printf("　　|[ ][ ][ ]|　TH　ゲームの説明                    TH\n");
	printf("　　|[ ][ ][ ]|　TH                                  TH\n");
	printf("　　-----------　TH　[]内の数字を                    TH\n");
	printf("　　|         |　TH　縦、横、斜めの何れかに揃えて、  TH\n");
	printf("　　|         |　TH　持ちコイン(最初は50枚)を        TH\n");
	printf("　　|         |　TH　100以上貯めよう！               TH\n");
	printf("　　|         |　TH　1ゲーム1枚、当りはコイン+13枚。 TH\n");
	printf("　　-----------　TH                                  TH\n");
	printf("　　           　THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");

	getchar(); /* キー入力待ち */



/* ▼ ---------- ゲーム終了条件 ---------- ▼ */

	while (end_flag == 0) {

		srand((unsigned)time(NULL)); /* 実行時の時間を元にして、発生させる乱数の元を決める */


/* ▼ ---------- キー入力待機(リール回転中) ---------- ▼ */

		while (key == 0) {

			if (_kbhit()) { /* _kbhit関数が何かキーが押された場合に0以外の値を返す */

				key = _getch(); /* getch関数がバッファ内に残されたキー情報を取り出す */
			}

				seisu1 = rand() % 10; /* 1以上、9以下の整数を代入する */
				seisu2 = rand() % 10; /* 1以上、9以下の整数を代入する */
				seisu3 = rand() % 10; /* 1以上、9以下の整数を代入する */

				printf("　　-----------\n");
				printf("　　|[%c][%c][%c]|\n", L_reel[seisu1], C_reel[seisu2], R_reel[seisu3]);
				printf("　　|[%c][%c][%c]|\n", L_reel[seisu1 + 1], C_reel[seisu2 + 1], R_reel[seisu3 + 1]);
				printf("　　|[%c][%c][%c]|\n", L_reel[seisu1 + 2], C_reel[seisu2 + 2], R_reel[seisu3 + 2]);
				printf("　　-----------\n");
				printf("　　|         |\n");
				printf("　　|         |\n");
				printf("　　|         |\n");
				printf("　　|         |\n");
				printf("　　-----------\n");
				printf("現在のコインは%d枚です。\n", coin);

				system("cls"); /* 画面のクリア */

			}

			coin = coin - 1; /* 持ちコインに13枚加算 */

			seisu1 = rand() % 7; /* 0以上、6以下の整数を代入する */
			seisu2 = rand() % 7; /* 0以上、6以下の整数を代入する */
			seisu3 = rand() % 7; /* 0以上、6以下の整数を代入する */


 /* ▼ ---------- 当否判定 ---------- ▼ */

			if ((L_reel[seisu1] == C_reel[seisu2] && C_reel[seisu2] == R_reel[seisu3]) ||                 /* 上段図柄揃い */
				(L_reel[seisu1 + 1] == C_reel[seisu2 + 1] && C_reel[seisu2 + 1] == R_reel[seisu3 + 1]) || /* 中段図柄揃い */
				(L_reel[seisu1 + 2] == C_reel[seisu2 + 2] && C_reel[seisu2 + 2] == R_reel[seisu3 + 2]) || /* 下段図柄揃い */
				(L_reel[seisu1] == C_reel[seisu2 + 1] && C_reel[seisu2 + 1] == R_reel[seisu3 + 2]) ||     /* 右上り図柄揃い */  
				(R_reel[seisu3] == C_reel[seisu2 + 1] && C_reel[seisu2 + 1] == R_reel[seisu1 + 2]))       /* 右下り図柄揃い */

			{
				coin = coin + 13; /* 持ちコインに13枚加算 */

				printf("　　-----------\n");
				printf("　　|[%c][%c][%c]|\n", L_reel[seisu1], C_reel[seisu2], R_reel[seisu3]);
				printf("　　|[%c][%c][%c]|\n", L_reel[seisu1 + 1], C_reel[seisu2 + 1], R_reel[seisu3 + 1]);
				printf("　　|[%c][%c][%c]|\n", L_reel[seisu1 + 2], C_reel[seisu2 + 2], R_reel[seisu3 + 2]);
				printf("　　-----------\n");
				printf("　　|         |\n");
				printf("　　|  ｱﾀﾘ!!  |\n");
				printf("　　|  +13枚  |\n");
				printf("　　|         |\n");
				printf("　　-----------\n");
				printf("現在のコインは%d枚です。\n", coin);

				getchar(); /* キー入力待ち */
			}
			else {

				printf("　　-----------\n");
				printf("　　|[%c][%c][%c]|\n", L_reel[seisu1], C_reel[seisu2], R_reel[seisu3]);
				printf("　　|[%c][%c][%c]|\n", L_reel[seisu1 + 1], C_reel[seisu2 + 1], R_reel[seisu3 + 1]);
				printf("　　|[%c][%c][%c]|\n", L_reel[seisu1 + 2], C_reel[seisu2 + 2], R_reel[seisu3 + 2]);
				printf("　　-----------\n");
				printf("　　|         |\n");
				printf("　　|  ﾊｽﾞﾚ!  |\n");
				printf("　　|         |\n");
				printf("　　|         |\n");
				printf("　　-----------\n");
				printf("現在のコインは%d枚です。\n", coin);

				getchar(); /* キー入力待ち */
			}


/* ▼ ---------- ゲームオーバー判定 ---------- ▼ */

			if (coin <= 0 || coin >= 100)
			{
				end_flag = 1;
			}

			key = 0;
		}

	system("cls"); /* 画面のクリア */


/* ▼ ---------- ゲームクリア判定 ---------- ▼ */

	if ( coin >= 100 )
	{
		printf("　　-----------　THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
		printf("　　|[ ][ ][ ]|　TH                                  TH\n");
		printf("　　|[ ][ ][ ]|　TH　                                TH\n");
		printf("　　|[ ][ ][ ]|　TH                                  TH\n");
		printf("　　-----------　TH　          おめでとう！          TH\n");
		printf("　　|         |　TH          ゲームクリアです！      TH\n");
		printf("　　|         |　TH　            ('ω')ノ            TH\n");
		printf("　　|         |　TH　                                TH\n");
		printf("　　|         |　TH                                  TH\n");
		printf("　　-----------　TH                                  TH\n");
		printf("　　           　THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");

		getchar(); /* キー入力待ち */
	}


/* ▼ ---------- ゲームオーバー判定 ---------- ▼ */

	if ( coin <= 0 )
	{
		printf("　　-----------　THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
		printf("　　|[ ][ ][ ]|　TH                                  TH\n");
		printf("　　|[ ][ ][ ]|　TH　                                TH\n");
		printf("　　|[ ][ ][ ]|　TH                                  TH\n");
		printf("　　-----------　TH　                                TH\n");
		printf("　　|         |　TH            GAME OVER!            TH\n");
		printf("　　|         |　TH　                                TH\n");
		printf("　　|         |　TH　                                TH\n");
		printf("　　|         |　TH                                  TH\n");
		printf("　　-----------　TH                                  TH\n");
		printf("　　           　THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");

		getchar(); /* キー入力待ち */
	}

	return 0;
}