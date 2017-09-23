public class Employee {
	private int no; // 社員番号
	private String name; // 社員名
	private int kyuyo; // 基本給
	private int zangyo; // 残業代

	public Employee(int no, String name, int kyuyo) { // コンストラクタ
		this.no = no;
		this.name = name;
		this.kyuyo = kyuyo;
	}

	public void setZangyo(int zangyo) { // 残業代セッター
		this.zangyo = zangyo;
	}

	public int getNo() { // 社員番号ゲッター
		return no;
	}

	public String getName() { // 社員名ゲッター
		return name;
	}

	public int getKyuyo() { // 基本給ゲッター
		return kyuyo;
	}

	public int getZangyo() { // 残業代ゲッター
		return zangyo;
	}

	public void dispKyuyo() { // 給与額出力メソッド
		System.out.println("給与額:" + (kyuyo + zangyo) + "円");
	}

	public void dispData() { // 社員情報出力メソッド
		System.out.println("社員番号:" + no +
							" 社員名:" + name +
							" 給与額:" + (kyuyo + zangyo + "円"));
	}
}