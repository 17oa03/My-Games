// 【プログラム】
package com.github.java.test;

public class Search {
	public static void main(String[] args) {

		int[] code = { 21, 68, 67, 40, 85 }; // int 型配列
		String[] name = // String クラス型配列
			{ "鉛筆", "ノート", "定規", "消しゴム", "コンパス" };

		int i; // 添字 カウンタ変数
		boolean hit_flag; // 検索フラグ true : 存在する false : 存在しない
		int cd; // 探す code

		cd = 67; // 検索する商品コード
		hit_flag = false;
		for (i = 0; i < code.length && hit_flag == false; i++) { // length メソッドが配列の要素数を取得
			if (cd == code[i]) { // 商品コードが一致した場合
				hit_flag = true;
			}
		}
		if (hit_flag == true) {
			System.out.println(code[i - 1] + ":" + name[i - 1]); // for 文の最後の再初期化式でインクリメントされたカウンタ変数をデクリメントして添字に合わせる
		}

		cd = 40; // 検索する商品コード
		for (i = 0; i < code.length; i++) {
			if (cd == code[i]) { // 商品コードが一致した場合
				break; // break 文が実行されると for 文を終了し次の処理へ移る
			}
		}
		if (i < code.length) { // カウンタ変数が配列の要素数より小さい場合
			System.out.println(code[i] + ":" + name[i]);
		}

	}
}

/*
【実行結果】
67:定規
40:消しゴム
*/