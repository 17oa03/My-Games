// 【プログラム】
package com.github.java.test;

import java.util.Arrays; // import構文( import パッケージ名.クラス名; )

public class Sort1 {
	public static void main(String[] args) {

		int[] data = { 40, 20, 10, 50, 30 };

		System.out.print("ソート前 : ");
		for (int d : data) { // 拡張for文(for-each文)、for (データ型 変数名: コレクション) { 処理 }
			System.out.print(d + " ");
		}
		System.out.println(); // 改行

		for (int i = 0; i < data.length - 1; i++) { // 降順ソート処理ループ
			for (int j = i + 1; j < data.length; j++) {
				if (data[i] < data[j]) {
					int temp = data[i]; // データ交換
					data[i] = data[j];
					data[j] = temp;
				}
			}
		}
		System.out.print("降順ソート後 : ");
		for (int d : data) { // data 配列の要素に含まれる値を 1 つずつ取り出し変数 d に代入
			System.out.print(d + " ");
		}
		System.out.println(); // 改行

		Arrays.sort(data); // Array クラスの sort メソッドが data 配列を昇順にソート
		System.out.print("Arrays クラスの sort メソッドでソート : ");
		for (int d : data) { // data 配列の要素に含まれる値を 1 つずつ取り出し変数 d に代入
			System.out.print(d + " ");
		}
		System.out.println(); // 改行
	}

}

/*
【実行結果】
ソート前 : 40 20 10 50 30
降順ソート後 : 50 40 30 20 10
Arrays クラスの sort メソッドでソート : 10 20 30 40 50
*/