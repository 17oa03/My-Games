/*
THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH

　　　　　　　　　   ブロック落とし

THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH
*/


/* ▼ ---------- 標準ヘッダファイル ---------- ▼ */

#include <stdio.h>  /* 標準入出力関数 */
#include <stdlib.h> /* スタンダード関数 */
#include <conio.h>  /* コンソール入出力関数 */
#include <time.h>   /* time関数 */


/* ▼ ---------- 定数定義 ---------- ▼ */

#define BLK_H  4 /* ブロックの縦の大きさ */
#define BLK_W  4 /* ブロックの横の大きさ */
#define BD_H  23 /* ゲーム画面の縦の大きさ */
#define BD_W  18 /* ゲーム画面の横の大きさ */


/* ▼ ---------- 外部関数 ---------- ▼ */

void BD_img(void);            /* 多次元配列のデータを記号で表示させる外部変数 */
void BD_init_1(void);         /* 壁のデータの代入と外部変数の初期化をする外部変数 */
void BD_init_2(void);         /* 現在座標と変数の初期化をする外部変数 */
void BD_reflect_1(void);      /* ブロックとゲーム画面のデータを反映させる外部変数 */
void BD_reflect_2(void);      /* ブロックの消去後のデータを反映させる外部変数 */
void BLK_clear_row(void);     /* ブロックの消去後にデータを代入する外部変数 */
void BLK_clear_search(void);  /* ブロックが横一列に揃ってる箇所を探す外部変数 */
void BLK_control(void);       /* キー入力時にブロックを動作させる外部変数 */
void BLK_hit_left(void);      /* ブロックの左側の当り判定をする外部変数 */
void BLK_hit_right(void);     /* ブロックの右側の当り判定をする外部変数 */
void BLK_hit_down(void);      /* ブロックの下側の当り判定をする外部変数 */
void BLK_hit_up(void);        /* ブロックの出現位置の当り判定をする外部変数 */
void BLK_hit_turn(void);      /* ブロックが回転した後の当り判定をする外部変数 */
void BLK_CW(void);            /* ブロックを右に回す外部変数(Clockwise = CW) */
void BLK_CCW(void);           /* ブロックを左に回す外部変数(Counter clockwise = CCW) */
void BLK_fall(void);          /* ブロックを現在のy座標から+1落下させる外部変数 */
void BLK_fix(void);           /* 落下後のブロックを固定する外部変数 */
void BLK_respawn(void);       /* 次のブロックの生成をする外部変数 */
void BLK_save(void);          /* 現在のブロックの表示をBD_backに保存する外部変数 */
void BLK_speed(void);         /* ブロックの落下速度(時間)を調節する外部変数 */
void GAME_OVER(void);         /* ゲームオーバーの処理する外部変数 */

int BD_back[BD_H][BD_W];      /* 壁の値を格納する配列 */
int BD_front[BD_H][BD_W];     /* ブロックと壁を合わせた値を格納する配列 */
int BLK[BLK_H][BLK_W];        /* ブロックの表示の値を格納する配列 */
int BLK_clear_flag;           /* ブロックの消去すべき列の判定の結果を格納する外部変数 */
int BLK_clear_mark[BD_H - 3]; /* ブロックの消去すべき列の目印を付ける外部変数([20]は内側の要素数) */
int BLK_clear_speed;          /* ブロックの消去中の時間を調節する外部変数 */
int BLK_hit_flag;             /* ブロックの当り判定の結果を格納する外部変数 */
int BLK_rand_no;              /* ブロックを選択する際の乱数を格納する外部変数 */
int BLK_respawn_flag;         /* ブロックの生成の判定の結果を格納する外部変数 */
int BLK_turn[BLK_H][BLK_W];   /* ブロックの回転後の値を格納する2次元配列 */
int BLK_turn_flag;            /* ブロックの回転状態を格納する外部変数 */
int BLK_x;                    /* ブロックのx座標を格納する外部変数 */
int BLK_y;                    /* ブロックのy座標を格納する外部変数 */
int GAME_OVER_flag;           /* ゲームオーバーの判定の結果を格納する外部変数 */


/* ▼ ---------- ブロックの種類 ---------- ▼ */

