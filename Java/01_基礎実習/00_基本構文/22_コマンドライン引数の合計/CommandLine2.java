// 【プログラム】
package com.github.java.test;

public class CommandLine2 {

	public static void main(String[] args) {

		if (args.length == 2) { // 引数の数が 2 の場合
			int seisu1 = Integer.parseInt(args[0]); // Integer クラスの parseInt メソッドが文字列を整数に変換
			int seisu2 = Integer.parseInt(args[1]);
			int kotae = seisu1 + seisu2; // 合計の計算
			System.out.println("答えは " + kotae + " です。");
		} else { // それ以外の場合
			System.out.println("コマンドライン引数エラー");
		}

	}
}

/*
【実行結果1】
答えは 300 です。
※「Eclipse」の「実行」→「実行環境」を開いて「(x)=引数」タブから引数(100 200)を与えて確認しました。
【実行結果2】
コマンドライン引数エラー
※「Eclipse」の「実行」→「実行環境」を開いて「(x)=引数」タブから引数(10 20 30 40 50)を与えて確認しました。
*/