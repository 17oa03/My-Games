/*
【概要】
初期化されている配列の要素を降順に並べ替え、
標準出力に出力する。
*/

// 【プログラム】
package jkadai02;

import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class Kadai0202 {
	public static void main(String[] args) {

		List<Double> doubleAry = Arrays.asList(581.1, 834.0, 253.4, 924.9, 301.7); // 固定リストの初期化

		System.out.println("*** ソート前 ***");
		for (double i : doubleAry)
			System.out.printf("  %.1f", i); // 出力
		System.out.println(); // 改行

		Collections.sort(doubleAry, Comparator.reverseOrder()); // 降順ソート処理

		System.out.println("*** ソート後 ***");
		for (double i : doubleAry)
			System.out.printf("  %.1f", i); // 出力
		System.out.println(); // 改行

		/* C like ver
		double[] doubleAry = {581.1, 834.0, 253.4, 924.9, 301.7};

		System.out.println("*** ソート前 ***");
		for (int i = 0; i < doubleAry.length; i++) // 出力ループ
			System.out.printf("  %.1f", doubleAry[i]); // 出力
		System.out.println(); // 改行

		for (int i = 0; i < doubleAry.length - 1; i++) { // 降順ソート処理ループ
			for (int j = i + 1; j < doubleAry.length; j++) {
				if (doubleAry[i] < doubleAry[j]) {
					double work = doubleAry[i]; // データ交換
					doubleAry[i] = doubleAry[j];
					doubleAry[j] = work;
				}
			}
		}

		System.out.println("*** ソート後 ***");
		for (int i = 0; i < doubleAry.length; i++) // 出力ループ
			System.out.printf("  %.1f", doubleAry[i]); // 出力
		System.out.println(); // 改行
		*/
	}
}

/*
【実行結果】
*** ソート前 ***
  581.1  834.0  253.4  924.9  301.7
*** ソート後 ***
  924.9  834.0  581.1  301.7  253.4
*/