int BLK_type[BLK_H * 6][BLK_W * 4] = { /* 6種類の形と4種類の回転状態を追加する */
	/*
	□□□□ □□□□ □□□□ □□□□
	□■■□ □■■□ □■■□ □■■□
	□■■□ □■■□ □■■□ □■■□
	□□□□ □□□□ □□□□ □□□□
	*/
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	{ 0,1,1,0, 0,1,1,0, 0,1,1,0, 0,1,1,0 },
	{ 0,1,1,0, 0,1,1,0, 0,1,1,0, 0,1,1,0 },
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	/*
	□□□□ □□□□ □□□□ □□□□
	□■■□ □□■□ □■□□ □■■□
	□□■□ □■■□ □■■□ □■□□
	□□□□ □□□□ □□□□ □□□□
	*/
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	{ 0,1,1,0, 0,0,1,0, 0,1,0,0, 0,1,1,0 },
	{ 0,0,1,0, 0,1,1,0, 0,1,1,0, 0,1,0,0 },
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	/*
	□□□□ ■□□□ □□□■ □□□□
	□□■□ □■□□ □□■□ □■□□
	□■□□ □□■□ □■□□ □□■□
	■□□□ □□□□ □□□□ □□□■
	*/
	{ 0,0,0,0, 1,0,0,0, 0,0,0,1, 0,0,0,0 },
	{ 0,0,1,0, 0,1,0,0, 0,0,1,0, 0,1,0,0 },
	{ 0,1,0,0, 0,0,1,0, 0,1,0,0, 0,0,1,0 },
	{ 1,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,1 },

	/*
	□□□□ □□□□ □□□□ □□□□
	□■□■ □□■■ □□□□ □■■□
	□■■■ □□■□ □■■■ □□■□
	□□□□ □□■■ □■□■ □■■□
	*/
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	{ 0,1,0,1, 0,0,1,1, 0,0,0,0, 0,1,1,0 },
	{ 0,1,1,1, 0,0,1,0, 0,1,1,1, 0,0,1,0 },
	{ 0,0,0,0, 0,0,1,1, 0,1,0,1, 0,1,1,0 },
	/*
	□□□□ □□□□ □□□□ □□□□
	□■□□ □□□□ □■□□ □■□□
	□■■□ ■■■□ ■■□□ ■■■□
	□■□□ □■□□ □■□□ □□□□
	*/
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0 },
	{ 0,1,0,0, 0,0,0,0, 0,1,0,0, 0,1,0,0 },
	{ 0,1,1,0, 1,1,1,0, 1,1,0,0, 1,1,1,0 },
	{ 0,1,0,0, 0,1,0,0, 0,1,0,0, 0,0,0,0 },
	/*
	□■□□ □□□□ □■□□ □□□□
	□■□□ ■■■■ □■□□ ■■■■
	□■□□ □□□□ □■□□ □□□□
	□■□□ □□□□ □■□□ □□□□
	*/
	{ 0,1,0,0, 0,0,0,0, 0,1,0,0, 0,0,0,0 },
	{ 0,1,0,0, 1,1,1,1, 0,1,0,0, 1,1,1,1 },
	{ 0,1,0,0, 0,0,0,0, 0,1,0,0, 0,0,0,0 },
	{ 0,1,0,0, 0,0,0,0, 0,1,0,0, 0,0,0,0 }
};


/* ▼ ---------- メインプログラム ---------- ▼ */

