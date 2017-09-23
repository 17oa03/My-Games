public class Keisan {
	private int data1; // 1個目の引数
	private int data2; // 2個目の引数
	private int data3; // 3個目の引数
	private int data4; // 4個目の引数

	public void setData(int data1, int data2) { // セッター
		this.data1 = data1;
		this.data2 = data2;
	}

	public void setData(int data1, int data2, int data3) { // セッター
		this.data1 = data1;
		this.data2 = data2;
		this.data3 = data3;
	}

	public void setData(int data1, int data2, int data3, int data4) { // セッター
		this.data1 = data1;
		this.data2 = data2;
		this.data3 = data3;
		this.data4 = data4;
	}

	public void setData() { // セッター
	}

	public int getAnswer() { // 計算出力メソッド
		return data1 + data2 + data3 + data4;
	}
}
