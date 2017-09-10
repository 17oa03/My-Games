package jkadai03;

public class Student {
	private int no; // 番号のフィールド
	private String name; // 氏名のフィールド
	private int score; // 点数のフィールド

	public Student() { // コンストラクタ
		System.out.println("インスタンスを生成しました。");
	}

	public Student(int no, String name, int score) { // コンストラクタのオーバーロード(多重定義)
		this.no = no; // 引数とフィールドの変数名が被っているが、this.no(自分自身のインスタンスの番号のフィールド)で区別して参照できる
		this.name = name; // name フィールドに、引数 name を代入する
		this.score = score; // score フィールドに、引数 score を代入する
		System.out.println(
				"データをフィールドに設定し、インスタンスを生成しました。");
	}

	public void setNo(int no) { // no の setter(フィールドに値を代入するメソッド)
		this.no = no; // no フィールドに、引数 no を代入する
		System.out.println("番号をフィールドに設定しました。");
	}

	public void setName(String name) { // name の setter(フィールドに値を代入するメソッド)
		this.name = name; // name フィールドに、引数 name を代入する
		System.out.println("氏名をフィールドに設定しました。");
	}

	public void setScore(int score) { // score の setter(フィールドに値を代入するメソッド)
		this.score = score; // score フィールドに、引数 score を代入する
		System.out.println("点数をフィールドに設定しました。");
	}

	public int getNo() { // no の getter(フィールドの値を取り出すメソッド)
		return no; // 番号のフィールドの値を返す
	}

	public String getName() { // name の getter(フィールドの値を取り出すメソッド)
		return name; // 氏名のフィールドの値を返す
	}

	public int getScore() { // score の getter(フィールドの値を取り出すメソッド)
		return score; // 点数のフィールドの値を返す
	}

	public void setData(int no, String name, int score) { // no, name, score の setter
		this.no = no; // no フィールドに、引数 no を代入する
		this.name = name; // name フィールドに、引数 name を代入する
		this.score = score; // score フィールドに、引数 score を代入する
		System.out.println("データをフィールドに設定しました。");
	}

	public void dispData() { // no, name, score を出力するメソッド
		System.out.printf("番号:%d, 氏名:%s, 点数:%d\n", no, name, score);
	}

	public String toString() { // toString メソッドのオーバーライド(親クラスのメンバを子クラスで上書き)
		String str = "番号:" + no +
					 ", 氏名:" + name +
					 ", 点数:" + score;
		return str; // 結合した文字列を返す
	}
}