int main() {

	BD_init_1(); /* 壁の作成と外部変数の初期化 */

	printf("■                        ■\n"); /* タイトル画面 */
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■     ブロック落とし     ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■  HTHTHTHTHTHTHTHTHHTH  ■\n");
	printf("■  HT                TH  ■\n");
	printf("■  HT PUSH ENTER KYE TH  ■\n");
	printf("■  HT                TH  ■\n");
	printf("■  HTHTHTHTHTHTHTHHTHTH  ■\n");
	printf("■                        ■\n");
	printf("■  ---- ｿｳｻ ﾎｳﾎｳ ----    ■\n");
	printf("■                        ■\n");
	printf("■    ← →  ｲﾄﾞｳ         ■\n");
	printf("■   ↑ z    ｶｲﾃﾝ         ■\n");
	printf("■   ↓      ｷｭｳﾗｯｶ       ■\n");
	printf("■                        ■\n");
	printf("■■■■■■■■■■■■■■\n\n");

	getchar(); /* getcher関数でタイトル画面のキー入力待ちをさせる */

	while (GAME_OVER_flag == 0) {  /* ゲームオーバーの条件を満たさない限り下記実行を繰り返す */

		if (BLK_clear_flag == 0) { /* もしブロックが横一列に揃っていない場合 */
			BLK_respawn();         /* 次のブロックの生成をする外部変数 */
			GAME_OVER();           /* ゲームオーバーの画面を表示させる外部変数 */
			BLK_control();         /* キー入力時にブロックを動作させる外部変数 */
			BD_reflect_1();        /* ブロックとゲーム画面のデータを反映させる */
			BLK_fix();             /* 落ちたブロックを固定する処理 */
			BLK_fall();            /* ブロックを現在のy座標から+1落下させる外部変数 */
		}
		else                       /* あるいはブロックが横一列に揃った場合 */
		{
			BLK_clear_row(); /* ブロックの消去後にデータを代入する外部変数 */
			BD_reflect_2();  /* ブロックの消去後のデータを反映させる */
		}

		BD_img();    /* 2次元配列のデータを記号で表示する外部変数 */
		BLK_speed(); /* ブロックの落下速度の処理 */
	}

	system("cls"); /* コンソールの表示内容をクリアする */

	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■  HTHTHTHTHTHTHTHTHHT   ■\n");
	printf("■  HT               HT   ■\n");
	printf("■  HT   GAME OVER   HT   ■\n");
	printf("■  HT               HT   ■\n");
	printf("■  HTHTHTHTHTHTHTHHTHT   ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■                        ■\n");
	printf("■■■■■■■■■■■■■■\n\n");

	getchar(); /* getcher関数でゲームオーバー画面のキー入力待ちをさせる */

	return 0;
}


/* ▼ ---------- ゲーム画面の記号表示 ---------- ▼ */

void BD_img() {
	int i, j;

	system("cls"); /* コンソールの表示内容をクリアする */

	for (i = 0; i<BD_H - 2; i++) {
		for (j = 2; j<BD_W - 2; j++) {
			if (BD_front[i][j] == 9)printf("■");      /* 配列の値が9の部分は■表示(壁表示) */
			else if (BD_front[i][j] == 1)printf("□"); /* 配列の値が1の部分は□表示(ブロック表示) */
			else if (BD_front[i][j] == 2)printf("■"); /* 配列の値が2の部分は■表示(ブロック重複) */
			else printf("　");                         /* 配列の値が0の部分は全角スペース表示(移動可能領域) */
		}
		printf("\n"); /* 内側のループ後に改行しないと横配列がつながって画面表示が滅茶苦茶になる */
	}
}


/* ▼ ---------- 壁の作成と外部変数の初期化 ---------- ▼ */

void BD_init_1() {
	int i, j;

	for (i = 0; i<BD_H; i++) {
		for (j = 0; j<BD_W; j++) {

			BD_back[i][2] = 9;     /* ゲーム画面の配列に左列を追加して壁を作成 */
			BD_back[i][15] = 9;     /* ゲーム画面の配列に右列を追加して壁を作成 */
			BD_back[20][j] = 9;     /* ゲーム画面の配列の下行を追加して壁を作成 */
		}
	}

	BLK_x = 7;               /* 現在のx座標をブロックの出現位置にする */
	BLK_y = 0;               /* 現在のy座標をブロックの出現位置にする */
	BLK_hit_flag = 0;        /* False = 判定無し  True = 判定有り */
	GAME_OVER_flag = 0;      /* False = 判定無し  True = 判定有り */
	BLK_respawn_flag = 1;    /* False = 生成無し  True = 生成有り */
	BLK_clear_flag = 0;      /* False = 判定無し  True = 判定有り */
	BLK_rand_no = 0;         /* 初期化が必要な変数 */
	BLK_clear_speed = 0;     /* 初期化が必要な変数 */
	BLK_turn_flag = 0;       /* 初期化が必要な変数 */

	srand((unsigned)time(NULL)); /* rand関数の値を実行の度に変化する値にする */
}


/* ▼ ---------- 現在座標と変数の初期化 ---------- ▼ */

