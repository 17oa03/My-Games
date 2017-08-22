// 【プログラム】
package com.github.java.test;

public class CommandLine1 {
	public static void main(String[] args) {

		int count = args.length; // args.length はコマンドライン引数の数になる
		System.out.println("コマンドライン引数の数は "
								  + count + " 個です。"); // 出力
	}
}

/*
【実行結果1】
コマンドライン引数の数は 0 個です。
【実行結果2】
コマンドライン引数の数は 3 個です。
※「Eclipse」の「実行」→「実行環境」を開いて「(x)=引数」タブから引数(abc 12345 あいう)を与えて確認しました。
*/