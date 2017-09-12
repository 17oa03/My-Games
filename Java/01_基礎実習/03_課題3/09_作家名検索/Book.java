package jkadai03;

public class Book { // (2)書籍クラスの定義
	private String novelist; // ①(作家名のフィールド)
	private String novel; // ①(作品名のフィールド)

	public Book(String novelist, String novel) { // ②(コンストラクタ)
		this.novelist = novelist; // ②(作家名の設定)
		this.novel = novel; // ②(作品名の設定)
	}

	public String getNovelist() { // ③(作家名の getter)
		return novelist;
	}

	public String getNovel() { // ③(作品名の getter)
		return novel;
	}
}
