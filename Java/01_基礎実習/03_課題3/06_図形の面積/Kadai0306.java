/*
【概要】
コマンドライン引数より1個から3個の実数を入力し、
引数の数により、正方形、長方形、台形の面積を計算し標準出力に出力する。
計算と出力は図形の面積を計算出力クラスを定義し、
そのメソッドを呼び出す。
 */

// 【プログラム】
package jkadai03;

public class Kadai0306 {
	public static void main(String[] args) {
		int n = args.length;

		if (n == 0 || 4 <= n) // ①(コマンドライン引数エラー判定)
			System.out.println("コマンドライン引数エラー");
		else {
			Figure figure = new Figure(); // ②(計算出力クラスのインスタンスを生成)

			if (n == 1) // ③(コマンドライン引数が1個の場合の処理)
				figure.calculate(Double.parseDouble(args[0]));
			else if (n == 2) // ④(コマンドライン引数が2個の場合の処理)
				figure.calculate(Double.parseDouble(args[0]),
								 Double.parseDouble(args[1]));
			else if (n == 3) // ⑤(コマンドライン引数が3個の場合の処理)
				figure.calculate(Double.parseDouble(args[0]),
						 		 Double.parseDouble(args[1]),
						 		 Double.parseDouble(args[2]));
		}
	}
}

/*
【実行結果1】
正方形 : 12.3 * 12.3 = 151.29
※コマンドライン引数 = 12.3

【実行結果2】
長方形 : 12.3 * 45.6 = 560.88
※コマンドライン引数 = 12.3 45.6

【実行結果3】
台形 : (1.2 + 3.4) * 5.6 / 2.0 = 12.88
※コマンドライン引数 = 1.2 3.4 5.6

【実行結果4】
コマンドライン引数エラー
※コマンドライン引数なし

【実行結果5】
コマンドライン引数エラー
※コマンドライン引数 = 10.1 20.2 30.3 40.4
*/