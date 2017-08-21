package com.github.jkadai01;

import java.util.Random;

public class Kadai0105 {
	public static void main(String[] args) {

		Random random = new Random();

		int n = random.nextInt(10) + 1; // 乱数(0 ～ (引数 - 1)) + 1 の値を変数 n に代入
		if (n < 5) { System.out.println("大吉"); }
		else if (n > 5) { System.out.println("中吉"); }
		else { System.out.println("小吉"); }
	}
}

/*
【実行結果10回】
 1回目 : 小吉
 2回目 : 大吉
 3回目 : 中吉
 4回目 : 大吉
 5回目 : 中吉
 6回目 : 中吉
 7回目 : 中吉
 8回目 : 大吉
 9回目 : 中吉
10回目 : 大吉

【確率】
大吉 : 4割
中吉 : 5割
小吉 : 1割
*/
