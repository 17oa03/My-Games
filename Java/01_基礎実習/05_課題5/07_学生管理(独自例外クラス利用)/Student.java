package jkadai05;

public class Student {
	private int no;
	private String name;
	private int score;

	public Student() {
		System.out.println("インスタンスを生成しました。");
	}

	public Student(int no, String name, int score) {
		this.no = no;
		this.name = name;
		this.score = score;
		System.out.println(
				"データをフィールドに設定し、インスタンスを生成しました。");
	}

	public void setNo(int no) {
		this.no = no;
		System.out.println("番号をフィールドに設定しました。");
	}

	public void setName(String name) {
		this.name = name;
		System.out.println("氏名をフィールドに設定しました。");
	}

	public void setScore(int score) {
		this.score = score;
		System.out.println("点数をフィールドに設定しました。");
	}

	public int getNo() {
		return no;
	}

	public String getName() {
		return name;
	}

	public int getScore() {
		return score;
	}

	public void setData(int no, String name, int score) {
		this.no = no;
		this.name = name;
		this.score = score;
		System.out.println("データをフィールドに設定しました。");
	}

	public void dispData() {
		System.out.printf("番号:%d, 氏名:%s, 点数:%d\n", no, name, score);
	}

	public String toString() {
		String str = "番号:" + no +
					 ", 氏名:" + name +
					 ", 点数:" + score;
		return str;
	}
}