void BD_init_2() {
	BLK_x = 7;            /* 現在のx座標をブロックの出現位置にする */
	BLK_y = 0;            /* 現在のy座標をブロックの出現位置にする */
	BLK_respawn_flag = 1; /* False = 生成無し  True = 生成有り */
	BLK_turn_flag = 0;    /* ブロックの回転状態を初期化する */
}


/* ▼ ---------- ブロックとゲーム画面のデータを反映 ---------- ▼ */

void BD_reflect_1() {
	int i, j, x, y;

	for (i = 0; i<BD_H; i++) {
		for (j = 0; j<BD_W; j++) {
			BD_front[i][j] = BD_back[i][j]; /* ゲーム画面のデータを反映させる */
		}
	}

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			BD_front[BLK_y + y][BLK_x + x] += BLK[y][x]; /* ブロックのデータを加える */
		}
	}
}


/* ▼ ---------- ブロックの消去後のデータの反映 ---------- ▼ */

void BD_reflect_2() {
	int i, j;

	for (i = 0; i<BD_H; i++) {
		for (j = 0; j<BD_W; j++) {
			BD_front[i][j] = BD_back[i][j]; /* ブロックの消去後のデータを反映させる */
		}
	}
}


/* ▼ ---------- ブロックの消去後の処理 ---------- ▼ */

void BLK_clear_row() {
	int i, j;
	int leave_row[20] = { 0 };   /* 消去しないブロックの保存先 */
	int plus_row = 0;            /* 添字の数を詰める */

	if (BLK_clear_speed < 2) {                 /* ブロックの消去中の待機時間 */
		for (i = 0; i<BD_H - 3; i++) {
			if (BLK_clear_mark[i] == 0) {      /* もし消去するブロックがあった場合 */
				for (j = 3; j<BD_W - 3; j++) {
					BD_back[i][j] = 0;         /* そのブロックのデータを消去する */
				}
			}
		}
		BLK_clear_speed++;
	}
	else
	{
		for (i = BD_H - 4; i >= 0; i--) {
			if (BLK_clear_mark[i] != 0) { /* もし消去するブロックがなかった場合 */
				leave_row[plus_row] = i;
				plus_row++;               /* ブロックの行を詰める */
			}
		}

		plus_row = 0;
		for (i = BD_H - 4; i >= 0; i--) {
			for (j = 3; j<BD_W - 3; j++) {
				BD_back[i][j] = BD_back[leave_row[plus_row]][j];
			}
			plus_row++;
		}

		BLK_clear_flag = 0;  /* ブロックの消去すべき列の判定を初期化 */
		BLK_clear_speed = 0; /* ブロックの消去中の待機時間を初期化 */
		BD_init_2();         /* 現在座標と変数の初期化 */
	}
}


/* ▼ ---------- ブロックの消去する列を探す ---------- ▼ */

void BLK_clear_search() {
	int i, j;

	for (i = 0; i<BD_H - 3; i++) {
		BLK_clear_mark[i] = 0;     /* 0 = 消去すべき列 1 = 消去すべき列ではない */
	}

	for (i = 0; i<BD_H - 3; i++) {
		for (j = 3; j<BD_W - 3; j++) {
			if (BD_back[i][j] == 0) {  /* もし空白のデータが存在する場合 */
				BLK_clear_mark[i] = 1; /* ブロックの消去すべき列ではない */
				break;
			}
		}
	}

	for (i = 0; i<BD_H - 3; i++) {
		if (BLK_clear_mark[i] == 0) { /* もし空白のデータが存在する場合 */
			BLK_clear_flag = 1;       /* ブロックの消去すべき列ではない  */
			break;
		}
	}
}


/* ▼ ---------- ブロックの操作 ---------- ▼ */

