// 【プログラム】
package com.github.java.test;

import java.util.Random; // import構文( import パッケージ名.クラス名; )

public class Ransu2 {
	public static void main(String[] args) {

		Random random = new Random(); // 「Random」クラスからインスタンスを生成し、変数 random に代入

		for (int i = 0; i < 5; i++) {
			int seisu = random.nextInt(10); // 「nextInt」メソッドが 0 ～ 引数 - 1 の値を「seisu」変数に代入
			System.out.println(seisu);
		}

	}

}

/*
【実行結果】
3
6
8
3
9
*/