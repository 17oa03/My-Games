package jtest01;

public class Program6 {
	public static void main(String[] args) {

		Seisu[] inst = new Seisu[3];
		inst[0] = new Seisu(5);
		inst[1] = new Seisu(6);
		inst[2] = new Seisu(7);

		inst[1].plus(3); // ①
		inst[0].minus(2); // ②
		inst[2].plus(1); // ③
		inst[0].plus(inst[2].getData1()); // ④
		inst[1].minus(Seisu.getData2()); // ⑤

		System.out.println("値 1 = " + inst[0].getData1());
		System.out.println("値 2 = " + inst[1].getData1());
		System.out.println("値 3 = " + inst[2].getData1());
		System.out.println("値 4 = " + Seisu.getData2()); // ⑥
	}
}

/*
【実行結果】
値 1 = 11
値 2 = -1
値 3 = 8
値 4 = 0
*/

/*
【解説】
出力前の「inst」のイメージ、

inst = { 5, 6, 7 };

コメント①より、
inst = { 5, 9(6 + 3), 7 };

コメント②より、
inst = { 3(5 - 2), 9, 7 };

コメント③より、
inst = { 3, 9, 8(7 + 1) };

コメント④より、
inst = { 11(3 + 8), 9, 8 };

コメント⑤より、
inst = { 11, -19(9 - 28), 8 };

コメント⑥は、
全要素の合計値なので「0(11 + -19 + 8)」となる。
*/