// 【プログラム】
package com.github.java.test;

public class CommandLine3 {
	public static void main(String[] args) {

		for (int i = 0; i < args.length; i++) { // args.length はコマンドライン引数の数になる
			System.out.println(args[i]); // 配列 args の出力
		}
	}
}

/*
【実行結果】
abc
12345
あいう
※「Eclipse」の「実行」→「実行環境」を開いて「(x)=引数」タブから引数(abc 12345 あいう)を与えて確認しました。
*/