// 2.(3)Item クラス
public class Item {
	// 2.(3)フィールド
	private String shohin_mei = null;
	private int zaiko_su = 0;
	private int price = 0;

	public Item(String shohin_mei, int price, int zaiko_su) {
		this.shohin_mei = shohin_mei;
		this.price = price;
		this.zaiko_su = zaiko_su;
	}

	// 2.(3).②各フィールドのセッター
	public void setShohin_mei(String shohin_mei) {
		this.shohin_mei = shohin_mei;
	}

	// 2.(3).②各フィールドのセッター
	public void setPrice(int price) {
		this.price = price;
	}

	// 2.(3).②各フィールドのセッター
	public void setZaiko_su(int zaiko_su) {
		this.zaiko_su = zaiko_su;
	}

	// 2.(3).②各フィールドのゲッター
	public String getShohin_mei() {
		return shohin_mei;
	}

	// 2.(3).②各フィールドのゲッター
	public int getPrice() {
		return price;
	}

	// 2.(3).②各フィールドのゲッター
	public int getZaiko_su() {
		return zaiko_su;
	}

}
