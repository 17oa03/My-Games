// 【プログラム】
package com.github.java.test;

public class Ransu1 {
	public static void main(String[] args) {

		for (int i = 0; i < 5; i++) { // for文の初期化式で変数の宣言ができる
			int seisu = (int)(Math.random() * 10); // Math クラスの random メソッドで 0.0 ～ 1.0 未満の範囲で double 型の乱数を取得
			System.out.println(seisu); // 出力
		}
	}
}

/*
【実行結果】
6
3
9
1
0
*/