void BLK_control() {
	int key = 0;

	if (_kbhit()) { /* _kbhit関数が何かキーが押された場合に0以外の値を返す */

		key = _getch(); /* getch関数がバッファ内に残されたキー情報を取り出す */
		if (key == 0 || key == 224)key = _getch();

		switch (key) {
		case 0x4b:                   /* 左矢印キーの入力があった場合 */
			BLK_hit_left();          /* ブロックの左側の当り判定を確認する */
			if (BLK_hit_flag == 0) { /* もし左側に当り判定がなければx座標+1 */
				BLK_x--;
			}
			break;

		case 0x4d:                   /* 右矢印キーの入力があった場合 */
			BLK_hit_right();         /* ブロック右側の当り判定を確認する */
			if (BLK_hit_flag == 0) { /* もし右側に当り判定がなければx座標+1 */
				BLK_x++;
			}
			break;

		case 0x50:                      /* 下矢印キーの入力があった場合 */
			BLK_hit_down();             /* ブロックの下側の当り判定を確認する */
			while (BLK_hit_flag == 0) { /* もし下側に当り判定がなければy座標+1を繰り返す */
				BLK_y++;
				BLK_hit_down();         /* ブロックの下側の当り判定を確認する */
			}
			break;

		case 0x48:     /* 上矢印キーの入力があった場合 */
			BLK_CW();  /* ブロックを右回転させる */
			break;

		case 'z':      /* zキーの入力があった場合 */
			BLK_CCW(); /* ブロックを左回転させる */
			break;

		default:       /* それ以外のキー入力があった場合 */
			break;     /* 何もしない */
		}

	}
}


/* ▼ ---------- ブロックの左側の当り判定 ---------- ▼ */

void BLK_hit_left() {
	int x, y;

	BLK_hit_flag = 0; /* ブロックの当り判定を初期化 */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			if (BLK[y][x] != 0) {                               /* もし空白でない場合 */
				if (BD_back[BLK_y + y][BLK_x + (x - 1)] != 0) { /* もしブロックの移動先が空白でない場合 */
					BLK_hit_flag = 1;                           /* ブロックの当り判定の条件を満たす */
				}
			}
		}
	}
}


/* ▼ ---------- ブロックの右側の当り判定 ---------- ▼ */

void BLK_hit_right() {
	int x, y;

	BLK_hit_flag = 0; /* ブロックの当り判定を初期化 */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			if (BLK[y][x] != 0) {                               /* もし空白でない場合 */
				if (BD_back[BLK_y + y][BLK_x + (x + 1)] != 0) { /* もしブロックの移動先が空白でない場合 */
					BLK_hit_flag = 1;                           /* ブロックの当り判定の条件を満たす */
				}
			}
		}
	}
}


/* ▼ ---------- ブロックの下側の当り判定 ---------- ▼ */

void BLK_hit_down() {
	int x, y;

	BLK_hit_flag = 0; /* ブロックの当り判定を初期化 */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			if (BLK[y][x] != 0) {                               /* もし空白でない場合 */
				if (BD_back[BLK_y + (y + 1)][BLK_x + x] != 0) { /* もしブロックの移動先が空白でない場合 */
					BLK_hit_flag = 1;                           /* ブロックの当り判定の条件を満たす */
				}
			}
		}
	}
}


/* ▼ ---------- ブロックの出現位置の当り判定 ---------- ▼ */

void BLK_hit_up() {
	int x, y;

	BLK_hit_flag = 0; /* ブロックの当り判定を初期化 */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			if (BLK[y][x] != 0) {                         /* もし空白でない場合 */
				if (BD_back[BLK_y + y][BLK_x + x] != 0) { /* もしブロックの出現位置が空白でない場合 */
					BLK_hit_flag = 1;                     /* ブロックの当り判定の条件を満たす */
				}
			}
		}
	}
}


/* ▼ ---------- ブロックの回転後の当り判定 ---------- ▼ */

void BLK_hit_turn() {
	int x, y;

	BLK_hit_flag = 0; /* ブロックの当り判定を初期化 */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			if (BLK_turn[y][x] != 0) {                    /* もしブロックまたは壁のデータが存在する場合 */
				if (BD_back[BLK_y + y][BLK_x + x] != 0) { /* もし回転先に壁の当り判定があった場合 */
					BLK_hit_flag = 1;                     /* 当り判定の条件を満たす */
				}
			}
		}
	}
}


/* ▼ ---------- ブロックの右回転 ---------- ▼ */

