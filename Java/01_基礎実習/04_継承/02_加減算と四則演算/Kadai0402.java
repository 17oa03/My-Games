package jkadai04;

import java.util.Scanner;

public class Kadai0402 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		System.out.println("*** 加減算 ***");
		System.out.print("整数 1 ==> ");
		int input1 = scanner.nextInt(); // ①(整数入力1)

		System.out.print("整数 2 ==> ");
		int input2 = scanner.nextInt(); // ①(整数入力2)

		AddSub addSub = new AddSub(input1, input2); // ②(加減算クラスのインスタンスを生成)

		addSub.addition(); // ③(加算を依頼)
		addSub.subtraction(); // ③(減算を依頼)

		addSub.printAdd(); // ④(加算結果を出力)
		addSub.printSub(); // ④(減算結果を出力)

		System.out.println("\n*** 四則演算 ***");
		System.out.print("整数 1 ==> ");
		input1 = scanner.nextInt(); // ⑤(整数入力1)

		System.out.print("整数 2 ==> ");
		input2 = scanner.nextInt(); // ⑤(整数入力2)

		Arithmetic arithmetic = new Arithmetic(input1, input2); // ⑥(四則演算クラスのインスタンスを生成)

		arithmetic.addition(); // ⑦(加算を依頼)
		arithmetic.subtraction(); // ⑦(減算を依頼)
		arithmetic.multiplication(); // ⑦(乗算を依頼)
		arithmetic.division(); // ⑦(除算を依頼)

		arithmetic.printAdd(); // ⑧(加算結果を出力)
		arithmetic.printSub(); // ⑧(減算結果を出力)
		arithmetic.printMulti(); // ⑧(乗算結果を出力)
		arithmetic.printDiv(); // ⑧(除算結果を出力)
	}
}

/*
【実行結果】
*** 加減算 ***
整数 1 ==> 50
整数 2 ==> 20
50 + 20 = 70
50 - 20 = 30

*** 四則演算 ***
整数 1 ==> 600
整数 2 ==> 300
600 + 300 = 900
600 - 300 = 300
600 * 300 = 180000
600 / 300 = 2
*/