// 【プログラム】
package com.github.java.test;

public class Suugaku {
	public static void main(String[] args) {

		System.out.println("円周率 = " + Math.PI); // 「Math」クラスの double 型「PI(円周率)」定数

		double d = 2.0;
		System.out.println(d + "平方根 = " + Math.sqrt(d)); // 「sqrt(square rootの略)」メソッドは引数の値を平方根で返す

		int a = 10;
		int b = 20;
		System.out.println(a + " と " + b + " の大きい方 = " + Math.max(a, b)); // 「max」メソッドは複数ある引数の最大値を返す
		System.out.println(a + " と " + b + " の小さい方 = " + Math.min(a, b)); // 「min」メソッドは複数ある引数の最小値を返す

		double kisu = 2.0;
		double sisu = 3.0d; // int 範囲を超える場合は double であることを明示（最後に「D」or「d」を付ける）
		System.out.println(kisu + " の " + sisu + " 乗 = " + Math.pow(kisu, sisu)); // 「pow(power)」メソッドは引数1(kisu)に引数2(sisu)回分を掛け合わせる

		double ransu = Math.random(); // 「random」メソッドは 0.0 ～ 1.0 未満の範囲で double 型の乱数を取得できる
		System.out.println("0.0 から 1.0 未満の乱数 = " + ransu);
		System.out.println("0 から 9 までの乱数 = " + (int)(ransu * 10)); // double 型から int 型にキャスト、小数点以下は切り捨てられる

	}
}

/*
円周率 = 3.141592653589793
2.0平方根 = 1.4142135623730951
10 と 20 の大きい方 = 20
10 と 20 の小さい方 = 10
2.0 の 3.0 乗 = 8.0
0.0 から 1.0 未満の乱数 = 0.5342533961368756
0 から 9 までの乱数 = 5
*/