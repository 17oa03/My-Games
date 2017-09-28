package jkadai05;

import java.util.Scanner;

public class Kadai0506 {
	public static void main(String[] args) {
		int n;

		try {
			Scanner scanner = new Scanner(System.in);
			System.out.print("1 から、いくつまで ==> ");
			n = Integer.parseInt(scanner.nextLine()); // (5)①, (5)②
			Calculate calculate = new Calculate(); // (3), (5)③
			System.out.println("1 から " + n + " までの合計は、 " +
				calculate.total(n) + " です。"); // (5)③
		} catch (NumberFormatException e) {
			System.out.println("整数を入力してください。"); // (2)③
		} catch (IllegalArgumentException e) {
			System.out.println(e.getMessage()); // (5)③
		}
	}
}

/*
【実行結果1】
1 から、いくつまで ==> 100
1 から 100 までの合計は、 5050 です。

【実行結果2】
1 から、いくつまで ==> 1
1 から 1 までの合計は、 1 です。

【実行結果3】
1 から、いくつまで ==> 1000
1 から 1000 までの合計は、 500500 です。

【実行結果4】
1 から、いくつまで ==> -789
1 以上の整数を入力してください。

【実行結果5】
1 から、いくつまで ==> 12345
1000 以下の整数を入力してください。

【実行結果6】
1 から、いくつまで ==> 0
1 以上の整数を入力してください。

【実行結果7】
1 から、いくつまで ==> 1001
1000 以下の整数を入力してください。

【実行結果8】
1 から、いくつまで ==> abc
整数を入力してください。
*/