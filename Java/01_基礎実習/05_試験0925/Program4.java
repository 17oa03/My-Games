public class Program4 {
	public static void main(String[] args) {

		int seisu1 = Integer.parseInt(args[0]);
		int seisu2 = Integer.parseInt(args[1]);
		int seisu3 = Integer.parseInt(args[2]);
		int kotae = seisu1 + seisu2 * seisu3;

		System.out.println("答え = " + kotae);
		System.out.println("要素数 = " + args.length);
	}
}

/*
【実行結果】
答え = 610
要素数 = 3
*/

/*
【解説】
コマンドライン引数が、
「10, 20, 30」だった場合の「args」のイメージ、

args = { "10", "20", "30" };

args[0],args[1],args[2]を「Integer.parseInt()」で整数に変換後、
計算結果を「kotae」に代入し、
それを出力している。

「args.length」は、
配列の要素数を取得しているので「3」と出力される。
*/