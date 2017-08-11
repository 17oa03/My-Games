// 【プログラム】
package com.github.java.test;

public class Array3 {
	public static void main(String[] args) {

		int[] data1 = { 10, 20, 30, 40, 50 }; // int 型配列 data1 の定義
		int[] data2, data3, data4, data5;  // int 型配列 data2 の定義

		data2 = data1; // 配列 data1 のアドレスを配列 data2 に代入
		data3 = new int[data1.length]; // 配列 data1 と同じ要素数を配列 data3 で確保
		for (int i = 0; i < data1.length; i++) { // 代入ループ
			data3[i] = data1[i]; // 配列 data1 のデータを配列 data3 に代入
		}
		data4 = data1.clone(); // clone メソッドでオブジェクトを複製(異なるアドレス)して代入
		data5 = new int[data1.length]; // 配列 data1 と同じ要素数を配列 data5 で確保
		System.arraycopy(data1, 0, data5, 0, data1.length); // arraycopy メソッドで配列を複製

		data1[0] = 60; // data1 配列のデータを変更
		for (int d : data1) { // 出力ループ
			System.out.print(d + " "); // 配列 data1 の出力
		}
		System.out.println(); // 改行
		for (int d : data2) { // 出力ループ
			System.out.print(d + " "); // 配列 data2 は配列 data1 のアドレスを代入しているので変わる
		}
		System.out.println(); // 改行
		for (int d : data3) { // 出力ループ
			System.out.print(d + " "); //  配列 data3 は配列 data1 の要素のデータを代入しているので変わらない
		}
		System.out.println(); // 改行
		for (int d : data4) { // 出力ループ
			System.out.print(d + " "); // 配列 data4 は配列 data1 と異なるアドレスを持つので変わらない
		}
		System.out.println(); // 改行
		for (int d : data5) { // 出力ループ
			System.out.print(d + " "); // 配列 data5 は配列 data1 を複製しているので変わらない
		}
		System.out.println(); // 改行
	}
}

/*
【実行結果】
60 20 30 40 50
60 20 30 40 50
10 20 30 40 50
10 20 30 40 50
10 20 30 40 50
 */

/*
【考察】
arraycopy()の引数は、左から
・コピー元の配列
・コピー元の配列のコピー開始位置
・コピー先の配列
・コピー先の配列の開始位置
・コピーする要素の数
*/