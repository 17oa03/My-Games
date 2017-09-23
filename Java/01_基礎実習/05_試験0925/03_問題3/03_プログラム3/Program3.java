public class Program3 {
	public static void main(String[] args) {

		int[][] data = new int[3][];
		data[0] = new int[5];
		data[1] = new int[] {1, 2};
		int[] work = {3, 4, 5};
		data[2] = work;

		System.out.println("要素数 1 = " + data.length);
		System.out.println("要素数 2 = " + data[1].length);
		System.out.println("要素 1 = " + data[0][2]);
		System.out.println("要素 2 = " + data[2][2]);
	}
}

/*
【実行結果】
要素数 1 = 3
要素数 2 = 2
要素 1 = 0
要素 2 = 5
*/

/*
【解説】
出力前の「data」のイメージ、

data = {
       { 0, 0, 0, 0, 0 }
       { 1, 2 }
       { 3, 4, 5 }
};

「data.length」は、
行の要素数を取得しているので「3」と出力される。

「data[1].length」は、
2行目の列の要素数を取得しているので「2」と出力される。

「data[0][2]」は、
1行3列目の要素を取得しているので「0」と出力される。

「data[2][2]」は、
3行目3列目の要素を取得しているので「5」と出力される。

*/