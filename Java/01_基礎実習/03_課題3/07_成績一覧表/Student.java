package jkadai03;

public class Student {
	private int no; // ①(番号のフィールド)
	private String name; // ①(氏名のフィールド)
	private int score; // ①(点数のフィールド)

	public Student() { // ②(引数なしのコンストラクタを定義)
		System.out.println("インスタンスを生成しました。");
	}

	public Student(int no, String name, int score) { // ③(引数ありのコンストラクタのオーバーロード(多重定義))
		// 引数とフィールドの変数名が被っているが、this.no(自分自身のインスタンスの番号のフィールド)で区別して参照できる
		this.no = no; // ③(no フィールドに引数(no)を代入)
		this.name = name; // ③(name フィールドに引数(name)を代入)
		this.score = score; // ③(score フィールドに引数(score)を代入)
		System.out.println(
				"データをフィールドに設定し、インスタンスを生成しました。"); // ③(メッセージ出力)
	}

	public void setNo(int no) { // ④(no の setter(フィールドに値を代入するメソッド))
		this.no = no;
		System.out.println("番号をフィールドに設定しました。"); // ④(メッセージ出力)
	}

	public void setName(String name) { // ④(name の setter(フィールドに値を代入するメソッド))
		this.name = name;
		System.out.println("氏名をフィールドに設定しました。"); // ④(メッセージ出力)
	}

	public void setScore(int score) { // ④(score の setter(フィールドに値を代入するメソッド))
		this.score = score;
		System.out.println("点数をフィールドに設定しました。"); // ④(メッセージ出力)
	}

	public int getNo() { // ⑤(no の getter(フィールドの値を取り出すメソッド))
		return no;
	}

	public String getName() { // ⑤(name の getter(フィールドの値を取り出すメソッド))
		return name;
	}

	public int getScore() { // ⑤(score の getter(フィールドの値を取り出すメソッド))
		return score;
	}

	public void setData(int no, String name, int score) { // ⑥(no, name, score の setter)
		this.no = no;
		this.name = name;
		this.score = score;
		System.out.println("データをフィールドに設定しました。");
	}

	public void dispData() { // ⑦(no, name, score を出力するメソッド)
		System.out.printf("番号:%d, 氏名:%s, 点数:%d\n", no, name, score);
	}

	public String toString() { // ⑧(toString メソッドのオーバーライド(親クラスのメンバを子クラスで上書き))
		String str = "番号:" + no +
					 ", 氏名:" + name +
					 ", 点数:" + score;
		return str; // ⑧(結合した文字列を返す)
	}
}
