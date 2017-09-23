public class Manager extends Employee{
	int allowance; // 管理職手当

	public Manager(int no, String name, int kyuyo, int allowance) { // コンストラクタ
		super(no, name, kyuyo);
		this.allowance = allowance;
	}

	@Override
	public void dispKyuyo() { // 給与額出力メソッド
		System.out.println("給与額:" + (getKyuyo() + getZangyo() + allowance) + "円");
	}

	@Override
	public void dispData() { // 社員情報出力メソッド
		System.out.println("社員番号:" + getNo() +
							" 社員名:" + getName() +
							" 給与額:" + (getKyuyo() + getZangyo() + allowance) + "円");
	}
}
