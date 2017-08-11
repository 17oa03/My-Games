// 【プログラム】
package com.github.java.test;

public class Array3 {
	public static void main(String[] args) {

		int[] data1 = { 10, 20, 30, 40, 50 };
		int[] data2, data3, data4, data5;

		data2 = data1; // data1 配列のアドレスを data2 配列に代入
		data3 = new int[data1.length]; // data1 配列と同じ要素数を data3 配列で確保
		for (int i = 0; i < data1.length; i++) {
			data3[i] = data1[i]; // data1 配列のデータを data3 配列に代入
		}
		data4 = data1.clone(); // clone メソッドでオブジェクトを複製(異なるアドレス)して代入
		data5 = new int[data1.length]; // data1 配列と同じ要素数を data5 配列で確保
		System.arraycopy(data1, 0, data5, 0, data1.length); // arraycopy メソッドで配列を複製

		data1[0] = 60; // data1 配列のデータを変更
		for (int d : data1) {
			System.out.print(d + " "); // data1 配列の出力
		}
		System.out.println();
		for (int d : data2) {
			System.out.print(d + " "); // data1 のデータが変わるとアドレスを代入した data2 も変わる
		}
		System.out.println();
		for (int d : data3) {
			System.out.print(d + " "); // data1 の要素のデータを代入した data3 配列は変わらない
		}
		System.out.println();
		for (int d : data4) {
			System.out.print(d + " "); // data4 配列は data1 配列と異なるアドレスを持つので変わらない
		}
		System.out.println();
		for (int d : data5) {
			System.out.print(d + " "); // data5 配列は data1 配列を複製しているので変わらない
		}
		System.out.println();

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