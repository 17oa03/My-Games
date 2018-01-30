// (3)③管理職クラス
public class Manager extends Employee {
	// 管理職手当のフィールド
	private int allowance;

	// コンストラクタ
	public Manager(int no, String name, int salary, int allowance) {
		// スーパークラス(Employee)のコンストラクタの呼び出し
		super(no, name, salary);
		// 管理者手当のフィールドに引数を代入
		this.allowance = allowance;
	}

	// スーパークラス(Employee)の出力メソッドを上書き(オーバーライド)
	@Override
	public void printData() {
		System.out.println(
			"番号：" + getNo() + ", " +
			"氏名：" + getName() + ", " +
			"支給額：" + (getSalary() + allowance));
	}
}