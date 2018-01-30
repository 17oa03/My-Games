// (3)②一般社員クラス
public class Employee {
	// 番号のフィールド
	private int no;
	// 氏名のフィールド
	private String name;
	// 給与のフィールド
	private int salary;

	// コンストラクタ
	public Employee(int no, String name, int salary) {
		this.no = no;
		this.name = name;
		this.salary = salary;
	}

	// 番号のゲッター
	public int getNo() {
		return no;
	}

	// 氏名のゲッター
	public String getName() {
		return name;
	}

	// 給与のゲッター
	public int getSalary() {
		return salary;
	}

	// 出力メソッド
	public void printData() {
		System.out.println(
			"番号：" + no + ", " +
			"氏名：" + name + ", " +
			"支給額：" + salary);
	}
}