/*
THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH

　　　　　　　　　   数当てゲーム

THTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH
*/

#include <stdio.h>
#include <stdlib.h> /* rand関数, srand関数 */
#include <time.h>   /* time関数 */

int main(void) {

	int i;     /* ゲームの回数を数える為の変数 */
	int x, y;  /* for文の二重ループで待機時間を作る為の変数 */
	int kotae; /* ゲームの答えの数を入れる為の変数 */
	int seisu; /* ユーザーがキー入力した数を入れる為の変数 */

	printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
	printf("\n　やあ （´・ω・｀)\n");
	printf("　ようこそ、バーボンハウスへ。\n");
	printf("　このテキーラはサービスだから、まず飲んで落ち着いて欲しい。\n\n");
	printf("　うん、「クソゲー」なんだ。済まない。\n");
	printf("　仏の顔もって言うしね、謝って許してもらおうとも思っていない。\n\n");
	printf("　でも、このソースコードを見たとき、君は、きっと言葉では言い表せない\n");
	printf("　「ときめき」みたいなものを感じてくれたと思う。\n");
	printf("　殺伐とした世の中で、そういう気持ちを忘れないで欲しい\n");
	printf("　そう思って、このソースコードを書いたんだ。\n\n");
	printf("　じゃあ、「数当てゲーム」をやろうか。\n\n");
	printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
	printf("\n (´･ω･) ＜ [ENTER]キーを押すと次のページを表示するよ。");

	getchar();     /* プレイヤーの入力待ち */
	system("cls"); /* 画面のクリア */

	printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
	printf("\n　さて （´・ω・｀)\n\n");
	printf("　「数当てゲーム」のルールを説明するよ。\n\n");
	printf("　これから私が1～100の数を1つ選ぶ。\n");
	printf("　その数を10回以内に当てることができれば、君の勝ちだ。\n\n");
	printf("　間違えたらヒントをあげるから安心してくれ。\n");
	printf("　じゃあ、やってみようか。\n");
	printf("　\n\n\n\n\n");
	printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
	printf("\n (´･ω･) ＜ [ENTER]キーを押すとゲーム開始だよ。");

	getchar();
	system("cls");

	srand((unsigned)time(NULL)); /* 実行時の時間を元にして、発生させる乱数の元を決める */
	kotae = rand() % 100 + 1;    /* 乱数を100で割った数を正解の数にして変数に代入する */

	for (i = 1; i <= 10; i++) {
		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
		printf("\n　1から100までの整数を入力してくれ。（´・ω・｀)\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
		printf("\n (´･ω･) ＜ %d回目の入力 ==> ", i);

		if (scanf("%d", &seisu) != 1) /* もしscanfの戻り値がTuruでない場合(文字列等の入力があった場合) */
		scanf("%*s");                 /* 「*」で「%s」(文字列)の読捨てをさせる */

		system("cls");

		while (seisu < 1 || seisu > 100) /* 1から100以外の数の入力があった場合の対処 */
		{
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
			printf("\n　その数は、1から100までの整数じゃないよ。（´・ω・｀)\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
			printf("\n (´･ω･) ＜ %d回目の入力 ==> ", i);

			if (scanf("%d", &seisu) != 1)
				scanf("%*s");

			system("cls");
		}

		if (kotae == seisu) break; /* 答えの数と入力された数が合致した場合 */

		if (kotae < seisu) /* 答えよりも入力された数が大きい場合 */
		{
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
			printf("\n　入力した数は、大きすぎるみたいだね。（´・ω・｀)\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
			printf("\n (´･ω･) ＜ ぐぬぬ...");

			for (y = 0; y<20000; y++) {
				for (x = 0; x<30000; x++) {

				}
			}
			system("cls");
		}

		if (kotae > seisu) /* 答えよりも入力された数が小さい場合 */
		{
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
			printf("\n　入力した数は、小さすぎるみたいだね。（´・ω・｀)\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
			printf("\n (´･ω･) ＜ ぐぬぬ...");

			for (y = 0; y<20000; y++) {
				for (x = 0; x<20000; x++) {

				}
			}
			system("cls");
		}
		while (getchar() != '\n'); /* 入力バッファの読み捨て */
	}

	if (i < 10)
	{
		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
		printf("＊　 　　　+　　 　　 巛 ヽ\n");
		printf("　　　　　　　　　　　 〒　!　　　+　　　　。　　　　　+　　　　。　　　　　＊　 　　　。\n");
		printf("　 　　　　+　　　　。  |  |\n");
		printf("　　　＊　 　　　+　　 /　/　　　イヤッッホォォォオオォオウ！正解は、「%d」だ！\n", seisu);
		printf("　　　　　　  ∧＿∧  /　/\n");
		printf("　　　　　　（´∀｀ /　/　+　　　　。　　　　　+　　　　。　　　＊　 　　　。\n");
		printf("　　　　　　,-　　　　 ｆ\n");
		printf("　　　　　 / ｭﾍ　　　  | ＊　 　　　+　　　　。　　　　　+　　　。　+\n");
		printf("　　　　 〈＿｝）　　　|\n");
		printf("　　　　　　　/　　　　! +　　　　。　　　　　+　　　　+　　　　　＊\n");
		printf("　　　　　　./　　,ﾍ　 |\n");
		printf("　ｶﾞﾀﾝ　||| j　　/  |　| |||\n");
		printf("――――――――――――\n");
		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");

		while (getchar() != '\n');

	}
	else
	{

		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n\n");
		printf("\n　答えは「%d」だったんだ、ごめんね。（´・ω・｀)\n\n\n\n\n\n\n\n\n\n\n\n\n", kotae);
		printf("\nTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTHTH\n");
		printf("\n (´;ω;｀)ﾌﾞﾜｯ < ゲームオーバーだよ。\n\n");
	}

	getchar();

	return 0;
}