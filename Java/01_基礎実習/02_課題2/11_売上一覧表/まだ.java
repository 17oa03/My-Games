package com.github.jkadai02;

public class Kadai0211 {
	public static void main(String[] args) {

		String[] data = {
				"68, ノート　, 100, 30",
				"85, コンパス, 230, 11",
				"21, 鉛筆　　, 30, 120",
				"40, 消しゴム, 50, 22",
				"37, 定規　　, 150, 18",
		};

		StringBuilder sb = new StringBuilder(); // メモリ領域(バッファ)の確保

		sort(data, input(args));
	}

	public static int input(String[] args) {

		int n = 0; // 戻り値

		if (1 < args.length) {
			System.out.println("コマンドライン引数を 1 個入力してください。");
			System.exit(1); // JVNの異常終了
		}
		else if ("コード".equals(args[1])) { n = 0; }
		else if ("数量".equals(args[1])) { n = 3; }
		else if ("金額".equals(args[1])) { n = 4; }
		else {
			System.out.println("コマンドライン引数に、次のいずれかを入力してください。");
			System.out.println("コード,数量,金額");
			System.exit(1); // JVNの異常終了
		}

		return n;
	}

	public static void sort(String[] data, int n) {

	String[] strAry = null;

	for (int i = 0; i < data.length; i++)
		strAry = data[i].split(",");
		for (String j : strAry) {

		}
	}



}
