#include <stdio.h>
#include <stdlib.h> /* rand関数, srand関数 */
#include <time.h>   /* time関数 */

int main(void) {
	int i;     /* ゲームの回数を数える変数 */
	int kotae; /* ゲームの答えの数を入れる変数 */
	int seisu; /* ユーザーが入力した数を入れる変数 */

	printf("やあ （´・ω・｀)\n")
	printf("ようこそ、バーボンハウスへ。\n")
	printf("このテキーラはサービスだから、まず飲んで落ち着いて欲しい。\n\n")
	printf("うん、「クソゲー」なんだ。済まない。\n")
	printf("仏の顔もって言うしね、謝って許してもらおうとも思っていない。\n\n")
	printf("でも、このソースコードを見たとき、君は、きっと言葉では言い表せない\n")
	printf("「ときめき」みたいなものを感じてくれたと思う。\n")
	printf("殺伐とした世の中で、そういう気持ちを忘れないで欲しい\n")
	printf("そう思って、このソースコードを書いたんだ。\n\n")
	printf("じゃあ、「数当てゲーム」をやろうか。\n")

	getchar();
	printf("\033[2J");

	srand((unsigned)time(NULL)); /* 実行時の時間を元にして、発生させる乱数の元を決める */
	kotae = rand() % 100 + 1;    /* 乱数を100で割った数を正解の数にして変数に代入する */

	for (i = 1, 10 < i, i++) {

		printf("1から100までの整数を入力してくれ。（´・ω・｀)\n")
		scanf("%d" &seisu);

		while (seisu < 1 || seisu > 100) {

			printf("1から100までの整数だ、わかっているんだろう？（´・ω・｀)\n")
			scanf("%d" &seisu);

		}

		if (kotae = seisu) break;
		if (kotae < seisu) printf("大きすぎるよ。（´・ω・｀)");
		if (kotae > seisu) printf("小さすぎるよ。（´・ω・｀)");

	}
	if (i <= 10) printf("%d回目で当たり\n", i);

	return 0;
}