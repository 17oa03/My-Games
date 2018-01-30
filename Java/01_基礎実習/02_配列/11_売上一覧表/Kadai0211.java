// まだ作成中のソースコードになります。
package com.github.jkadai02;

public class Kadai0211 { // クラスの宣言
	public static void main(String[] args) { // main メソッドの宣言

		String[] data = { // String 配列の初期化
				"68, ノート　, 100, 30",
				"85, コンパス, 230, 11",
				"21, 鉛筆　　, 30, 120",
				"40, 消しゴム, 50, 22",
				"37, 定規　　, 150, 18",
		};

		sort(data, input(args));
	}

	public static int input(String[] args) {

		int n = 0; // 処理を分岐させる為の戻り値

		if (1 < args.length) {
			System.out.println("コマンドライン引数を 1 個入力してください。");
			System.exit(1); // JVMの異常終了
		}
		else if ("コード".equals(args[0])) { n = 0; }
		else if ("数量".equals(args[0])) { n = 3; }
		else if ("金額".equals(args[0])) { n = 4; }
		else {
			System.out.println("コマンドライン引数に、次のいずれかを入力してください。");
			System.out.println("コード,数量,金額");
			System.exit(1); // JVMの異常終了
		}

		return n;
	}

	public static void sort(String[] data, int n) {

		String[] strAry = new String[data.length];
		int[] rank = new int[data.length];
		int[] total = new int[data.length];
		int k = 0;

		for (int i = 0; i < data.length; i++) {
			strAry = data[i].split(",");
			total[i] = Integer.parseInt(strAry[2]) * Integer.parseInt(strAry[3]);
			if (n < 4)
				rank[i] = Integer.parseInt(strAry[n]);
			else
				rank[i] = total[i];
		}

		for (int i : rank) {
			for (int j : rank)
				if (i < j) { k++; }
		rank[i] = k;
		}

		for (int i = 0; i < data.length; i++) {
			strAry = data[rank[i]].split(",");
			for (String j : strAry)
				System.out.printf("%s ", i);
		}
	}
}

