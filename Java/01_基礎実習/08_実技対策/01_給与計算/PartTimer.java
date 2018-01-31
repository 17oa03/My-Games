// (3)④パートタイマークラス
public class PartTimer extends Employee {
	// 月間勤務時間のフィールド
	private int hour;

	// コンストラクタ
	public PartTimer(int no, String name,int allowance, int hour) {
		// スーパークラス(Employee)のコンストラクタの呼び出し
		super(no, name, allowance);
		// 月間勤務時間のフィールドに引数を代入
		this.hour = hour;
	}

	// スーパークラス(Employee)の出力メソッドを上書き(オーバーライド)
	@Override
	public void printData() {
		System.out.println(
			"番号：" + getNo() + ", " +
			"氏名：" + getName() + ", " +
			"支給額：" + getSalary() * hour);
	}
}