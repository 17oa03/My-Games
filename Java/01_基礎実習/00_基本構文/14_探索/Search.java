// 【プログラム】
package com.github.java.test;

public class Search {
	public static void main(String[] args) {

		int[] code = { 21, 68, 67, 40, 85 }; // int 型配列 code の定義
		String[] name = // String クラス型配列 name の定義
			{ "鉛筆", "ノート", "定規", "消しゴム", "コンパス" };

		int i; // カウンタ変数
		boolean hit_flag; // 検索フラグ(true : 存在する false : 存在しない)
		int cd; // int 型変数 code の定義

		cd = 67; // 検索する商品コードの代入
		hit_flag = false;
		for (i = 0; i < code.length && hit_flag == false; i++) { // length メソッドが配列の要素数を取得する
			if (cd == code[i]) { // 商品コードが一致した場合
				hit_flag = true; // 検索フラグを ON にする
			}
		}
		if (hit_flag == true) { // 検索フラグを ON の場合
			System.out.println(code[i - 1] + ":" + name[i - 1]); // for 文の最後の再初期化式でインクリメントされたカウンタ変数をデクリメントして添字に合わせて出力
		}

		cd = 40; // 検索する商品コードの代入
		for (i = 0; i < code.length; i++) { // 商品探索ループ
			if (cd == code[i]) { // 商品コードが一致した場合
				break; // break 文が実行されると for 文を終了し次の処理へ移る
			}
		}
		if (i < code.length) { // 商品コードが一致した場合(カウンタ変数が配列の要素数より小さい場合)
			System.out.println(code[i] + ":" + name[i]); // 出力
		}
	}
}

/*
【実行結果】
67:定規
40:消しゴム
*/