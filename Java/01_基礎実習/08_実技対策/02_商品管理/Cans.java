// 2.(6)Item クラスを継承する
public class Cans extends Item {

	// 2.(6)コンストラクタでフィールドに値をセットする
	public Cans(String shohin_mei, int price, int zaiko_su) {
		super(shohin_mei, price, zaiko_su);
	}

	// 2.(6)Price のゲッター
	@Override
	public int getPrice() {
		// 2.(6)在庫数による定価変動
		if (super.getZaiko_su() > 100)
			return super.getPrice();
		else if(super.getZaiko_su() > 50)
			return super.getPrice() * 80 / 100;
		else
			return super.getPrice() * 60 / 100;
	}

}