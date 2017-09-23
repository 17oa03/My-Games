public class Staff {
	private int no; // 番号
	private String name; // 名前
	private int age; // 年齢

	public Staff(int no, String name, int age) { // 引数有コンストラクタ
		this.no = no;
		this.name = name;
		this.age = age;
	}

	public Staff() { // 引数無コンストラクタ
	}

	public void setNo(int no) { // 番号のセッター
		this.no = no;
	}

	public void setName(String name) { // 名前のセッター
		this.name = name;
	}

	public void setAge(int age) { // 年齢のセッター
		this.age = age;
	}

	public int getNo() { // 番号のゲッター
		return no;
	}

	public String getName() { // 名前のゲッター
		return name;
	}

	public int getAge() { // 年齢のゲッター
		return age;
	}
}