void BLK_CW() {
	int x, y;

	BLK_turn_flag++; /* ブロックの回転状態 */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			BLK_turn[y][x] =        /* 回転後のブロック表示を作成する */
				BLK_type[(BLK_rand_no * BLK_H) + y][(BLK_turn_flag % 4 * BLK_W) + x];
		}
	}

	BLK_hit_turn(); /* ブロック回転後の当り判定処理 */

	if (BLK_hit_flag == 0) {          /* もし壁の当り判定がなければ */
		for (y = 0; y<BLK_H; y++) {         /* ブロックの縦配列を調べる */
			for (x = 0; x<BLK_W; x++) {     /* ブロックの横配列を調べる */
				BLK[y][x] = BLK_turn[y][x]; /* 回転後のブロック表示を反映させる */
			}
		}
	}
	else
	{
		BLK_turn_flag--; /* ブロックの回転状態 */
	}
}


/* ▼ ---------- ブロックの左回転 ---------- ▼ */

void BLK_CCW() {
	int x, y;

	BLK_turn_flag += 3; /* ブロックの回転状態を変化させる */

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			BLK_turn[y][x] =
				BLK_type[(BLK_rand_no * BLK_H) + y][(BLK_turn_flag % 4 * BLK_W) + x];
		}
	}

	BLK_hit_turn(); /* ブロックの回転後の当り判定を確認する */

	if (BLK_hit_flag == 0) {                /* もし当り判定がなかった場合 */
		for (y = 0; y<BLK_H; y++) {
			for (x = 0; x<BLK_W; x++) {
				BLK[y][x] = BLK_turn[y][x]; /* 回転状態をブロックの表示に反映させる */
			}
		}
	}
	else
	{
		BLK_turn_flag -= 3; /* 当り判定があった場合は回転状態を戻す */
	}
}


/* ▼ ---------- ブロックの急落下 ---------- ▼ */

void BLK_fall() {
	if (BLK_respawn_flag == 0) { /* もしブロックの生成をしない場合 */
		BLK_y++;                 /* y座標+1 */
	}
}


/* ▼ ---------- 落下後のブロックの固定 ---------- ▼ */

void BLK_fix() {

	BLK_hit_down(); /* ブロックの下側の当り判定をする */

	if (BLK_hit_flag != 0) {       /* もし当り判定があった場合 */
		BLK_save();                /* 落下後のブロックをゲーム画面に加える */
		BLK_clear_search();        /* ブロックを消去すべき列を探す */
		if (BLK_clear_flag == 0) { /* もしブロックの消去すべき列が存在しない場合 */
			BD_init_2();           /* 次のブロックの生成する準備をする */
		}
	}
}


/* ▼ ---------- ブロックの生成 ---------- ▼ */

void BLK_respawn() {
	int x, y;

	if (BLK_respawn_flag == 1) {        /* もしブロックの生成をする場合 */
		BLK_rand_no = (rand() % 6);     /* rand関数でブロックをランダムに選択する為の乱数を格納 */
		for (y = 0; y<BLK_H; y++) {
			for (x = 0; x<BLK_W; x++) {
				BLK[y][x] =
					BLK_type[(BLK_H * BLK_rand_no) + y][x]; /* ブロックの回転状態(y)はそのままで形(x)を変える */
			}
		}
		BLK_respawn_flag = 0; /* TrueからFalseに戻す */
	}
}


/* ▼ ---------- ブロックの表示の反映 ---------- ▼ */

void BLK_save() {
	int x, y;

	for (y = 0; y<BLK_H; y++) {
		for (x = 0; x<BLK_W; x++) {
			BD_back[BLK_y + y][BLK_x + x] += BLK[y][x]; /* ブロックの表示をゲーム画面に加える */
		}
	}
}


/* ▼ ---------- ブロックの落下速度調整 ---------- ▼ */

void BLK_speed() {
	int x, y;
	for (y = 0; y<9000; y++) {     /* 無駄なfor文の二重ループによりブロックの待機時間を発生させる */
		for (x = 0; x<9000; x++) {
		}
	}
}


/* ▼ ---------- ゲームオーバー ---------- ▼ */

void GAME_OVER() {
	BLK_hit_up(); /* ブロックの出現座標の当り判定をする */

	if (BLK_hit_flag != 0) { /* もしブロックの出現位置に既にブロックが存在する場合 */
		GAME_OVER_flag = 1;  /* ゲームオーバーの条件を満たす */
	}
}