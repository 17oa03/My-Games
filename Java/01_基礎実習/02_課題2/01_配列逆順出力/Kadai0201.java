/*
【概要】
標準入力より整数を5個入力し、
入力順とは逆に標準出力に出力する。
 */

// 【プログラム】
package jkadai02;

import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;
import java.util.Scanner;

public class Kadai0201 {
	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		List<Integer> intAry = new ArrayList<>(); // コレクションの宣言

		for (int i = 0; i < 5; i++) { // 入力ループ
			System.out.print("整数 ==> ");
			intAry.add(scanner.nextInt()); // 入力
		}

		System.out.println("---逆順出力---");

		for (ListIterator<Integer> it = intAry.listIterator(intAry.size()); // イテレータの取得
			it.hasPrevious();) { // イテレータを前に戻せるならループ
			Integer p = it.previous(); // イテレータを前に戻す
			System.out.printf("%9d\n", p); // 出力
		}

		/* C like ver
		Scanner scanner = new Scanner(System.in);

		int[] intAry = new int[5]; // 配列の宣言

		for (int i = 0; i < intAry.length; i++) {
			System.out.print("整数 ==> ");
			intAry[i] = scanner.nextInt();
		}

		System.out.println("---逆順出力---");

		for (int i = intAry.length - 1; i >= 0; i-- )
			System.out.printf("%9d\n", intAry[i]);
		*/
	}
}

/*
【実行結果】
整数 ==> 34
整数 ==> -5
整数 ==> 123
整数 ==> 0
整数 ==> -21
---逆順出力---
      -21
        0
      123
       -5
       34
*/