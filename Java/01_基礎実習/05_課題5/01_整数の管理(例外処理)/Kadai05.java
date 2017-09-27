package jkadai05;

public class Kadai05 {
	public static void main(String[] args) { // (3)
		int seisu1;
		int seisu2;

		if (2 == args.length) {
			try {
				seisu1 = Integer.parseInt(args[0]);
				seisu2 = Integer.parseInt(args[1]);
				System.out.println(
						seisu1 + " * " + seisu2 + " = " + (seisu1 * seisu2)); // (1)①
			} catch (NumberFormatException e) {
				System.out.println(
						"コマンドライン引数は、整数を入力してください。"); // (2)
			}
		} else
			System.out.println(
					"コマンドライン引数は、2個入力してください。"); // (1)②
	}
}

/*
【実行結果1】
50 * 60 = 3000
※コマンドライン引数「50, 60」

【実行結果2】
コマンドライン引数は、整数を入力してください。
※コマンドライン引数「abc, 60」

【実行結果3】
コマンドライン引数は、整数を入力してください。
※コマンドライン引数「50, abc」

【実行結果4】
コマンドライン引数は、2個入力してください。
※コマンドライン引数「50」

【実行結果5】
コマンドライン引数は、2個入力してください。
※コマンドライン引数なし

【実行結果6】
コマンドライン引数は、2個入力してください。
※コマンドライン引数「50, 60, 70」
*/