package jkadai05;

public class Kadai0504 {

	public static void main(String[] args) { // (1)
		Division division = new Division(args); // (3), (5)①

		try {
			division.calculate(); // (3), (5)②
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
500 / 100 = 5
※コマンドライン引数「500, 100」

【実行結果2】
コマンドライン引数は、整数を入力してください。
※コマンドライン引数「xyz, 100」

【実行結果3】
コマンドライン引数は、整数を入力してください。
※コマンドライン引数「500, xyz」

【実行結果4】
コマンドライン引数は、2個入力してください。
※コマンドライン引数「500」

【実行結果5】
コマンドライン引数は、2個入力してください。
※コマンドライン引数なし

【実行結果6】
コマンドライン引数は、2個入力してください。
※コマンドライン引数「500, 0」
*/