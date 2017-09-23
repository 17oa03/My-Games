public class Employee {
	private int no; // 社員番号
	private String name; // 社員名
	private int kyuyo; // 給与
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

	public int getKyuyo() { // 給与ゲッター
		return kyuyo;
	}

	public void dispKyuyo() { // 給与出力
		System.out.println("給与:" + (getKyuyo() + zangyo) + "円");
	}

	public void dispData() { // 社員情報出力
		System.out.println("社員番号:" + getNo() +
							" 社員名:" + getName() +
							" 給与:" + (getKyuyo() + zangyo + "円"));
	}
}