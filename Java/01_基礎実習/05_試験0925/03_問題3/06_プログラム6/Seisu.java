package jtest01;

public class Seisu {
	private int data1; // 整数
	private static int data2; // 加減算の値の合計

	public Seisu(int data1) { // コンストラクタ
		this.data1 = data1;
	}

	public void plus(int data1) { // 加算メソッド
		this.data1 += data1;
		data2 += data1;
	}

	public void minus(int data1) { // 減算メソッド
		this.data1 -= data1;
		data2 -= data1;
	}

	public int getData1() { // 整数出力メソッド
		return data1;
	}

	public static int getData2() { // 合計出力メソッド
		return data2;
	}
}
