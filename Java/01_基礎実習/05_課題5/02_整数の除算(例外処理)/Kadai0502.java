package jkadai05;

public class Kadai0502 {
	public static void main(String[] args) { // (3)
		int seisu1;
		int seisu2;

		try {
			seisu1 = Integer.parseInt(args[0]);
			seisu2 = Integer.parseInt(args[1]);
			System.out.println(
					seisu1 + " / " + seisu2 + " = " + (seisu1 / seisu2)); // (1), (4)
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println(
					"コマンドライン引数は、2個入力してください。"); // (2)①
		} catch (NumberFormatException e) {
			System.out.println(
					"コマンドライン引数は、整数を入力してください。"); // (2)②
		} catch (ArithmeticException e) {
			System.out.println(
					"0で割ることは、できません。"); // (2)③
		}
	}
}

/*
【実行結果1】
100 / 20 = 5
※コマンドライン引数「100, 20」

【実行結果2】
コマンドライン引数は、整数を入力してください。
※コマンドライン引数「xyz, 20」

【実行結果3】
コマンドライン引数は、整数を入力してください。
※コマンドライン引数「100, xyz」

【実行結果4】
コマンドライン引数は、2個入力してください。
※コマンドライン引数「100」

【実行結果5】
コマンドライン引数は、2個入力してください。
※コマンドライン引数なし

【実行結果6】
0で割ることは、できません。
※コマンドライン引数「100, 0」
*/